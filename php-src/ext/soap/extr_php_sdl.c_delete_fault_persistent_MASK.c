
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* sdlSoapBindingFunctionFaultPtr ;
typedef TYPE_2__* sdlFaultPtr ;
struct TYPE_7__ {struct TYPE_7__* bindingAttributes; struct TYPE_7__* details; struct TYPE_7__* name; } ;
struct TYPE_6__ {TYPE_2__* ns; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(zval *VAR_0)
{
 sdlFaultPtr VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->name) {
  FUNC_1(VAR_1->name);
 }
 if (VAR_1->details) {
  FUNC_2(VAR_1->details);
  FUNC_1(VAR_1->details);
 }
 if (VAR_1->bindingAttributes) {
  sdlSoapBindingFunctionFaultPtr VAR_2 = (sdlSoapBindingFunctionFaultPtr)VAR_1->bindingAttributes;

  if (VAR_2->ns) {
   FUNC_1(VAR_2->ns);
  }
  FUNC_1(VAR_1->bindingAttributes);
 }
 FUNC_1(VAR_1);
}
