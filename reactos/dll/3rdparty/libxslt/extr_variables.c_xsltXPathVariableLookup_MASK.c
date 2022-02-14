
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStackElemPtr ;
typedef int * xmlXPathObjectPtr ;
typedef int xmlChar ;
struct TYPE_9__ {int computed; int * value; int const* nameURI; int const* name; struct TYPE_9__* next; } ;
struct TYPE_8__ {scalar_t__ varsNr; int varsBase; int inst; scalar_t__ globalVars; TYPE_2__** varsTab; int dict; } ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int const*,int) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,TYPE_2__*,int *) ;
 int FUNC_4 (int ,char*,int const*) ;
 int VAR_3 ;
 int * FUNC_5 (TYPE_1__*,int const*,int const*) ;
 int FUNC_6 (TYPE_1__*,int *,int ,char*,int const*,...) ;

xmlXPathObjectPtr
FUNC_7(void *VAR_4, const xmlChar *VAR_5,
                 const xmlChar *VAR_6) {
    xsltTransformContextPtr VAR_7;
    xmlXPathObjectPtr VAR_8 = ((void*)0);

    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)))
 return(((void*)0));






    VAR_7 = (xsltTransformContextPtr) VAR_4;
    if (VAR_7->varsNr != 0) {
 int VAR_9;
 xsltStackElemPtr VAR_10 = ((void*)0), VAR_11;

 for (VAR_9 = VAR_7->varsNr; VAR_9 > VAR_7->varsBase; VAR_9--) {
     VAR_11 = VAR_7->varsTab[VAR_9-1];
     if ((VAR_11->name == VAR_5) && (VAR_11->nameURI == VAR_6)) {



  VAR_10 = VAR_11;
  goto local_variable_found;
     }
     VAR_11 = VAR_11->next;
 }






 {
     const xmlChar *VAR_12 = VAR_5, *VAR_13 = VAR_6;

     VAR_5 = FUNC_1(VAR_7->dict, VAR_5, -1);
     if (VAR_6)
  VAR_6 = FUNC_1(VAR_7->dict, VAR_6, -1);
     if ((VAR_12 != VAR_5) || (VAR_13 != VAR_6)) {
  for (VAR_9 = VAR_7->varsNr; VAR_9 > VAR_7->varsBase; VAR_9--) {
      VAR_11 = VAR_7->varsTab[VAR_9-1];
      if ((VAR_11->name == VAR_5) && (VAR_11->nameURI == VAR_6)) {



   VAR_10 = VAR_11;
   goto local_variable_found;
      }
  }
     }
 }

local_variable_found:

 if (VAR_10) {
     if (VAR_10->computed == 0) {





  VAR_10->value = FUNC_3(VAR_7, VAR_10, ((void*)0));
  VAR_10->computed = 1;
     }
     if (VAR_10->value != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_10->value);
     }
     return(VAR_8);
 }
    }



    if (VAR_7->globalVars) {
 VAR_8 = FUNC_5(VAR_7, VAR_5, VAR_6);
    }

    if (VAR_8 == ((void*)0)) {






 if (VAR_6) {
     FUNC_6(VAR_7, ((void*)0), VAR_7->inst,
  "Variable '{%s}%s' has not been declared.\n", VAR_6, VAR_5);
 } else {
     FUNC_6(VAR_7, ((void*)0), VAR_7->inst,
  "Variable '%s' has not been declared.\n", VAR_5);
 }
    } else {





    }

    return(VAR_8);
}
