
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlNodePtr ;
typedef TYPE_1__* xmlDocPtr ;
typedef int xmlDoc ;
typedef int xmlChar ;
struct TYPE_5__ {int standalone; int compression; int charset; int properties; scalar_t__ parseFlags; struct TYPE_5__* doc; int * version; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (char*) ;

xmlDocPtr
FUNC_6(const xmlChar *VAR_4) {
    xmlDocPtr VAR_5;

    if (VAR_4 == ((void*)0))
 VAR_4 = (const xmlChar *) "1.0";




    VAR_5 = (xmlDocPtr) FUNC_2(sizeof(xmlDoc));
    if (VAR_5 == ((void*)0)) {
 FUNC_5("building doc");
 return(((void*)0));
    }
    FUNC_0(VAR_5, 0, sizeof(xmlDoc));
    VAR_5->type = VAR_1;

    VAR_5->version = FUNC_4(VAR_4);
    if (VAR_5->version == ((void*)0)) {
 FUNC_5("building doc");
 FUNC_1(VAR_5);
 return(((void*)0));
    }
    VAR_5->standalone = -1;
    VAR_5->compression = -1;
    VAR_5->doc = VAR_5;
    VAR_5->parseFlags = 0;
    VAR_5->properties = VAR_2;





    VAR_5->charset = VAR_0;

    if ((VAR_3) && (&FUNC_3))
 FUNC_3((xmlNodePtr)VAR_5);
    return(VAR_5);
}
