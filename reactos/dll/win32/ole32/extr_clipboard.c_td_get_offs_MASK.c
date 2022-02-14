
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* entries; } ;
typedef TYPE_3__ ole_priv_data ;
struct TYPE_5__ {int * ptd; } ;
struct TYPE_6__ {TYPE_1__ fmtetc; } ;
typedef int DWORD_PTR ;
typedef size_t DWORD ;



__attribute__((used)) static inline DWORD_PTR FUNC_0(ole_priv_data *VAR_0, DWORD VAR_1)
{
    if(VAR_0->entries[VAR_1].fmtetc.ptd == ((void*)0)) return 0;
    return (char*)VAR_0->entries[VAR_1].fmtetc.ptd - (char*)VAR_0;
}
