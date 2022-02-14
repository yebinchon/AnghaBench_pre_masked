
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_6__ {int dict; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char) ;
 int * FUNC_3 (TYPE_2__*,int const*,int const*) ;

const xmlChar *
FUNC_4(xsltStylesheetPtr VAR_1, xmlNodePtr VAR_2,
   const xmlChar *VAR_3, const xmlChar *VAR_4, int *VAR_5) {
    const xmlChar *VAR_6;
    xmlChar *VAR_7;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) ||
        (VAR_2->type != VAR_0))
 return(((void*)0));

    VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_4);
    if (VAR_7 == ((void*)0)) {
 *VAR_5 = 0;
 return(((void*)0));
    }
    *VAR_5 = 1;

    VAR_6 = FUNC_2(VAR_7, '{');
    if (VAR_6 != ((void*)0)) {
 FUNC_1(VAR_7);
 return(((void*)0));
    }
    VAR_6 = FUNC_0(VAR_1->dict, VAR_7, -1);
    FUNC_1(VAR_7);
    return(VAR_6);
}
