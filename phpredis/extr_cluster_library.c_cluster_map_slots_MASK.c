
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {short low; short high; } ;
typedef TYPE_1__ redisSlotRange ;
struct TYPE_17__ {int slots; } ;
typedef TYPE_2__ redisClusterNode ;
struct TYPE_18__ {TYPE_2__** master; int nodes; } ;
typedef TYPE_3__ redisCluster ;
typedef int key ;
struct TYPE_19__ {int elements; char* str; int len; scalar_t__ integer; struct TYPE_19__** element; } ;
typedef TYPE_4__ clusterReply ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,char*,int,unsigned short,short,int) ;
 int FUNC_4 (char*,int,char*,char*,unsigned short) ;
 TYPE_2__* FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,char*,int,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(redisCluster *VAR_0, clusterReply *VAR_1) {
    redisClusterNode *VAR_2, *VAR_3, *VAR_4;
    redisSlotRange VAR_5;
    int VAR_6,VAR_7, VAR_8, VAR_9;
    short VAR_10, VAR_11;
    clusterReply *VAR_12, *VAR_13;
    unsigned short VAR_14;
    char *VAR_15, VAR_16[1024];

    for (VAR_6 = 0; VAR_6 < VAR_1->elements; VAR_6++) {

        VAR_12 = VAR_1->element[VAR_6];


        if (!FUNC_1(VAR_12) || !FUNC_0(VAR_12->element[2])) {
            return -1;
        }


        VAR_13 = VAR_12->element[2];


        VAR_10 = (unsigned short)VAR_12->element[0]->integer;
        VAR_11 = (unsigned short)VAR_12->element[1]->integer;
        VAR_15 = VAR_13->element[0]->str;
        VAR_8 = VAR_13->element[0]->len;
        VAR_14 = (unsigned short)VAR_13->element[1]->integer;


        VAR_9 = FUNC_4(VAR_16, sizeof(VAR_16), "%s:%d", VAR_15, VAR_14);
        if ((VAR_2 = FUNC_5(VAR_0->nodes, VAR_16, VAR_9)) == ((void*)0)) {
            VAR_3 = FUNC_3(VAR_0, VAR_15, VAR_8, VAR_14, VAR_10, 0);
            FUNC_6(VAR_0->nodes, VAR_16, VAR_9, VAR_3);
        } else {
            VAR_3 = VAR_2;
        }


        for (VAR_7 = 3; VAR_7< VAR_12->elements; VAR_7++) {
            VAR_13 = VAR_12->element[VAR_7];
            if (!FUNC_0(VAR_13)) {
                return -1;
            }


            if (VAR_13->element[0]->len == 0) continue;


            VAR_4 = FUNC_3(VAR_0, VAR_13->element[0]->str,
                (int)VAR_13->element[0]->len,
                (unsigned short)VAR_13->element[1]->integer, VAR_10, 1);
            FUNC_2(VAR_3, VAR_4);
        }


        for (VAR_7 = VAR_10; VAR_7<= VAR_11; VAR_7++) {
            VAR_0->master[VAR_7] = VAR_3;
        }


        VAR_5.low = VAR_10; VAR_5.high = VAR_11;
        FUNC_7(&VAR_3->slots, &VAR_5);
    }


    return 0;
}
