
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xsltStylesheetPtr ;
typedef int * xsltSecurityPrefsPtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int const*) ;
 int * FUNC_2 (int const*,int *,int ,int *,int ) ;
 int FUNC_3 (int ,char*,int const*) ;
 int VAR_2 ;
 int * FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,char*,int const*) ;

xsltStylesheetPtr
FUNC_8(const xmlChar* VAR_3) {
    xsltSecurityPrefsPtr VAR_4;
    xsltStylesheetPtr VAR_5;
    xmlDocPtr VAR_6;

    FUNC_5();

    if (VAR_3 == ((void*)0))
 return(((void*)0));
    VAR_4 = FUNC_4();
    if (VAR_4 != ((void*)0)) {
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, ((void*)0), VAR_3);
 if (VAR_7 == 0) {
     FUNC_7(((void*)0), ((void*)0), ((void*)0),
   "xsltParseStylesheetFile: read rights for %s denied\n",
        VAR_3);
     return(((void*)0));
 }
    }

    VAR_6 = FUNC_2(VAR_3, ((void*)0), VAR_1,
                               ((void*)0), VAR_0);
    if (VAR_6 == ((void*)0)) {
 FUNC_7(((void*)0), ((void*)0), ((void*)0),
  "xsltParseStylesheetFile : cannot parse %s\n", VAR_3);
 return(((void*)0));
    }
    VAR_5 = FUNC_6(VAR_6);
    if (VAR_5 == ((void*)0)) {
 FUNC_0(VAR_6);
 return(((void*)0));
    }

    return(VAR_5);
}
