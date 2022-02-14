
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; int it; int fetc_cnt; TYPE_1__ IEnumFORMATETC_iface; void* fetc; } ;
typedef TYPE_1__ IEnumFORMATETC ;
typedef int FORMATETC ;
typedef TYPE_2__ EnumFORMATETC ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int const*,int) ;

__attribute__((used)) static IEnumFORMATETC *FUNC_3(UINT VAR_1, const FORMATETC *VAR_2, UINT VAR_3)
{
    EnumFORMATETC *VAR_4 = FUNC_1(sizeof(EnumFORMATETC));

    FUNC_0();

    VAR_4->IEnumFORMATETC_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->it = VAR_3;
    VAR_4->fetc_cnt = VAR_1;

    VAR_4->fetc = FUNC_1(VAR_1*sizeof(FORMATETC));
    FUNC_2(VAR_4->fetc, VAR_2, VAR_1*sizeof(FORMATETC));

    return &VAR_4->IEnumFORMATETC_iface;
}
