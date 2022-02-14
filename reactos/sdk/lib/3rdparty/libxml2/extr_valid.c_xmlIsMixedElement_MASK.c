
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlElementPtr ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_6__ {int * extSubset; int * intSubset; } ;
struct TYPE_5__ {int etype; } ;







 TYPE_1__* FUNC_0 (int *,int const*) ;

int
FUNC_1(xmlDocPtr VAR_0, const xmlChar *VAR_1) {
    xmlElementPtr VAR_2;

    if ((VAR_0 == ((void*)0)) || (VAR_0->intSubset == ((void*)0))) return(-1);

    VAR_2 = FUNC_0(VAR_0->intSubset, VAR_1);
    if ((VAR_2 == ((void*)0)) && (VAR_0->extSubset != ((void*)0)))
 VAR_2 = FUNC_0(VAR_0->extSubset, VAR_1);
    if (VAR_2 == ((void*)0)) return(-1);
    switch (VAR_2->etype) {
 case 128:
     return(-1);
 case 131:
     return(0);
        case 130:




 case 132:
 case 129:
     return(1);
    }
    return(1);
}
