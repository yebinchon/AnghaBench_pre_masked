
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; int integer; char* str; } ;
typedef TYPE_1__ redisReply ;
struct TYPE_11__ {TYPE_3__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
struct TYPE_12__ {int flags; char* ip; int port; int slots_count; int name; scalar_t__ replicate; } ;
typedef TYPE_3__ clusterManagerNode ;
struct TYPE_13__ {int nodes; } ;


 TYPE_1__* FUNC_0 (TYPE_3__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int,int) ;
 TYPE_6__ VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_9(void) {
    int VAR_5 = 0;
    int VAR_6 = 0;
    listIter VAR_7;
    listNode *VAR_8;
    FUNC_5(VAR_4.nodes, &VAR_7);
    while ((VAR_8 = FUNC_4(&VAR_7)) != ((void*)0)) {
        clusterManagerNode *VAR_9 = VAR_8->value;
        if (!(VAR_9->flags & VAR_0)) {
            if (!VAR_9->name) continue;
            int VAR_10 = 0;
            int VAR_11 = -1;
            char VAR_12[9];
            FUNC_6(VAR_12, VAR_9->name, 8);
            VAR_12[8] = '\0';
            listIter VAR_13;
            listNode *VAR_14;
            FUNC_5(VAR_4.nodes, &VAR_13);
            while ((VAR_14 = FUNC_4(&VAR_13)) != ((void*)0)) {
                clusterManagerNode *VAR_15 = VAR_14->value;
                if (VAR_15 == VAR_9 || !(VAR_15->flags & VAR_0))
                    continue;
                if (VAR_15->replicate && !FUNC_8(VAR_15->replicate, VAR_9->name))
                    VAR_10++;
            }
            redisReply *VAR_16 = FUNC_0(VAR_9, "DBSIZE");
            if (VAR_16 != ((void*)0) && VAR_16->type == VAR_3)
                VAR_11 = VAR_16->integer;
            if (VAR_11 < 0) {
                char *VAR_17 = "";
                if (VAR_16 != ((void*)0) && VAR_16->type == VAR_2)
                    VAR_17 = VAR_16->str;
                FUNC_1(VAR_9, VAR_17);
                if (VAR_16 != ((void*)0)) FUNC_3(VAR_16);
                return;
            };
            if (VAR_16 != ((void*)0)) FUNC_3(VAR_16);
            FUNC_7("%s:%d (%s...) -> %d keys | %d slots | %d slaves.\n",
                   VAR_9->ip, VAR_9->port, VAR_12, VAR_11,
                   VAR_9->slots_count, VAR_10);
            VAR_5++;
            VAR_6 += VAR_11;
        }
    }
    FUNC_2("[OK] %d keys in %d masters.\n", VAR_6, VAR_5);
    float VAR_18 = VAR_6 / (float) VAR_1;
    FUNC_7("%.2f keys per slot on average.\n", VAR_18);
}
