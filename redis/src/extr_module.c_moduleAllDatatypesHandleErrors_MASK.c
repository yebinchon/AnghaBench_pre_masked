
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RedisModule {int options; int types; } ;
typedef int dictIterator ;
typedef int dictEntry ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 struct RedisModule* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;

int FUNC_5() {
    dictIterator *VAR_2 = FUNC_0(VAR_1);
    dictEntry *VAR_3;

    while ((VAR_3 = FUNC_2(VAR_2)) != ((void*)0)) {
        struct RedisModule *VAR_4 = FUNC_1(VAR_3);
        if (FUNC_4(VAR_4->types) &&
            !(VAR_4->options & VAR_0))
        {
            FUNC_3(VAR_2);
            return 0;
        }
    }
    FUNC_3(VAR_2);
    return 1;
}
