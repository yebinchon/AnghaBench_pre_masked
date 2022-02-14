
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xsltKeyDefPtr ;
typedef char xmlChar ;
struct TYPE_15__ {scalar_t__ nbKeysComputed; } ;
struct TYPE_14__ {int * inst; struct TYPE_14__* next; int * nameURI; int * name; } ;
struct TYPE_13__ {scalar_t__ keys; } ;
struct TYPE_12__ {scalar_t__ nbKeys; int state; TYPE_9__* document; TYPE_2__* style; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,TYPE_9__*,TYPE_3__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,int *,int *,char*,char const*) ;

__attribute__((used)) static int
FUNC_7(xsltTransformContextPtr VAR_4, const xmlChar *VAR_5,
                    const xmlChar *VAR_6)
{
    xsltStylesheetPtr VAR_7;
    xsltKeyDefPtr VAR_8 = ((void*)0);
    int VAR_9 = 0;





    VAR_7 = VAR_4->style;
    while (VAR_7 != ((void*)0)) {
 VAR_8 = (xsltKeyDefPtr) VAR_7->keys;
 while (VAR_8 != ((void*)0)) {
     if (((VAR_8->nameURI != ((void*)0)) ==
   (VAR_6 != ((void*)0))) &&
  FUNC_2(VAR_8->name, VAR_5) &&
  FUNC_2(VAR_8->nameURI, VAR_6))
     {
  FUNC_4(VAR_4, VAR_4->document, VAR_8);
  if (VAR_4->document->nbKeysComputed == VAR_4->nbKeys)
      return(0);
  VAR_9 = 1;
     }
     VAR_8 = VAR_8->next;
 }
 VAR_7 = FUNC_5(VAR_7);
    }
    if (VAR_9 == 0) {




 FUNC_6(VAR_4, ((void*)0), VAR_8? VAR_8->inst : ((void*)0),
     "Failed to find key definition for %s\n", VAR_5);
 VAR_4->state = VAR_0;
        return(-1);
    }



    return(0);
}
