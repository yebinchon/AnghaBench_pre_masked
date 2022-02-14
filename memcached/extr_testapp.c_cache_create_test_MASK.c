
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int cache_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int,int,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static enum test_return FUNC_3(void)
{
    cache_t *VAR_1 = FUNC_1("test", sizeof(uint32_t), sizeof(char*),
                                  ((void*)0), ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_2(VAR_1);
    return VAR_0;
}
