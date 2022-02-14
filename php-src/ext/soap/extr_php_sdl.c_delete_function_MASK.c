
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* sdlSoapBindingFunctionPtr ;
typedef TYPE_2__* sdlFunctionPtr ;
struct TYPE_8__ {int output; int input; struct TYPE_8__* soapAction; struct TYPE_8__* bindingAttributes; TYPE_1__* binding; struct TYPE_8__* faults; struct TYPE_8__* responseParameters; struct TYPE_8__* requestParameters; struct TYPE_8__* responseName; struct TYPE_8__* requestName; struct TYPE_8__* functionName; } ;
struct TYPE_7__ {scalar_t__ bindingType; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(zval *VAR_1)
{
 sdlFunctionPtr VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->functionName) {
  FUNC_2(VAR_2->functionName);
 }
 if (VAR_2->requestName) {
  FUNC_2(VAR_2->requestName);
 }
 if (VAR_2->responseName) {
  FUNC_2(VAR_2->responseName);
 }
 if (VAR_2->requestParameters) {
  FUNC_3(VAR_2->requestParameters);
  FUNC_2(VAR_2->requestParameters);
 }
 if (VAR_2->responseParameters) {
  FUNC_3(VAR_2->responseParameters);
  FUNC_2(VAR_2->responseParameters);
 }
 if (VAR_2->faults) {
  FUNC_3(VAR_2->faults);
  FUNC_2(VAR_2->faults);
 }

 if (VAR_2->bindingAttributes &&
     VAR_2->binding && VAR_2->binding->bindingType == VAR_0) {
  sdlSoapBindingFunctionPtr VAR_3 = VAR_2->bindingAttributes;
  if (VAR_3->soapAction) {
   FUNC_2(VAR_3->soapAction);
  }
  FUNC_1(VAR_3->input);
  FUNC_1(VAR_3->output);
  FUNC_2(VAR_3);
 }
 FUNC_2(VAR_2);
}
