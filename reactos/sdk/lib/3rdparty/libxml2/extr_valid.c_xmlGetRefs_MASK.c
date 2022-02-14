
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xmlRefTablePtr ;
typedef int * xmlListPtr ;
typedef TYPE_1__* xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_3__ {scalar_t__ refs; } ;


 int * FUNC_0 (int *,int const*) ;

xmlListPtr
FUNC_1(xmlDocPtr VAR_0, const xmlChar *VAR_1) {
    xmlRefTablePtr VAR_2;

    if (VAR_0 == ((void*)0)) {
        return(((void*)0));
    }

    if (VAR_1 == ((void*)0)) {
        return(((void*)0));
    }

    VAR_2 = (xmlRefTablePtr) VAR_0->refs;
    if (VAR_2 == ((void*)0))
        return(((void*)0));

    return (FUNC_0(VAR_2, VAR_1));
}
