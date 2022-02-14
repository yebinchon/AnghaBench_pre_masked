
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xsltTemplatePtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xmlNsPtr ;
typedef TYPE_4__* xmlNodePtr ;
struct TYPE_13__ {scalar_t__ type; struct TYPE_13__* parent; TYPE_3__* nsDef; } ;
struct TYPE_12__ {struct TYPE_12__* next; int * prefix; int * href; } ;
struct TYPE_11__ {int exclPrefixNr; int ** exclPrefixTab; } ;
struct TYPE_10__ {int inheritedNsNr; TYPE_3__** inheritedNs; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__**,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6(xsltStylesheetPtr VAR_4,
                xsltTemplatePtr VAR_5,
                xmlNodePtr VAR_6)
{
    xmlNsPtr VAR_7;
    xmlNsPtr *VAR_8 = ((void*)0);
    int VAR_9 = 0;
    int VAR_10 = 10;
    int VAR_11;

    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_6 == ((void*)0)) ||
 (VAR_5->inheritedNsNr != 0) || (VAR_5->inheritedNs != ((void*)0)))
 return(0);
    while (VAR_6 != ((void*)0)) {
        if (VAR_6->type == VAR_0) {
            VAR_7 = VAR_6->nsDef;
            while (VAR_7 != ((void*)0)) {
  if (FUNC_3(VAR_7->href, VAR_1))
      goto skip_ns;

  if ((VAR_7->prefix != ((void*)0)) &&
      (FUNC_4(VAR_4, VAR_7->prefix)))
      goto skip_ns;





  for (VAR_11 = 0;VAR_11 < VAR_4->exclPrefixNr;VAR_11++) {
      if (FUNC_3(VAR_7->href, VAR_4->exclPrefixTab[VAR_11]))
   goto skip_ns;
  }
                if (VAR_8 == ((void*)0)) {
                    VAR_8 =
                        (xmlNsPtr *) FUNC_1((VAR_10 + 1) *
                                               sizeof(xmlNsPtr));
                    if (VAR_8 == ((void*)0)) {
                        FUNC_0(VAR_2,
                                        "xsltGetInheritedNsList : out of memory!\n");
                        return(0);
                    }
                    VAR_8[VAR_9] = ((void*)0);
                }



                for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
                    if ((VAR_7->prefix == VAR_8[VAR_11]->prefix) ||
                        (FUNC_3(VAR_7->prefix, VAR_8[VAR_11]->prefix)))
                        break;
                }
                if (VAR_11 >= VAR_9) {
                    if (VAR_9 >= VAR_10) {
                        VAR_10 *= 2;
                        VAR_8 = (xmlNsPtr *) FUNC_2(VAR_8,
                                                      (VAR_10 +
                                                       1) *
                                                      sizeof(xmlNsPtr));
                        if (VAR_8 == ((void*)0)) {
                            FUNC_0(VAR_2,
                                            "xsltGetInheritedNsList : realloc failed!\n");
                            return(0);
                        }
                    }
                    VAR_8[VAR_9++] = VAR_7;
                    VAR_8[VAR_9] = ((void*)0);
                }
skip_ns:
                VAR_7 = VAR_7->next;
            }
        }
        VAR_6 = VAR_6->parent;
    }
    if (VAR_9 != 0) {




 VAR_5->inheritedNsNr = VAR_9;
 VAR_5->inheritedNs = VAR_8;
    }
    return (VAR_9);
}
