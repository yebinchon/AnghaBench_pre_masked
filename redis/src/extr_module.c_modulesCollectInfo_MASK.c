
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct RedisModule {int (* info_cb ) (TYPE_1__*,int) ;} ;
typedef int sds ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_4__ {int member_3; int sections; int info; scalar_t__ in_dict_field; int member_4; int member_2; int member_1; struct RedisModule* member_0; } ;
typedef TYPE_1__ RedisModuleInfoCtx ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 struct RedisModule* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*,int) ;

sds FUNC_6(sds VAR_1, sds VAR_2, int VAR_3, int VAR_4) {
    dictIterator *VAR_5 = FUNC_1(VAR_0);
    dictEntry *VAR_6;

    while ((VAR_6 = FUNC_3(VAR_5)) != ((void*)0)) {
        struct RedisModule *VAR_7 = FUNC_2(VAR_6);
        if (!VAR_7->info_cb)
            continue;
        RedisModuleInfoCtx VAR_8 = {VAR_7, VAR_2, VAR_1, VAR_4, 0};
        VAR_7->info_cb(&VAR_8, VAR_3);

        if (VAR_8.in_dict_field)
            FUNC_0(&VAR_8);
        VAR_1 = VAR_8.info;
        VAR_4 = VAR_8.sections;
    }
    FUNC_4(VAR_5);
    return VAR_1;
}
