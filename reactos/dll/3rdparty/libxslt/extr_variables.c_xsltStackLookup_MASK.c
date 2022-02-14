
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStackElemPtr ;
typedef int xmlChar ;
struct TYPE_6__ {struct TYPE_6__* next; int const* nameURI; int const* name; } ;
struct TYPE_5__ {int varsNr; int varsBase; TYPE_2__** varsTab; int dict; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int const*,int) ;

__attribute__((used)) static xsltStackElemPtr
FUNC_1(xsltTransformContextPtr VAR_2, const xmlChar *VAR_3,
         const xmlChar *VAR_4) {
    int VAR_5;
    xsltStackElemPtr VAR_6;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_2->varsNr == 0))
 return(((void*)0));







    for (VAR_5 = VAR_2->varsNr; VAR_5 > VAR_2->varsBase; VAR_5--) {
 VAR_6 = VAR_2->varsTab[VAR_5-1];
 while (VAR_6 != ((void*)0)) {
     if ((VAR_6->name == VAR_3) && (VAR_6->nameURI == VAR_4)) {



  return(VAR_6);
     }
     VAR_6 = VAR_6->next;
 }
    }





    VAR_3 = FUNC_0(VAR_2->dict, VAR_3, -1);
    if (VAR_4 != ((void*)0))
        VAR_4 = FUNC_0(VAR_2->dict, VAR_4, -1);

    for (VAR_5 = VAR_2->varsNr; VAR_5 > VAR_2->varsBase; VAR_5--) {
 VAR_6 = VAR_2->varsTab[VAR_5-1];
 while (VAR_6 != ((void*)0)) {
     if ((VAR_6->name == VAR_3) && (VAR_6->nameURI == VAR_4)) {



  return(VAR_6);
     }
     VAR_6 = VAR_6->next;
 }
    }

    return(((void*)0));
}
