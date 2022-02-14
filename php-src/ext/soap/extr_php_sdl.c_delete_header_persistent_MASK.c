
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zval ;
typedef TYPE_1__* sdlSoapBindingFunctionHeaderPtr ;
struct TYPE_5__ {struct TYPE_5__* headerfaults; struct TYPE_5__* ns; struct TYPE_5__* name; } ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(zval *VAR_0)
{
 sdlSoapBindingFunctionHeaderPtr VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->name) {
  FUNC_1(VAR_1->name);
 }
 if (VAR_1->ns) {
  FUNC_1(VAR_1->ns);
 }
 if (VAR_1->headerfaults) {
  FUNC_2(VAR_1->headerfaults);
  FUNC_1(VAR_1->headerfaults);
 }
 FUNC_1(VAR_1);
}
