
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylesheetPtr ;
typedef TYPE_4__* xsltKeyTablePtr ;
typedef TYPE_5__* xsltKeyDefPtr ;
struct TYPE_14__ {char* name; char* nameURI; struct TYPE_14__* next; } ;
struct TYPE_13__ {struct TYPE_13__* next; int * nameURI; int * name; } ;
struct TYPE_12__ {scalar_t__ keys; } ;
struct TYPE_11__ {int nbKeys; TYPE_1__* document; TYPE_3__* style; } ;
struct TYPE_10__ {int nbKeysComputed; scalar_t__ keys; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int FUNC_2 (TYPE_2__*,char*,char*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;

int
FUNC_4(xsltTransformContextPtr VAR_1)
{
    xsltStylesheetPtr VAR_2;
    xsltKeyDefPtr VAR_3;
    xsltKeyTablePtr VAR_4;

    if (VAR_1 == ((void*)0))
 return(-1);






    if (VAR_1->document->nbKeysComputed == VAR_1->nbKeys)
 return(0);





    VAR_2 = VAR_1->style;
    while (VAR_2) {
 VAR_3 = (xsltKeyDefPtr) VAR_2->keys;
 while (VAR_3 != ((void*)0)) {







     VAR_4 = (xsltKeyTablePtr) VAR_1->document->keys;
     while (VAR_4) {
  if (((VAR_3->nameURI != ((void*)0)) == (VAR_4->nameURI != ((void*)0))) &&
      FUNC_1(VAR_3->name, VAR_4->name) &&
      FUNC_1(VAR_3->nameURI, VAR_4->nameURI))
  {
      break;
  }
  VAR_4 = VAR_4->next;
     }
     if (VAR_4 == ((void*)0)) {



  FUNC_2(VAR_1, VAR_3->name, VAR_3->nameURI);
     }
     VAR_3 = VAR_3->next;
 }
 VAR_2 = FUNC_3(VAR_2);
    }



    return(0);
}
