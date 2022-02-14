
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_1__* xsltStackElemPtr ;
typedef int * xmlXPathObjectPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int computed; int * value; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,TYPE_1__*,int *) ;
 int FUNC_3 (int ,char*,int const*) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int const*,int const*) ;
 TYPE_1__* FUNC_5 (int *,int const*,int const*) ;

xmlXPathObjectPtr
FUNC_6(xsltTransformContextPtr VAR_2, const xmlChar *VAR_3,
     const xmlChar *VAR_4) {
    xsltStackElemPtr VAR_5;

    if (VAR_2 == ((void*)0))
 return(((void*)0));

    VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);
    if (VAR_5 == ((void*)0)) {
 return(FUNC_4(VAR_2, VAR_3, VAR_4));
    }
    if (VAR_5->computed == 0) {




        VAR_5->value = FUNC_2(VAR_2, VAR_5, ((void*)0));
 VAR_5->computed = 1;
    }
    if (VAR_5->value != ((void*)0))
 return(FUNC_1(VAR_5->value));




    return(((void*)0));
}
