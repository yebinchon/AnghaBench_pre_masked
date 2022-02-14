
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int typeinfo ;
typedef int sds ;
struct TYPE_9__ {unsigned int elements; scalar_t__ type; char* str; TYPE_1__** element; } ;
typedef TYPE_2__ redisReply ;
typedef int dictEntry ;
typedef int dict ;
struct TYPE_10__ {int err; char* errstr; } ;
struct TYPE_8__ {char* str; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,scalar_t__,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,char*,char*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,void**) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int VAR_5 ;
 int * FUNC_10 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_11(dict *VAR_6, redisReply *VAR_7, typeinfo **VAR_8) {
    redisReply *VAR_9;
    unsigned int VAR_10;


    for(VAR_10=0;VAR_10<VAR_7->elements;VAR_10++) {
        FUNC_5(VAR_3, "TYPE %s", VAR_7->element[VAR_10]->str);
    }


    for(VAR_10=0;VAR_10<VAR_7->elements;VAR_10++) {
        if(FUNC_6(VAR_3, (void**)&VAR_9)!=VAR_0) {
            FUNC_3(VAR_4, "Error getting type for key '%ld' (%d: %s)\n",
                VAR_7->element[VAR_10]->str, VAR_3->err, VAR_3->errstr);
            FUNC_2(1);
        } else if(VAR_9->type != VAR_2) {
            if(VAR_9->type == VAR_1) {
                FUNC_3(VAR_4, "TYPE returned an error: %ld\n", VAR_9->str);
            } else {
                FUNC_3(VAR_4,
                    "Invalid reply type (%ld) for TYPE on key '%s'!\n",
                    VAR_9->type, VAR_7->element[VAR_10]->str);
            }
            FUNC_2(1);
        }

        sds VAR_11 = FUNC_8(VAR_9->str);
        dictEntry *VAR_12 = FUNC_0(VAR_6, VAR_11);
        FUNC_7(VAR_11);
        typeinfo *VAR_13 = ((void*)0);
        if (VAR_12)
            VAR_13 = FUNC_1(VAR_12);
        else if (FUNC_9(VAR_9->str, "none"))
            VAR_13 = FUNC_10(VAR_6, VAR_9->str, &VAR_5);
        VAR_8[VAR_10] = VAR_13;
        FUNC_4(VAR_9);
    }
}
