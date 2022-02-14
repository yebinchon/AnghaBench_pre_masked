
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;
typedef struct TYPE_19__ TYPE_15__ ;


typedef int zval ;
typedef int zend_type ;
struct TYPE_23__ {int len; int val; } ;
typedef TYPE_3__ zend_string ;
typedef int zend_object ;
struct TYPE_24__ {int num_args; int function_name; TYPE_15__* arg_info; int handler; int fn_flags; int scope; int type; } ;
typedef TYPE_4__ zend_internal_function ;
typedef int zend_function ;
typedef int zend_bool ;
typedef int zend_arg_info ;
struct TYPE_25__ {int * method_cache; int code_page; scalar_t__ typeinfo; int ce; int v; } ;
typedef TYPE_5__ php_com_dotnet_object ;
typedef int f ;
typedef int ULONG ;
struct TYPE_26__ {int * lptcomp; int lpvardesc; TYPE_17__* lpfuncdesc; } ;
struct TYPE_21__ {int wParamFlags; } ;
struct TYPE_22__ {TYPE_1__ paramdesc; } ;
struct TYPE_20__ {int cParams; TYPE_2__* lprgelemdescParam; } ;
struct TYPE_19__ {int type; } ;
typedef int OLECHAR ;
typedef int ITypeInfo ;
typedef int ITypeComp ;
typedef int DISPID ;
typedef int DESCKIND ;
typedef TYPE_6__ BINDPTR ;


 int FUNC_0 (int *) ;




 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int ,int ,int **,int*,TYPE_6__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_17__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int ) ;
 int VAR_7 ;
 TYPE_15__* FUNC_14 (int,int) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (int) ;
 int VAR_8 ;
 int FUNC_17 (int *,TYPE_4__*,int) ;
 int FUNC_18 (TYPE_4__*,int ,int) ;
 int FUNC_19 (TYPE_5__*,int ,int ,int *) ;
 int * FUNC_20 (int ,int ,int ) ;
 TYPE_4__* FUNC_21 (int *,TYPE_3__*) ;
 int FUNC_22 (int *,int,int *,int ,int ) ;
 int FUNC_23 (int *,TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (TYPE_3__*) ;

__attribute__((used)) static zend_function *FUNC_27(zend_object **VAR_9, zend_string *VAR_10, const zval *VAR_11)
{
 zend_internal_function VAR_12, *VAR_13 = ((void*)0);
 zend_function *VAR_14;
 DISPID VAR_15;
 php_com_dotnet_object *VAR_16 = (php_com_dotnet_object*)*VAR_9;

 if (FUNC_11(&VAR_16->v) != VAR_4) {
  return ((void*)0);
 }

 if (FUNC_1(FUNC_19(VAR_16, VAR_10->val, VAR_10->len, &VAR_15))) {
  return ((void*)0);
 }


 if (VAR_16->method_cache == ((void*)0) || ((void*)0) == (VAR_13 = FUNC_21(VAR_16->method_cache, VAR_10))) {
  FUNC_18(&VAR_12, 0, sizeof(zend_internal_function));
  VAR_12.type = VAR_6;
  VAR_12.num_args = 0;
  VAR_12.arg_info = ((void*)0);
  VAR_12.scope = VAR_16->ce;
  VAR_12.fn_flags = VAR_5;
  VAR_12.function_name = FUNC_26(VAR_10);
  VAR_12.handler = FUNC_9(VAR_7);

  VAR_13 = &VAR_12;

  if (VAR_16->typeinfo) {

   ITypeComp *VAR_17;
   ITypeInfo *VAR_18 = ((void*)0);
   DESCKIND VAR_19;
   BINDPTR VAR_20;
   OLECHAR *VAR_21;
   ULONG VAR_22;
   int VAR_23;

   if (FUNC_10(FUNC_4(VAR_16->typeinfo, &VAR_17))) {
    VAR_21 = FUNC_20(VAR_10->val, VAR_10->len, VAR_16->code_page);
    VAR_22 = FUNC_8(VAR_3, VAR_1, VAR_21);

    if (FUNC_10(FUNC_2(VAR_17, VAR_21, VAR_22, VAR_0, &VAR_18, &VAR_19, &VAR_20))) {
     switch (VAR_19) {
      case 131:
       VAR_12.arg_info = FUNC_14(VAR_20.lpfuncdesc->cParams, sizeof(zend_arg_info));

       for (VAR_23 = 0; VAR_23 < VAR_20.lpfuncdesc->cParams; VAR_23++) {
        zend_bool VAR_24 = (VAR_20.lpfuncdesc->lprgelemdescParam[VAR_23].paramdesc.wParamFlags & VAR_2) != 0;
        VAR_12.arg_info[VAR_23].type = (zend_type) FUNC_12(FUNC_13(VAR_24, 0));
       }

       VAR_12.num_args = VAR_20.lpfuncdesc->cParams;

       FUNC_6(VAR_18, VAR_20.lpfuncdesc);
       break;



      case 128:
       FUNC_7(VAR_18, VAR_20.lpvardesc);
       break;
      case 129:
       FUNC_3(VAR_20.lptcomp);
       break;

      case 130:
       break;
     }
     if (VAR_18) {
      FUNC_5(VAR_18);
     }
    }
    FUNC_3(VAR_17);
    FUNC_15(VAR_21);
   }
  }

  FUNC_24((zend_function*)&VAR_12);

  if (!VAR_16->method_cache) {
   FUNC_0(VAR_16->method_cache);
   FUNC_22(VAR_16->method_cache, 2, ((void*)0), VAR_8, 0);
  }

  FUNC_23(VAR_16->method_cache, VAR_10, &VAR_12, sizeof(VAR_12));
 }

 if (VAR_13) {


  FUNC_25(VAR_13->function_name);
  VAR_14 = FUNC_16(sizeof(*VAR_13));
  FUNC_17(VAR_14, VAR_13, sizeof(*VAR_13));

  return VAR_14;
 }

 return ((void*)0);
}
