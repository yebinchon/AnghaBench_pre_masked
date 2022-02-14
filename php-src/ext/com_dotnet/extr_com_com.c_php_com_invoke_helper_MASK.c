
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int code_page; int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int WORD ;
typedef int VARIANT ;
struct TYPE_10__ {scalar_t__ cNamedArgs; scalar_t__ cArgs; } ;
struct TYPE_9__ {int bstrHelpFile; int bstrDescription; int bstrSource; int member_0; } ;
typedef int HRESULT ;
typedef TYPE_2__ EXCEPINFO ;
typedef TYPE_3__ DISPPARAMS ;
typedef int DISPID ;






 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *,int ,int ,TYPE_3__*,int *,TYPE_2__*,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 char* FUNC_6 (int ,size_t*,int ) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char**,int ,char*,...) ;

HRESULT FUNC_11(php_com_dotnet_object *VAR_3, DISPID VAR_4,
  WORD VAR_5, DISPPARAMS *VAR_6, VARIANT *VAR_7, int VAR_8, int VAR_9)
{
 HRESULT VAR_10;
 unsigned int VAR_11;
 EXCEPINFO VAR_12 = {0};

 VAR_10 = FUNC_1(FUNC_4(&VAR_3->v), VAR_4,
  &VAR_0, VAR_1, VAR_5, VAR_6, VAR_7, &VAR_12, &VAR_11);

 if (VAR_8 == 0 && FUNC_0(VAR_10)) {
  char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
  size_t VAR_16, VAR_17;

  switch (VAR_10) {
   case 130:
    if (VAR_12.bstrSource) {
     VAR_13 = FUNC_6(VAR_12.bstrSource, &VAR_16, VAR_3->code_page);
     FUNC_3(VAR_12.bstrSource);
    }
    if (VAR_12.bstrDescription) {
     VAR_14 = FUNC_6(VAR_12.bstrDescription, &VAR_17, VAR_3->code_page);
     FUNC_3(VAR_12.bstrDescription);
    }
    if (FUNC_2(VAR_2)) {
     FUNC_10(&VAR_15, 0, "<b>Source:</b> %s<br/><b>Description:</b> %s",
      VAR_13 ? VAR_13 : "Unknown",
      VAR_14 ? VAR_14 : "Unknown");
    } else {
     FUNC_10(&VAR_15, 0, "Source: %s\nDescription: %s",
      VAR_13 ? VAR_13 : "Unknown",
      VAR_14 ? VAR_14 : "Unknown");
    }
    if (VAR_14) {
     FUNC_5(VAR_14);
    }
    if (VAR_13) {
     FUNC_5(VAR_13);
    }
    if (VAR_12.bstrHelpFile) {
     FUNC_3(VAR_12.bstrHelpFile);
    }
    break;

   case 129:
   case 128:
    VAR_14 = FUNC_9(VAR_10);
    FUNC_10(&VAR_15, 0, "Parameter %d: %s", VAR_11, VAR_14);
    FUNC_8(VAR_14);
    break;

   case 131:
    if ((VAR_6->cArgs + VAR_6->cNamedArgs == 0) && (VAR_9 == 1)) {



     VAR_15 = ((void*)0);
     break;
    }


   default:
    VAR_14 = FUNC_9(VAR_10);
    FUNC_10(&VAR_15, 0, "Error [0x%08x] %s", VAR_10, VAR_14);
    FUNC_8(VAR_14);
    break;
  }

  if (VAR_15) {
   FUNC_7(VAR_10, VAR_15);
   FUNC_5(VAR_15);
  }
 }

 return VAR_10;
}
