
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltUseAttrSetPtr ;
typedef int xmlChar ;
struct TYPE_5__ {struct TYPE_5__* next; int const* ns; int const* ncname; } ;


 TYPE_1__* FUNC_0 (int const*,int const*) ;

__attribute__((used)) static xsltUseAttrSetPtr
FUNC_1(xsltUseAttrSetPtr VAR_0, const xmlChar *VAR_1,
                      const xmlChar *VAR_2) {
    xsltUseAttrSetPtr VAR_3, VAR_4;

    if (VAR_1 == ((void*)0))
        return(VAR_0);
    if (VAR_0 == ((void*)0))
 return(FUNC_0(VAR_1, VAR_2));
    VAR_4 = VAR_0;
    while (VAR_4 != ((void*)0)) {
        if ((VAR_4->ncname == VAR_1) && (VAR_4->ns == VAR_2))
            return(VAR_0);
 VAR_3 = VAR_4->next;
 if (VAR_3 == ((void*)0)) {
     VAR_4->next = FUNC_0(VAR_1, VAR_2);
     return(VAR_0);
 }
 VAR_4 = VAR_3;
    }
    return(VAR_0);
}
