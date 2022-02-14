
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {int code_page; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int WORD ;
typedef int VARIANT ;
struct TYPE_7__ {int cArgs; int cNamedArgs; int * rgdispidNamedArgs; int * rgvarg; } ;
typedef scalar_t__ HRESULT ;
typedef TYPE_2__ DISPPARAMS ;
typedef int DISPID ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int,TYPE_2__*,int *,int,int) ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int,int,int ) ;

int FUNC_6(php_com_dotnet_object *VAR_5, DISPID VAR_6,
  WORD VAR_7, VARIANT *VAR_8, int VAR_9, zval *VAR_10, int VAR_11, int VAR_12)
{
 DISPID VAR_13;
 DISPPARAMS VAR_14;
 HRESULT VAR_15;
 VARIANT *VAR_16 = ((void*)0);
 int VAR_17;

 if (VAR_9) {
  VAR_16 = (VARIANT*)FUNC_5(sizeof(VARIANT), VAR_9, 0);
 }


 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
  FUNC_4(&VAR_16[VAR_17], &VAR_10[VAR_9 - VAR_17 - 1], VAR_5->code_page);
 }

 VAR_14.cArgs = VAR_9;
 VAR_14.cNamedArgs = 0;
 VAR_14.rgvarg = VAR_16;
 VAR_14.rgdispidNamedArgs = ((void*)0);

 if (VAR_7 & VAR_0) {
  VAR_13 = VAR_1;
  VAR_14.rgdispidNamedArgs = &VAR_13;
  VAR_14.cNamedArgs = 1;
 }


 VAR_15 = FUNC_3(VAR_5, VAR_6, VAR_7, &VAR_14, VAR_8, VAR_11, VAR_12);


 if (VAR_16) {
  for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
   FUNC_1(&VAR_16[VAR_17]);
  }
  FUNC_2(VAR_16);
 }


 if (VAR_15 == VAR_2)
  return VAR_15;

 return FUNC_0(VAR_15) ? VAR_4 : VAR_3;
}
