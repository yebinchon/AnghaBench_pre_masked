
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlNode ;
typedef int xmlChar ;
struct TYPE_5__ {int content; int name; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const*) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;

xmlNodePtr
FUNC_5(const xmlChar *VAR_3) {
    xmlNodePtr VAR_4;




    VAR_4 = (xmlNodePtr) FUNC_1(sizeof(xmlNode));
    if (VAR_4 == ((void*)0)) {
 FUNC_4("building comment");
 return(((void*)0));
    }
    FUNC_0(VAR_4, 0, sizeof(xmlNode));
    VAR_4->type = VAR_0;

    VAR_4->name = VAR_2;
    if (VAR_3 != ((void*)0)) {
 VAR_4->content = FUNC_3(VAR_3);
    }

    if ((VAR_1) && (&FUNC_2))
 FUNC_2(VAR_4);
    return(VAR_4);
}
