
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int doc; } ;


 TYPE_1__* FUNC_0 (int const*,int) ;

xmlNodePtr
FUNC_1(xmlDocPtr VAR_0, const xmlChar *VAR_1, int VAR_2) {
    xmlNodePtr VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_2);
    if (VAR_3 != ((void*)0)) VAR_3->doc = VAR_0;
    return(VAR_3);
}
