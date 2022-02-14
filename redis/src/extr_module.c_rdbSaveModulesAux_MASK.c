
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct RedisModule {int types; } ;
typedef int ssize_t ;
typedef int rio ;
struct TYPE_5__ {int aux_save_triggers; int aux_save; } ;
typedef TYPE_1__ moduleType ;
struct TYPE_6__ {TYPE_1__* value; } ;
typedef TYPE_2__ listNode ;
typedef int listIter ;
typedef int dictIterator ;
typedef int dictEntry ;


 int * FUNC_0 (int ) ;
 struct RedisModule* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_0 ;
 int FUNC_6 (int *,int,TYPE_1__*) ;

ssize_t FUNC_7(rio *VAR_1, int VAR_2) {
    size_t VAR_3 = 0;
    dictIterator *VAR_4 = FUNC_0(VAR_0);
    dictEntry *VAR_5;

    while ((VAR_5 = FUNC_2(VAR_4)) != ((void*)0)) {
        struct RedisModule *VAR_6 = FUNC_1(VAR_5);
        listIter VAR_7;
        listNode *VAR_8;

        FUNC_5(VAR_6->types,&VAR_7);
        while((VAR_8 = FUNC_4(&VAR_7))) {
            moduleType *VAR_9 = VAR_8->value;
            if (!VAR_9->aux_save || !(VAR_9->aux_save_triggers & VAR_2))
                continue;
            ssize_t VAR_10 = FUNC_6(VAR_1, VAR_2, VAR_9);
            if (VAR_10==-1) {
                FUNC_3(VAR_4);
                return -1;
            }
            VAR_3 += VAR_10;
        }
    }

    FUNC_3(VAR_4);
    return VAR_3;
}
