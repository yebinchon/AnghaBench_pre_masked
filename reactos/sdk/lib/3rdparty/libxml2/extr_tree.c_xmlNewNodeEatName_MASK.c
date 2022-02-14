
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlNsPtr ;
typedef TYPE_1__* xmlNodePtr ;
typedef int xmlNode ;
typedef int xmlChar ;
struct TYPE_5__ {int ns; int * name; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

xmlNodePtr
FUNC_5(xmlNsPtr VAR_3, xmlChar *VAR_4) {
    xmlNodePtr VAR_5;

    if (VAR_4 == ((void*)0)) {




 return(((void*)0));
    }




    VAR_5 = (xmlNodePtr) FUNC_2(sizeof(xmlNode));
    if (VAR_5 == ((void*)0)) {
 FUNC_4("building node");

 return(((void*)0));
    }
    FUNC_0(VAR_5, 0, sizeof(xmlNode));
    VAR_5->type = VAR_0;

    VAR_5->name = VAR_4;
    VAR_5->ns = VAR_3;

    if ((VAR_1) && (&FUNC_3))
 FUNC_3((xmlNodePtr)VAR_5);
    return(VAR_5);
}
