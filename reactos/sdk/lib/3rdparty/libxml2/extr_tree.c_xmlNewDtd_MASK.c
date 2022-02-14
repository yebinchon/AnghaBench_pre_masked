
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xmlNodePtr ;
typedef TYPE_1__* xmlDtdPtr ;
typedef int xmlDtd ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_7__ {TYPE_1__* extSubset; int name; } ;
struct TYPE_6__ {TYPE_2__* doc; void* SystemID; void* ExternalID; void* name; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ,char*,char*,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int const*) ;
 int FUNC_5 (char*) ;

xmlDtdPtr
FUNC_6(xmlDocPtr VAR_3, const xmlChar *VAR_4,
                    const xmlChar *VAR_5, const xmlChar *VAR_6) {
    xmlDtdPtr VAR_7;

    if ((VAR_3 != ((void*)0)) && (VAR_3->extSubset != ((void*)0))) {






 return(((void*)0));
    }




    VAR_7 = (xmlDtdPtr) FUNC_2(sizeof(xmlDtd));
    if (VAR_7 == ((void*)0)) {
 FUNC_5("building DTD");
 return(((void*)0));
    }
    FUNC_0(VAR_7, 0 , sizeof(xmlDtd));
    VAR_7->type = VAR_0;

    if (VAR_4 != ((void*)0))
 VAR_7->name = FUNC_4(VAR_4);
    if (VAR_5 != ((void*)0))
 VAR_7->ExternalID = FUNC_4(VAR_5);
    if (VAR_6 != ((void*)0))
 VAR_7->SystemID = FUNC_4(VAR_6);
    if (VAR_3 != ((void*)0))
 VAR_3->extSubset = VAR_7;
    VAR_7->doc = VAR_3;

    if ((VAR_1) && (&FUNC_3))
 FUNC_3((xmlNodePtr)VAR_7);
    return(VAR_7);
}
