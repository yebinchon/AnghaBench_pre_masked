
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int fmtetc_cnt; TYPE_1__ IEnumFORMATETC_iface; int fmtetc; scalar_t__ cur; } ;
typedef TYPE_1__ IEnumFORMATETC ;
typedef int HRESULT ;
typedef int FORMATETC ;
typedef TYPE_2__ EnumFormatImpl ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ,int const*,int) ;

__attribute__((used)) static HRESULT FUNC_4(const FORMATETC *VAR_3, UINT VAR_4,
                                     IEnumFORMATETC **VAR_5)
{
    EnumFormatImpl *VAR_6;
    FUNC_1("\n");

    VAR_6 = FUNC_2(sizeof(EnumFormatImpl));
    VAR_6->IEnumFORMATETC_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;
    VAR_6->cur = 0;
    VAR_6->fmtetc_cnt = VAR_4;
    VAR_6->fmtetc = FUNC_0(VAR_0, VAR_4*sizeof(FORMATETC));
    FUNC_3(VAR_6->fmtetc, VAR_3, VAR_4*sizeof(FORMATETC));
    *VAR_5 = &VAR_6->IEnumFORMATETC_iface;
    return VAR_1;
}
