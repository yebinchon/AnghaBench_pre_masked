
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
struct TYPE_13__ {scalar_t__ href; } ;
struct TYPE_12__ {int warnings; int doc; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (TYPE_3__*,scalar_t__ const*,int *) ;
 TYPE_2__* FUNC_4 (int ,TYPE_3__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,scalar_t__ const*) ;
 scalar_t__* FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (int ,char*,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_8 (int *,TYPE_1__*,TYPE_3__*,char*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_9(xsltStylesheetPtr VAR_3, xmlNodePtr VAR_4,
     int VAR_5)
{
    int VAR_6 = 0;
    xmlChar *VAR_7;
    xmlChar *VAR_8, *VAR_9;

    if ((VAR_4 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4->type != VAR_0))
 return(0);

    if (VAR_5)
 VAR_7 = FUNC_3(VAR_4,
     (const xmlChar *)"exclude-result-prefixes", ((void*)0));
    else
 VAR_7 = FUNC_3(VAR_4,
     (const xmlChar *)"exclude-result-prefixes", VAR_1);

    if (VAR_7 == ((void*)0)) {
 return(0);
    }

    VAR_8 = VAR_7;
    while (*VAR_8 != 0) {
 while (FUNC_0(*VAR_8)) VAR_8++;
 if (*VAR_8 == 0)
     break;
        VAR_9 = VAR_8;
 while ((*VAR_9 != 0) && (!FUNC_0(*VAR_9))) VAR_9++;
 VAR_8 = FUNC_6(VAR_8, VAR_9 - VAR_8);
 if (VAR_8) {
     xmlNsPtr VAR_10;

     if (FUNC_5(VAR_8, (const xmlChar *)"#default"))
  VAR_10 = FUNC_4(VAR_3->doc, VAR_4, ((void*)0));
     else
  VAR_10 = FUNC_4(VAR_3->doc, VAR_4, VAR_8);
     if (VAR_10 == ((void*)0)) {
  FUNC_8(((void*)0), VAR_3, VAR_4,
     "xsl:exclude-result-prefixes : undefined namespace %s\n",
                          VAR_8);
  if (VAR_3 != ((void*)0)) VAR_3->warnings++;
     } else {
  if (FUNC_1(VAR_3, (xmlChar *) VAR_10->href) >= 0) {




      VAR_6++;
  }
     }
     FUNC_2(VAR_8);
 }
 VAR_8 = VAR_9;
    }
    FUNC_2(VAR_7);
    return(VAR_6);
}
