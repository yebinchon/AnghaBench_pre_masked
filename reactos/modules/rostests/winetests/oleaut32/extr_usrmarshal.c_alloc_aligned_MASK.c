
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT_PTR ;
typedef scalar_t__ SIZE_T ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void *FUNC_2(SIZE_T VAR_0, void **VAR_1)
{
    *VAR_1 = FUNC_1(FUNC_0(), 0, VAR_0 + 7);
    return (void *)(((UINT_PTR)*VAR_1 + 7) & ~7);
}
