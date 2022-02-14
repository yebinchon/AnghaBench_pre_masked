
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int,int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int *,char*) ;
 char* VAR_3 ;

__attribute__((used)) static enum test_return FUNC_5(void)
{
    cache_t *VAR_4 = FUNC_2("test", sizeof(uint32_t), sizeof(char*),
                                  ((void*)0), VAR_2);
    FUNC_0(VAR_4 != ((void*)0));
    char *VAR_5 = FUNC_1(VAR_4);
    FUNC_4(VAR_4, VAR_5);
    FUNC_3(VAR_4);

    return (VAR_5 == VAR_3) ? VAR_1 : VAR_0;
}
