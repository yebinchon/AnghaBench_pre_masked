
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static enum test_return FUNC_4(void)
{
    enum test_return VAR_3 = VAR_1;

    cache_t *VAR_4 = FUNC_2("test", sizeof(uint64_t), sizeof(uint64_t),
                                  VAR_2, ((void*)0));
    FUNC_0(VAR_4 != ((void*)0));
    uint64_t *VAR_5 = FUNC_1(VAR_4);
    if (VAR_5 != ((void*)0)) {
        VAR_3 = VAR_0;
    }
    FUNC_3(VAR_4);
    return VAR_3;
}
