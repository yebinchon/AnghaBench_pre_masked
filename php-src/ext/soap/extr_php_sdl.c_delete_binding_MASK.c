
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* sdlSoapBindingPtr ;
typedef TYPE_1__* sdlBindingPtr ;
struct TYPE_5__ {scalar_t__ bindingType; struct TYPE_5__* bindingAttributes; struct TYPE_5__* name; struct TYPE_5__* location; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(zval *VAR_1)
{
 sdlBindingPtr VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->location) {
  FUNC_1(VAR_2->location);
 }
 if (VAR_2->name) {
  FUNC_1(VAR_2->name);
 }

 if (VAR_2->bindingType == VAR_0) {
  sdlSoapBindingPtr VAR_3 = VAR_2->bindingAttributes;
  if (VAR_3) {
   FUNC_1(VAR_3);
  }
 }
 FUNC_1(VAR_2);
}
