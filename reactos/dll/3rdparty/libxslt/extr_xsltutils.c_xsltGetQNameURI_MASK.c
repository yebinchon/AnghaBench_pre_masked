
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_7__ {int doc; } ;
struct TYPE_6__ {scalar_t__ const* href; } ;


 scalar_t__ const* VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_2__*,scalar_t__*) ;
 scalar_t__* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ,char*,scalar_t__*,...) ;
 int VAR_1 ;

const xmlChar *
FUNC_4(xmlNodePtr VAR_2, xmlChar ** VAR_3)
{
    int VAR_4 = 0;
    xmlChar *VAR_5;
    xmlNsPtr VAR_6;

    if (VAR_3 == ((void*)0))
 return(((void*)0));
    VAR_5 = *VAR_3;
    if ((VAR_5 == ((void*)0)) || (*VAR_5 == 0))
 return(((void*)0));
    if (VAR_2 == ((void*)0)) {
 FUNC_3(VAR_1,
           "QName: no element for namespace lookup %s\n",
    VAR_5);
 FUNC_0(VAR_5);
 *VAR_3 = ((void*)0);
 return(((void*)0));
    }


    if (VAR_5[0] == ':')
 return(((void*)0));





    while ((VAR_5[VAR_4] != 0) && (VAR_5[VAR_4] != ':'))
 VAR_4++;

    if (VAR_5[VAR_4] == 0)
 return(((void*)0));




    if ((VAR_5[0] == 'x') && (VAR_5[1] == 'm') &&
        (VAR_5[2] == 'l') && (VAR_5[3] == ':')) {
 if (VAR_5[4] == 0)
     return(((void*)0));
        *VAR_3 = FUNC_2(&VAR_5[4]);
 FUNC_0(VAR_5);
 return(VAR_0);
    }

    VAR_5[VAR_4] = 0;
    VAR_6 = FUNC_1(VAR_2->doc, VAR_2, VAR_5);
    if (VAR_6 == ((void*)0)) {
 FUNC_3(VAR_1,
  "%s:%s : no namespace bound to prefix %s\n",
           VAR_5, &VAR_5[VAR_4 + 1], VAR_5);
 *VAR_3 = ((void*)0);
 FUNC_0(VAR_5);
 return(((void*)0));
    }
    *VAR_3 = FUNC_2(&VAR_5[VAR_4 + 1]);
    FUNC_0(VAR_5);
    return(VAR_6->href);
}
