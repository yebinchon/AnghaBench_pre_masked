
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int cache_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static enum test_return FUNC_5(void)
{
    int VAR_1;
    cache_t *VAR_2 = FUNC_2("test", sizeof(uint32_t), sizeof(char*),
                                  ((void*)0), ((void*)0));
    char *VAR_3 = FUNC_1(VAR_2);
    FUNC_4(VAR_2, VAR_3);
    for (VAR_1 = 0; VAR_1 < 100; ++VAR_1) {
        char *VAR_4 = FUNC_1(VAR_2);
        FUNC_0(VAR_4 == VAR_3);
        FUNC_4(VAR_2, VAR_3);
    }
    FUNC_3(VAR_2);
    return VAR_0;
}
