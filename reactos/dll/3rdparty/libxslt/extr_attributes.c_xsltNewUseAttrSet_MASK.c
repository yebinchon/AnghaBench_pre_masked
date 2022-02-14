
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltUseAttrSetPtr ;
typedef int xsltUseAttrSet ;
typedef int xmlChar ;
struct TYPE_4__ {int const* ns; int const* ncname; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static xsltUseAttrSetPtr
FUNC_3(const xmlChar *VAR_1, const xmlChar *VAR_2) {
    xsltUseAttrSetPtr VAR_3;

    VAR_3 = (xsltUseAttrSetPtr) FUNC_1(sizeof(xsltUseAttrSet));
    if (VAR_3 == ((void*)0)) {
        FUNC_2(VAR_0,
  "xsltNewUseAttrSet : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_3, 0, sizeof(xsltUseAttrSet));
    VAR_3->ncname = VAR_1;
    VAR_3->ns = VAR_2;
    return(VAR_3);
}
