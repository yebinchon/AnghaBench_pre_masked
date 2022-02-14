
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ole_priv_data ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_2__ IEnumFORMATETC_iface; int pos; int * data; } ;
typedef TYPE_1__ enum_fmtetc ;
typedef int UINT ;
typedef TYPE_2__ IEnumFORMATETC ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(ole_priv_data *VAR_3, UINT VAR_4, IEnumFORMATETC **VAR_5)
{
  enum_fmtetc* VAR_6;

  *VAR_5 = ((void*)0);
  VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_6));
  if (!VAR_6) return VAR_0;

  VAR_6->ref = 1;
  VAR_6->IEnumFORMATETC_iface.lpVtbl = &VAR_2;
  VAR_6->data = VAR_3;
  VAR_6->pos = VAR_4;

  FUNC_2("(%p)->()\n", VAR_6);
  *VAR_5 = &VAR_6->IEnumFORMATETC_iface;
  return VAR_1;
}
