
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_11__ {scalar_t__ type; int * children; } ;
struct TYPE_10__ {int stripAll; int * stripSpaces; int warnings; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (TYPE_2__*,scalar_t__ const*,int *) ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__ const*,scalar_t__*) ;
 int * FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__ const*) ;
 scalar_t__* FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (int ,char*,scalar_t__*) ;
 int VAR_1 ;
 scalar_t__* FUNC_8 (TYPE_2__*,scalar_t__**) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (int *,TYPE_1__*,TYPE_2__*,char*) ;

__attribute__((used)) static void
FUNC_11(xsltStylesheetPtr VAR_2, xmlNodePtr VAR_3) {
    xmlChar *VAR_4;
    xmlChar *VAR_5, *VAR_6;

    if ((VAR_3 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_3->type != VAR_0))
 return;

    VAR_4 = FUNC_2(VAR_3, (const xmlChar *)"elements", ((void*)0));
    if (VAR_4 == ((void*)0)) {
 FUNC_10(((void*)0), VAR_2, VAR_3,
     "xsltParseStylesheetPreserveSpace: missing elements attribute\n");
 if (VAR_2 != ((void*)0)) VAR_2->warnings++;
 return;
    }

    if (VAR_2->stripSpaces == ((void*)0))
 VAR_2->stripSpaces = FUNC_4(10);
    if (VAR_2->stripSpaces == ((void*)0))
 return;

    VAR_5 = VAR_4;
    while (*VAR_5 != 0) {
 while (FUNC_0(*VAR_5)) VAR_5++;
 if (*VAR_5 == 0)
     break;
        VAR_6 = VAR_5;
 while ((*VAR_6 != 0) && (!FUNC_0(*VAR_6))) VAR_6++;
 VAR_5 = FUNC_6(VAR_5, VAR_6 - VAR_5);
 if (VAR_5) {




     if (FUNC_5(VAR_5, (const xmlChar *)"*")) {
  VAR_2->stripAll = -1;
     } else {
  const xmlChar *VAR_7;




                VAR_7 = FUNC_8(VAR_3, &VAR_5);

  FUNC_3(VAR_2->stripSpaces, VAR_5, VAR_7,
    (xmlChar *) "preserve");
     }
     FUNC_1(VAR_5);
 }
 VAR_5 = VAR_6;
    }
    FUNC_1(VAR_4);
    if (VAR_3->children != ((void*)0)) {
 FUNC_9(VAR_2, VAR_3->children);
    }
}
