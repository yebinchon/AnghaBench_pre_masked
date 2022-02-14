
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sdlSoapBindingFunctionHeaderPtr ;
struct TYPE_5__ {struct TYPE_5__* headerfaults; struct TYPE_5__* ns; struct TYPE_5__* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(sdlSoapBindingFunctionHeaderPtr VAR_0)
{
 if (VAR_0->name) {
  FUNC_0(VAR_0->name);
 }
 if (VAR_0->ns) {
  FUNC_0(VAR_0->ns);
 }
 if (VAR_0->headerfaults) {
  FUNC_1(VAR_0->headerfaults);
  FUNC_0(VAR_0->headerfaults);
 }
 FUNC_0(VAR_0);
}
