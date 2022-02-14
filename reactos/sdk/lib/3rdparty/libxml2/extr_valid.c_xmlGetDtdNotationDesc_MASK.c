
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xmlNotationTablePtr ;
typedef int * xmlNotationPtr ;
typedef TYPE_1__* xmlDtdPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int * notations; } ;


 int * FUNC_0 (scalar_t__,int const*) ;

xmlNotationPtr
FUNC_1(xmlDtdPtr VAR_0, const xmlChar *VAR_1) {
    xmlNotationTablePtr VAR_2;

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_0->notations == ((void*)0)) return(((void*)0));
    VAR_2 = (xmlNotationTablePtr) VAR_0->notations;

    return(FUNC_0(VAR_2, VAR_1));
}
