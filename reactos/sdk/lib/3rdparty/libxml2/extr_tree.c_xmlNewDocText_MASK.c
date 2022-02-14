
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlDoc ;
typedef int xmlChar ;
struct TYPE_4__ {int * doc; } ;


 TYPE_1__* FUNC_0 (int const*) ;

xmlNodePtr
FUNC_1(const xmlDoc *VAR_0, const xmlChar *VAR_1) {
    xmlNodePtr VAR_2;

    VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 != ((void*)0)) VAR_2->doc = (xmlDoc *)VAR_0;
    return(VAR_2);
}
