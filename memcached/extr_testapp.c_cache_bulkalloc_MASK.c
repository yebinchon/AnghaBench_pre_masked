
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int *) ;
 int * FUNC_2 (char*,size_t,int,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (void*,int,size_t) ;

__attribute__((used)) static enum test_return FUNC_6(size_t VAR_2)
{
    cache_t *VAR_3 = FUNC_2("test", VAR_2, sizeof(char*),
                                  ((void*)0), ((void*)0));

    void *VAR_4[1024];

    for (int VAR_5 = 0; VAR_5 < 1024; ++VAR_5) {
        VAR_4[VAR_5] = FUNC_1(VAR_3);
        FUNC_0(VAR_4[VAR_5] != 0);
        FUNC_5(VAR_4[VAR_5], 0xff, VAR_2);
    }

    for (int VAR_6 = 0; VAR_6 < 1024; ++VAR_6) {
        FUNC_4(VAR_3, VAR_4[VAR_6]);
    }


    FUNC_3(VAR_3);
    return VAR_1;
}
