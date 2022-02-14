
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef TYPE_1__* xsltStylePreCompPtr ;
typedef int xsltStyleBasicItemVariablePtr ;
typedef int xsltStackElemPtr ;
typedef int xmlNodePtr ;
struct TYPE_4__ {int name; int inst; int ns; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_6(xsltTransformContextPtr VAR_2,
       xsltStylePreCompPtr VAR_3,
       xmlNodePtr VAR_4, int VAR_5)
{




    xsltStylePreCompPtr VAR_6 = VAR_3;
    int VAR_7;

    xsltStackElemPtr VAR_8;
    VAR_7 = FUNC_3(VAR_2, VAR_6->name, VAR_6->ns);
    if (VAR_5 == 0) {
 if ((VAR_7 != 0) && (VAR_7 != 3)) {

     FUNC_5(VAR_2, ((void*)0), VAR_6->inst,
  "XSLT-variable: Redefinition of variable '%s'.\n", VAR_6->name);
     return(0);
 }
    } else if (VAR_7 != 0) {
 if ((VAR_7 == 1) || (VAR_7 == 2)) {

     FUNC_5(VAR_2, ((void*)0), VAR_6->inst,
  "XSLT-param: Redefinition of parameter '%s'.\n", VAR_6->name);
     return(0);
 }




 return(0);
    }


    VAR_8 = FUNC_2(VAR_2, (xsltStylePreCompPtr) VAR_6, VAR_4);
    FUNC_1(VAR_2, VAR_8);
    return(0);
}
