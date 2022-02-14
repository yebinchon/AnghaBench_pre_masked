
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlNode ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int * dict; } ;
struct TYPE_7__ {TYPE_2__* doc; void* content; void* name; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 void* FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (int const*) ;
 int FUNC_6 (char*) ;

xmlNodePtr
FUNC_7(xmlDocPtr VAR_3, const xmlChar *VAR_4, const xmlChar *VAR_5) {
    xmlNodePtr VAR_6;

    if (VAR_4 == ((void*)0)) {




 return(((void*)0));
    }




    VAR_6 = (xmlNodePtr) FUNC_3(sizeof(xmlNode));
    if (VAR_6 == ((void*)0)) {
 FUNC_6("building PI");
 return(((void*)0));
    }
    FUNC_0(VAR_6, 0, sizeof(xmlNode));
    VAR_6->type = VAR_0;

    if ((VAR_3 != ((void*)0)) && (VAR_3->dict != ((void*)0)))
        VAR_6->name = FUNC_1(VAR_3->dict, VAR_4, -1);
    else
 VAR_6->name = FUNC_5(VAR_4);
    if (VAR_5 != ((void*)0)) {
 VAR_6->content = FUNC_5(VAR_5);
    }
    VAR_6->doc = VAR_3;

    if ((VAR_1) && (&FUNC_4))
 FUNC_4((xmlNodePtr)VAR_6);
    return(VAR_6);
}
