
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlNode ;
typedef int xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_5__ {int content; int doc; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const*,int) ;
 int FUNC_4 (char*) ;

xmlNodePtr
FUNC_5(xmlDocPtr VAR_2, const xmlChar *VAR_3, int VAR_4) {
    xmlNodePtr VAR_5;




    VAR_5 = (xmlNodePtr) FUNC_1(sizeof(xmlNode));
    if (VAR_5 == ((void*)0)) {
 FUNC_4("building CDATA");
 return(((void*)0));
    }
    FUNC_0(VAR_5, 0, sizeof(xmlNode));
    VAR_5->type = VAR_0;
    VAR_5->doc = VAR_2;

    if (VAR_3 != ((void*)0)) {
 VAR_5->content = FUNC_3(VAR_3, VAR_4);
    }

    if ((VAR_1) && (&FUNC_2))
 FUNC_2(VAR_5);
    return(VAR_5);
}
