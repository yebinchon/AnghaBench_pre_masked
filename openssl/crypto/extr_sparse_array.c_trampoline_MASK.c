
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trampoline_st {int (* func ) (int ,void*) ;} ;
typedef int ossl_uintmax_t ;


 int FUNC_0 (int ,void*) ;

__attribute__((used)) static void FUNC_1(ossl_uintmax_t VAR_0, void *VAR_1, void *VAR_2)
{
    ((const struct trampoline_st *)VAR_2)->func(VAR_0, VAR_1);
}
