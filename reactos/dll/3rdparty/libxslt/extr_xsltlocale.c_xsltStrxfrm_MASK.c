
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xsltLocaleChar ;
typedef int xsltLocale ;
typedef int xmlChar ;


 int VAR_0 ;
 size_t FUNC_0 (int ,int ,char*,int,int *,size_t) ;
 int FUNC_1 (char*,char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (int *,int *,int *,char*) ;

xsltLocaleChar *
FUNC_5(xsltLocale VAR_1, const xmlChar *VAR_2)
{



    size_t VAR_3, VAR_4;
    xsltLocaleChar *VAR_5;
    if (VAR_4 >= VAR_3) {
 FUNC_4(((void*)0), ((void*)0), ((void*)0), "xsltStrxfrm : strxfrm failed\n");
        FUNC_2(VAR_5);
        return(((void*)0));
    }

    return(VAR_5);

}
