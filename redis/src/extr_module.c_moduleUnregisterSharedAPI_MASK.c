
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_6__ {int sharedapi; } ;
struct TYPE_5__ {int * module; } ;
typedef TYPE_1__ RedisModuleSharedAPI ;
typedef int RedisModule ;


 int FUNC_0 (int ,char const*) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__ VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(RedisModule *VAR_1) {
    int VAR_2 = 0;
    dictIterator *VAR_3 = FUNC_2(VAR_0.sharedapi);
    dictEntry *VAR_4;
    while ((VAR_4 = FUNC_4(VAR_3)) != ((void*)0)) {
        const char *VAR_5 = FUNC_1(VAR_4);
        RedisModuleSharedAPI *VAR_6 = FUNC_3(VAR_4);
        if (VAR_6->module == VAR_1) {
            FUNC_0(VAR_0.sharedapi,VAR_5);
            FUNC_6(VAR_6);
            VAR_2++;
        }
    }
    FUNC_5(VAR_3);
    return VAR_2;
}
