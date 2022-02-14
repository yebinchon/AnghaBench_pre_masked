
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evp_method_data_st {int (* destruct_method ) (void*) ;} ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1)
{
    struct evp_method_data_st *VAR_2 = VAR_1;

    VAR_2->destruct_method(VAR_0);
}
