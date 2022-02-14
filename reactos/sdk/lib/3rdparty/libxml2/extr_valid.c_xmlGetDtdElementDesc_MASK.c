
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xmlElementTablePtr ;
typedef int * xmlElementPtr ;
typedef TYPE_1__* xmlDtdPtr ;
typedef int xmlChar ;
struct TYPE_3__ {int * elements; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int const*,int *) ;
 int * FUNC_2 (int const*,int **) ;

xmlElementPtr
FUNC_3(xmlDtdPtr VAR_0, const xmlChar *VAR_1) {
    xmlElementTablePtr VAR_2;
    xmlElementPtr VAR_3;
    xmlChar *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0))) return(((void*)0));
    if (VAR_0->elements == ((void*)0))
 return(((void*)0));
    VAR_2 = (xmlElementTablePtr) VAR_0->elements;

    VAR_4 = FUNC_2(VAR_1, &VAR_5);
    if (VAR_4 != ((void*)0))
        VAR_1 = VAR_4;
    VAR_3 = FUNC_1(VAR_2, VAR_1, VAR_5);
    if (VAR_5 != ((void*)0)) FUNC_0(VAR_5);
    if (VAR_4 != ((void*)0)) FUNC_0(VAR_4);
    return(VAR_3);
}
