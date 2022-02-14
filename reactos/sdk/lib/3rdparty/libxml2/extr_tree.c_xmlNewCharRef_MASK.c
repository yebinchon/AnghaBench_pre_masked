
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlNode ;
typedef int xmlDocPtr ;
typedef char xmlChar ;
struct TYPE_5__ {void* name; int doc; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 void* FUNC_5 (char const*,int) ;
 int FUNC_6 (char*) ;

xmlNodePtr
FUNC_7(xmlDocPtr VAR_2, const xmlChar *VAR_3) {
    xmlNodePtr VAR_4;

    if (VAR_3 == ((void*)0))
        return(((void*)0));




    VAR_4 = (xmlNodePtr) FUNC_1(sizeof(xmlNode));
    if (VAR_4 == ((void*)0)) {
 FUNC_6("building character reference");
 return(((void*)0));
    }
    FUNC_0(VAR_4, 0, sizeof(xmlNode));
    VAR_4->type = VAR_0;

    VAR_4->doc = VAR_2;
    if (VAR_3[0] == '&') {
        int VAR_5;
        VAR_3++;
 VAR_5 = FUNC_4(VAR_3);
 if (VAR_3[VAR_5 - 1] == ';')
     VAR_4->name = FUNC_5(VAR_3, VAR_5 - 1);
 else
     VAR_4->name = FUNC_5(VAR_3, VAR_5);
    } else
 VAR_4->name = FUNC_3(VAR_3);

    if ((VAR_1) && (&FUNC_2))
 FUNC_2(VAR_4);
    return(VAR_4);
}
