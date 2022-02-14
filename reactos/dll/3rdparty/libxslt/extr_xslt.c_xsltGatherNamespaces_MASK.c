
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_10__ {scalar_t__ type; struct TYPE_10__* next; struct TYPE_10__* parent; struct TYPE_10__* children; TYPE_2__* nsDef; } ;
struct TYPE_9__ {struct TYPE_9__* next; scalar_t__ href; int * prefix; } ;
struct TYPE_8__ {scalar_t__ doc; int * nsHash; int warnings; int errors; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,void*,int *) ;
 int FUNC_4 (int const*,scalar_t__) ;
 int FUNC_5 (int ,char*,int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_6 (int *,TYPE_1__*,TYPE_3__*,char*,...) ;

__attribute__((used)) static void
FUNC_7(xsltStylesheetPtr VAR_3) {
    xmlNodePtr VAR_4;
    const xmlChar *VAR_5;

    if (VAR_3 == ((void*)0))
        return;
    VAR_4 = FUNC_0(VAR_3->doc);
    while (VAR_4 != ((void*)0)) {
 if (VAR_4->type == VAR_0) {
     xmlNsPtr VAR_6 = VAR_4->nsDef;
     while (VAR_6 != ((void*)0)) {
  if (VAR_6->prefix != ((void*)0)) {
      if (VAR_3->nsHash == ((void*)0)) {
   VAR_3->nsHash = FUNC_1(10);
   if (VAR_3->nsHash == ((void*)0)) {
       FUNC_6(((void*)0), VAR_3, VAR_4,
   "xsltGatherNamespaces: failed to create hash table\n");
       VAR_3->errors++;
       return;
   }
      }
      VAR_5 = FUNC_2(VAR_3->nsHash, VAR_6->prefix);
      if ((VAR_5 != ((void*)0)) && (!FUNC_4(VAR_5, VAR_6->href))) {
   FUNC_6(((void*)0), VAR_3, VAR_4,
      "Namespaces prefix %s used for multiple namespaces\n",VAR_6->prefix);
   VAR_3->warnings++;
      } else if (VAR_5 == ((void*)0)) {
   FUNC_3(VAR_3->nsHash, VAR_6->prefix,
       (void *) VAR_6->href, ((void*)0));





      }
  }
  VAR_6 = VAR_6->next;
     }
 }




 if (VAR_4->children != ((void*)0)) {
     if (VAR_4->children->type != VAR_1) {
  VAR_4 = VAR_4->children;
  continue;
     }
 }
 if (VAR_4->next != ((void*)0)) {
     VAR_4 = VAR_4->next;
     continue;
 }

 do {
     VAR_4 = VAR_4->parent;
     if (VAR_4 == ((void*)0))
  break;
     if (VAR_4 == (xmlNodePtr) VAR_3->doc) {
  VAR_4 = ((void*)0);
  break;
     }
     if (VAR_4->next != ((void*)0)) {
  VAR_4 = VAR_4->next;
  break;
     }
 } while (VAR_4 != ((void*)0));
    }
}
