
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_14__ {scalar_t__ type; } ;
struct TYPE_13__ {int href; } ;
struct TYPE_12__ {int warnings; int doc; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (TYPE_3__*,scalar_t__ const*,int *) ;
 TYPE_2__* FUNC_3 (int ,TYPE_3__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,scalar_t__ const*) ;
 scalar_t__* FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (int ,char*,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_3__*,char*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_9(xsltStylesheetPtr VAR_3, xmlNodePtr VAR_4,
        int VAR_5) {
    xmlChar *VAR_6;
    xmlChar *VAR_7, *VAR_8;

    if ((VAR_4 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4->type != VAR_0))
 return;

    if (VAR_5) {

 VAR_6 = FUNC_2(VAR_4,
     (const xmlChar *)"extension-element-prefixes", ((void*)0));
    } else {

 VAR_6 = FUNC_2(VAR_4,
     (const xmlChar *)"extension-element-prefixes", VAR_1);
    }
    if (VAR_6 == ((void*)0)) {
 return;
    }

    VAR_7 = VAR_6;
    while (*VAR_7 != 0) {
 while (FUNC_0(*VAR_7)) VAR_7++;
 if (*VAR_7 == 0)
     break;
        VAR_8 = VAR_7;
 while ((*VAR_8 != 0) && (!FUNC_0(*VAR_8))) VAR_8++;
 VAR_7 = FUNC_5(VAR_7, VAR_8 - VAR_7);
 if (VAR_7) {
     xmlNsPtr VAR_9;

     if (FUNC_4(VAR_7, (const xmlChar *)"#default"))
  VAR_9 = FUNC_3(VAR_3->doc, VAR_4, ((void*)0));
     else
  VAR_9 = FUNC_3(VAR_3->doc, VAR_4, VAR_7);
     if (VAR_9 == ((void*)0)) {
  FUNC_8(((void*)0), VAR_3, VAR_4,
     "xsl:extension-element-prefix : undefined namespace %s\n",
                          VAR_7);
  if (VAR_3 != ((void*)0)) VAR_3->warnings++;
     } else {




  FUNC_7(VAR_3, VAR_7, VAR_9->href);
     }
     FUNC_1(VAR_7);
 }
 VAR_7 = VAR_8;
    }
    FUNC_1(VAR_6);
}
