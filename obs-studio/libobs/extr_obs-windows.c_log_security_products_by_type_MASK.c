
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int WSC_SECURITY_PRODUCT_STATE ;
struct TYPE_18__ {TYPE_2__* lpVtbl; } ;
struct TYPE_17__ {TYPE_1__* lpVtbl; } ;
struct TYPE_16__ {int (* Release ) (TYPE_4__*) ;int (* get_Item ) (TYPE_4__*,int,TYPE_3__**) ;int (* get_Count ) (TYPE_4__*,int*) ;int (* Initialize ) (TYPE_4__*,int) ;} ;
struct TYPE_15__ {int (* Release ) (TYPE_3__*) ;int (* get_ProductState ) (TYPE_3__*,int *) ;int (* get_ProductName ) (TYPE_3__*,int *) ;} ;
typedef int LONG ;
typedef TYPE_3__ IWscProduct ;
typedef TYPE_4__ IWSCProductList ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*,int*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int,TYPE_3__**) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_13(IWSCProductList *VAR_1, int VAR_2)
{
 HRESULT VAR_3;
 LONG VAR_4 = 0;
 IWscProduct *VAR_5;
 BSTR VAR_6;
 WSC_SECURITY_PRODUCT_STATE VAR_7;

 VAR_3 = VAR_1->lpVtbl->Initialize(VAR_1, VAR_2);

 if (FUNC_0(VAR_3))
  return;

 VAR_3 = VAR_1->lpVtbl->get_Count(VAR_1, &VAR_4);
 if (FUNC_0(VAR_3)) {
  VAR_1->lpVtbl->Release(VAR_1);
  return;
 }

 for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_3 = VAR_1->lpVtbl->get_Item(VAR_1, VAR_8, &VAR_5);
  if (FUNC_0(VAR_3))
   continue;

  VAR_3 = VAR_5->lpVtbl->get_ProductName(VAR_5, &VAR_6);
  if (FUNC_0(VAR_3))
   continue;

  VAR_3 = VAR_5->lpVtbl->get_ProductState(VAR_5, &VAR_7);
  if (FUNC_0(VAR_3)) {
   FUNC_1(VAR_6);
   continue;
  }

  FUNC_2(VAR_0, "\t%S: %s (%s)", VAR_6,
       FUNC_3(VAR_7), FUNC_4(VAR_2));

  FUNC_1(VAR_6);
  VAR_5->lpVtbl->Release(VAR_5);
 }

 VAR_1->lpVtbl->Release(VAR_1);
}
