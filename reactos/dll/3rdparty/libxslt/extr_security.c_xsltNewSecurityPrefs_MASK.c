
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xsltSecurityPrefsPtr ;
typedef int xsltSecurityPrefs ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int *,char*) ;

xsltSecurityPrefsPtr
FUNC_4(void) {
    xsltSecurityPrefsPtr VAR_0;

    FUNC_2();

    VAR_0 = (xsltSecurityPrefsPtr) FUNC_1(sizeof(xsltSecurityPrefs));
    if (VAR_0 == ((void*)0)) {
 FUNC_3(((void*)0), ((void*)0), ((void*)0),
  "xsltNewSecurityPrefs : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_0, 0, sizeof(xsltSecurityPrefs));
    return(VAR_0);
}
