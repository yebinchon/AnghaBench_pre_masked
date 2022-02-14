
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu {scalar_t__ machine; } ;
typedef scalar_t__ DWORD ;


 struct cpu** VAR_0 ;

struct cpu* FUNC_0(DWORD VAR_1)
{
    struct cpu** VAR_2;

    for (VAR_2 = VAR_0 ; *VAR_2; VAR_2++)
    {
        if (VAR_2[0]->machine == VAR_1) return VAR_2[0];
    }
    return ((void*)0);
}
