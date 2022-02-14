
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltTemplatePtr ;
typedef int xsltTemplate ;
struct TYPE_4__ {int priority; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltTemplatePtr
FUNC_3(void) {
    xsltTemplatePtr VAR_1;

    VAR_1 = (xsltTemplatePtr) FUNC_1(sizeof(xsltTemplate));
    if (VAR_1 == ((void*)0)) {
 FUNC_2(((void*)0), ((void*)0), ((void*)0),
  "xsltNewTemplate : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_1, 0, sizeof(xsltTemplate));
    VAR_1->priority = VAR_0;
    return(VAR_1);
}
