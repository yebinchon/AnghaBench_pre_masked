
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xsltAttrSetPtr ;
typedef int xsltAttrSet ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static xsltAttrSetPtr
FUNC_3() {
    xsltAttrSetPtr VAR_1;

    VAR_1 = (xsltAttrSetPtr) FUNC_1(sizeof(xsltAttrSet));
    if (VAR_1 == ((void*)0)) {
        FUNC_2(VAR_0,
  "xsltNewAttrSet : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_1, 0, sizeof(xsltAttrSet));
    return(VAR_1);
}
