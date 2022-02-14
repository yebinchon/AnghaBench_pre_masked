
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* sdlSoapBindingFunctionPtr ;
typedef int * sdlPtr ;
typedef TYPE_4__* sdlFunctionPtr ;
struct TYPE_13__ {scalar_t__ functionName; int * requestParameters; int bindingAttributes; TYPE_1__* binding; } ;
struct TYPE_12__ {scalar_t__ style; } ;
struct TYPE_11__ {scalar_t__ name; int * children; } ;
struct TYPE_10__ {scalar_t__ bindingType; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 TYPE_4__* FUNC_1 (int *,TYPE_2__*) ;
 TYPE_4__* FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static sdlFunctionPtr FUNC_4(sdlPtr VAR_2, xmlNodePtr VAR_3, zval* VAR_4)
{
 sdlFunctionPtr VAR_5;

 VAR_5 = FUNC_2(VAR_2, (char*)VAR_3->name);
 if (VAR_5 && VAR_5->binding && VAR_5->binding->bindingType == VAR_0) {
  sdlSoapBindingFunctionPtr VAR_6 = (sdlSoapBindingFunctionPtr)VAR_5->bindingAttributes;
  if (VAR_6->style == VAR_1) {
   if (VAR_3->children != ((void*)0) ||
       (VAR_5->requestParameters != ((void*)0) &&
        FUNC_3(VAR_5->requestParameters) > 0)) {
    VAR_5 = ((void*)0);
   }
  }
 }
 if (VAR_2 != ((void*)0) && VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_1(VAR_2, VAR_3);
 }

 if (VAR_5 != ((void*)0)) {
  FUNC_0(VAR_4, (char *)VAR_5->functionName);
 } else {
  FUNC_0(VAR_4, (char *)VAR_3->name);
 }

 return VAR_5;
}
