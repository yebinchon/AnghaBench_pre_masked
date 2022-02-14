
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (int *) ;
 int VAR_2 ;
 int * FUNC_2 (char*,int,int,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static enum test_return FUNC_5(void)
{
    cache_t *VAR_4 = FUNC_2("test", sizeof(uint64_t), sizeof(uint64_t),
                                  VAR_2, ((void*)0));
    FUNC_0(VAR_4 != ((void*)0));
    uint64_t *VAR_5 = FUNC_1(VAR_4);
    uint64_t VAR_6 = *VAR_5;
    FUNC_4(VAR_4, VAR_5);
    FUNC_3(VAR_4);
    return (VAR_6 == VAR_3) ? VAR_1 : VAR_0;
}
