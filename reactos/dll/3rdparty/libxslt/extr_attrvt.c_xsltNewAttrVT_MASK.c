
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltAttrVTPtr ;
typedef int xsltAttrVT ;
struct TYPE_8__ {struct TYPE_8__* next; scalar_t__ strstart; int max_seg; scalar_t__ nb_seg; } ;
struct TYPE_7__ {TYPE_2__* attVTs; int errors; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_1__*,int *,char*) ;

__attribute__((used)) static xsltAttrVTPtr
FUNC_3(xsltStylesheetPtr VAR_1) {
    xsltAttrVTPtr VAR_2;

    VAR_2 = (xsltAttrVTPtr) FUNC_1(sizeof(xsltAttrVT));
    if (VAR_2 == ((void*)0)) {
 FUNC_2(((void*)0), VAR_1, ((void*)0),
  "xsltNewAttrVTPtr : malloc failed\n");
 if (VAR_1 != ((void*)0)) VAR_1->errors++;
 return(((void*)0));
    }
    FUNC_0(VAR_2, 0, sizeof(xsltAttrVT));

    VAR_2->nb_seg = 0;
    VAR_2->max_seg = VAR_0;
    VAR_2->strstart = 0;
    VAR_2->next = VAR_1->attVTs;




    VAR_1->attVTs = (xsltAttrVTPtr) VAR_2;

    return(VAR_2);
}
