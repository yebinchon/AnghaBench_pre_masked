
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_12__ {int doc; } ;
struct TYPE_11__ {scalar_t__ const* href; } ;
struct TYPE_10__ {int dict; int errors; } ;


 scalar_t__ const* VAR_0 ;
 scalar_t__* FUNC_0 (int ,scalar_t__ const*,int) ;
 int FUNC_1 (scalar_t__*) ;
 TYPE_2__* FUNC_2 (int ,TYPE_3__*,scalar_t__*) ;
 scalar_t__* FUNC_3 (scalar_t__ const*,int) ;
 int FUNC_4 (int ,char*,scalar_t__ const*,...) ;
 int VAR_1 ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_3__*,char*,scalar_t__*) ;

const xmlChar *
FUNC_6(xsltStylesheetPtr VAR_2, xmlNodePtr VAR_3,
   const xmlChar **VAR_4) {
    int VAR_5 = 0;
    xmlChar *VAR_6;
    xmlNsPtr VAR_7;

    if (VAR_4 == ((void*)0))
        return(((void*)0));
    VAR_6 = (xmlChar *)*VAR_4;
    if ((VAR_6 == ((void*)0)) || (*VAR_6 == 0))
        return(((void*)0));
    if (VAR_3 == ((void*)0)) {
        FUNC_4(VAR_1,
                         "QName: no element for namespace lookup %s\n",
                          VAR_6);
 *VAR_4 = ((void*)0);
 return(((void*)0));
    }





    while ((VAR_6[VAR_5] != 0) && (VAR_6[VAR_5] != ':'))
        VAR_5++;

    if (VAR_6[VAR_5] == 0)
        return(((void*)0));




    if ((VAR_6[0] == 'x') && (VAR_6[1] == 'm') &&
        (VAR_6[2] == 'l') && (VAR_6[3] == ':')) {
        if (VAR_6[4] == 0)
            return(((void*)0));
        *VAR_4 = FUNC_0(VAR_2->dict, &VAR_6[4], -1);
        return(VAR_0);
    }

    VAR_6 = FUNC_3(*VAR_4, VAR_5);
    VAR_7 = FUNC_2(VAR_3->doc, VAR_3, VAR_6);
    if (VAR_7 == ((void*)0)) {
 if (VAR_2) {
     FUNC_5(((void*)0), VAR_2, VAR_3,
  "No namespace bound to prefix '%s'.\n",
  VAR_6);
     VAR_2->errors++;
 } else {
     FUNC_4(VAR_1,
                "%s : no namespace bound to prefix %s\n",
  *VAR_4, VAR_6);
 }
        *VAR_4 = ((void*)0);
        FUNC_1(VAR_6);
        return(((void*)0));
    }
    *VAR_4 = FUNC_0(VAR_2->dict, (*VAR_4)+VAR_5+1, -1);
    FUNC_1(VAR_6);
    return(VAR_7->href);
}
