
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct num2name_data_st {scalar_t__ idx; char const* name; } ;



__attribute__((used)) static void FUNC_0(const char *VAR_0, void *VAR_1)
{
    struct num2name_data_st *VAR_2 = VAR_1;

    if (VAR_2->idx > 0)
        VAR_2->idx--;
    else if (VAR_2->name == ((void*)0))
        VAR_2->name = VAR_0;
}
