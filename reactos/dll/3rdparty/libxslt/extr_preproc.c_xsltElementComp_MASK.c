
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef TYPE_2__* xsltStyleItemElementPtr ;
typedef TYPE_4__* xmlNsPtr ;
typedef TYPE_5__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_19__ {scalar_t__ type; int doc; TYPE_2__* psvi; } ;
struct TYPE_18__ {int href; } ;
struct TYPE_17__ {int has_name; int has_ns; int has_use; void* use; int const* name; int const* nsPrefix; void* ns; TYPE_5__* inst; } ;
struct TYPE_16__ {int errors; int dict; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int) ;
 TYPE_4__* FUNC_1 (int ,TYPE_5__*,int const*) ;
 int FUNC_2 (int const*,int *,int) ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 void* FUNC_4 (TYPE_1__*,TYPE_5__*,int const*,int *,int*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int ) ;
 int * FUNC_6 (int ,int const*,int const**) ;
 int FUNC_7 (int *,TYPE_1__*,TYPE_5__*,char*,...) ;

__attribute__((used)) static void
FUNC_8(xsltStylesheetPtr VAR_2, xmlNodePtr VAR_3) {



    xsltStylePreCompPtr VAR_4;
    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_3->type != VAR_0))
 return;




    VAR_4 = FUNC_5(VAR_2, VAR_1);


    if (VAR_4 == ((void*)0))
 return;
    VAR_3->psvi = VAR_4;
    VAR_4->inst = VAR_3;







    VAR_4->name = FUNC_4(VAR_2, VAR_3,
 (const xmlChar *)"name", ((void*)0), &VAR_4->has_name);
    if (! VAR_4->has_name) {
 FUNC_7(((void*)0), VAR_2, VAR_3,
     "xsl:element: The attribute 'name' is missing.\n");
 VAR_2->errors++;
 goto error;
    }






    VAR_4->ns = FUNC_4(VAR_2, VAR_3,
 (const xmlChar *)"namespace", ((void*)0), &VAR_4->has_ns);

    if (VAR_4->name != ((void*)0)) {
 if (FUNC_3(VAR_4->name, 0)) {
     FUNC_7(((void*)0), VAR_2, VAR_3,
  "xsl:element: The value '%s' of the attribute 'name' is "
  "not a valid QName.\n", VAR_4->name);
     VAR_2->errors++;
 } else {
     const xmlChar *VAR_5 = ((void*)0), *VAR_6;

     VAR_6 = FUNC_6(VAR_2->dict, VAR_4->name, &VAR_5);
     if (VAR_4->has_ns == 0) {
  xmlNsPtr VAR_7;
  VAR_7 = FUNC_1(VAR_3->doc, VAR_3, VAR_5);
  if (VAR_7 != ((void*)0)) {
      VAR_4->ns = FUNC_0(VAR_2->dict, VAR_7->href, -1);
      VAR_4->has_ns = 1;




                    (void)VAR_6;

  } else if (VAR_5 != ((void*)0)) {
      FUNC_7(((void*)0), VAR_2, VAR_3,
   "xsl:element: The prefixed QName '%s' "
   "has no namespace binding in scope in the "
   "stylesheet; this is an error, since the namespace was "
   "not specified by the instruction itself.\n", VAR_4->name);
      VAR_2->errors++;
  }
     }
     if ((VAR_5 != ((void*)0)) &&
  (!FUNC_2(VAR_5, (xmlChar *)"xml", 3)))
     {



  VAR_4->has_name = 0;
     }
 }
    }



    VAR_4->use = FUNC_4(VAR_2, VAR_3,
         (const xmlChar *)"use-attribute-sets",
         ((void*)0), &VAR_4->has_use);

error:
    return;
}
