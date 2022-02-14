
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cfFormat; } ;
struct TYPE_6__ {TYPE_1__ fmtetc; } ;
typedef TYPE_2__ ole_priv_data_entry ;
typedef scalar_t__ UINT ;
typedef size_t DWORD ;



__attribute__((used)) static inline ole_priv_data_entry *FUNC_0(ole_priv_data_entry *VAR_0, DWORD VAR_1, UINT VAR_2)
{
    DWORD VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        if(VAR_0[VAR_3].fmtetc.cfFormat == VAR_2)
            return &VAR_0[VAR_3];

    return ((void*)0);
}
