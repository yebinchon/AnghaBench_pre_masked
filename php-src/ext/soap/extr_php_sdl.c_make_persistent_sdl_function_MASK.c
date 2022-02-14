
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* sdlSoapBindingFunctionPtr ;
typedef int sdlSoapBindingFunction ;
typedef TYPE_1__* sdlFunctionPtr ;
typedef int sdlFunction ;
typedef TYPE_3__* sdlBindingPtr ;
struct TYPE_11__ {scalar_t__ bindingType; } ;
struct TYPE_10__ {scalar_t__ faults; void* responseParameters; void* requestParameters; struct TYPE_10__* bindingAttributes; int output; int input; void* soapAction; TYPE_3__* binding; void* responseName; void* requestName; void* functionName; } ;
typedef int HashTable ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 void* FUNC_2 (void*,int *) ;
 int FUNC_3 (int *,int *) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 void* FUNC_6 (void*) ;
 TYPE_3__* FUNC_7 (int *,char*,int) ;

__attribute__((used)) static sdlFunctionPtr FUNC_8(sdlFunctionPtr VAR_1, HashTable *VAR_2)
{
 sdlFunctionPtr VAR_3 = ((void*)0);

 VAR_3 = FUNC_4(sizeof(sdlFunction));
 FUNC_5(VAR_3, 0, sizeof(sdlFunction));

 *VAR_3 = *VAR_1;

 if (VAR_3->functionName) {
  VAR_3->functionName = FUNC_6(VAR_3->functionName);
 }
 if (VAR_3->requestName) {
  VAR_3->requestName = FUNC_6(VAR_3->requestName);
 }
 if (VAR_3->responseName) {
  VAR_3->responseName = FUNC_6(VAR_3->responseName);
 }

 if (VAR_3->binding) {
  sdlBindingPtr VAR_4;

  if ((VAR_4 = FUNC_7(VAR_2, (char*)&VAR_3->binding, sizeof(VAR_3->binding))) == ((void*)0)) {
   FUNC_0(0);
  }
  VAR_3->binding = VAR_4;

  if (VAR_3->binding->bindingType == VAR_0 && VAR_3->bindingAttributes) {
   sdlSoapBindingFunctionPtr VAR_5;

      VAR_5 = FUNC_4(sizeof(sdlSoapBindingFunction));
   FUNC_5(VAR_5, 0, sizeof(sdlSoapBindingFunction));
   *VAR_5 = *(sdlSoapBindingFunctionPtr)VAR_3->bindingAttributes;
   if (VAR_5->soapAction) {
    VAR_5->soapAction = FUNC_6(VAR_5->soapAction);
   }
   FUNC_3(&VAR_5->input, VAR_2);
   FUNC_3(&VAR_5->output, VAR_2);
   VAR_3->bindingAttributes = VAR_5;
  }

  if (VAR_3->requestParameters) {
   VAR_3->requestParameters = FUNC_2(VAR_3->requestParameters, VAR_2);
  }
  if (VAR_3->responseParameters) {
   VAR_3->responseParameters = FUNC_2(VAR_3->responseParameters, VAR_2);
  }
  if (VAR_3->faults) {
   VAR_3->faults = FUNC_1(VAR_3, VAR_3->faults, VAR_2);
  }
 }

 return VAR_3;
}
