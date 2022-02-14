
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; int fmtetc_cnt; TYPE_1__ IEnumFORMATETC_iface; void* fmtetc; scalar_t__ cur; } ;
typedef TYPE_1__ IEnumFORMATETC ;
typedef int HRESULT ;
typedef int FORMATETC ;
typedef TYPE_2__ EnumFormatImpl ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (void*,int *,int) ;

__attribute__((used)) static HRESULT FUNC_3(FORMATETC *VAR_2, UINT VAR_3, IEnumFORMATETC **VAR_4)
{
    EnumFormatImpl *VAR_5;

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(EnumFormatImpl));
    VAR_5->IEnumFORMATETC_iface.lpVtbl = &VAR_1;
    VAR_5->ref = 1;
    VAR_5->cur = 0;
    VAR_5->fmtetc_cnt = VAR_3;
    VAR_5->fmtetc = FUNC_1(FUNC_0(), 0, VAR_3*sizeof(FORMATETC));
    FUNC_2(VAR_5->fmtetc, VAR_2, VAR_3*sizeof(FORMATETC));
    *VAR_4 = &VAR_5->IEnumFORMATETC_iface;
    return VAR_0;
}
