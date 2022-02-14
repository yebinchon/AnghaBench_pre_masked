
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_10__ {scalar_t__ type; int const* name; struct TYPE_10__* parent; TYPE_1__* ns; } ;
struct TYPE_9__ {int errors; int * extInfos; scalar_t__ literal_result; } ;
struct TYPE_8__ {int const* href; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_3__*,char*,...) ;

__attribute__((used)) static void
FUNC_3(xsltStylesheetPtr VAR_1, xmlNodePtr VAR_2,
                       const xmlChar *VAR_3, const xmlChar *VAR_4) {
    xmlNodePtr VAR_5;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_2->ns == ((void*)0)) ||
        (VAR_1->literal_result))
        return;

    VAR_5 = VAR_2->parent;
    if (VAR_5 == ((void*)0)) {
 FUNC_2(((void*)0), VAR_1, VAR_2,
  "internal problem: element has no parent\n");
 VAR_1->errors++;
 return;
    }
    if (((VAR_5->ns == VAR_2->ns) ||
  ((VAR_5->ns != ((void*)0)) &&
   (FUNC_1(VAR_5->ns->href, VAR_2->ns->href)))) &&
 ((FUNC_1(VAR_5->name, VAR_3)) ||
  (FUNC_1(VAR_5->name, VAR_4)))) {
 return;
    }

    if (VAR_1->extInfos != ((void*)0)) {
 while ((VAR_5 != ((void*)0)) && (VAR_5->type != VAR_0)) {




     if ((VAR_5->ns != ((void*)0)) &&
  (FUNC_0(VAR_1->extInfos, VAR_5->ns->href) != ((void*)0)))
  return;

     VAR_5 = VAR_5->parent;
 }
    }
    FUNC_2(((void*)0), VAR_1, VAR_2,
         "element %s is not allowed within that context\n",
         VAR_2->name);
    VAR_1->errors++;
}
