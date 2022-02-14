
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlDtdPtr ;
typedef int const xmlChar ;
typedef int * xmlAttributeTablePtr ;
typedef int * xmlAttributePtr ;
struct TYPE_3__ {int * attributes; } ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *,int const*,int const*,int const*) ;
 int const* FUNC_2 (int const*,int const**) ;

xmlAttributePtr
FUNC_3(xmlDtdPtr VAR_0, const xmlChar *VAR_1, const xmlChar *VAR_2) {
    xmlAttributeTablePtr VAR_3;
    xmlAttributePtr VAR_4;
    xmlChar *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);

    if (VAR_0 == ((void*)0)) return(((void*)0));
    if (VAR_0->attributes == ((void*)0)) return(((void*)0));

    VAR_3 = (xmlAttributeTablePtr) VAR_0->attributes;
    if (VAR_3 == ((void*)0))
 return(((void*)0));

    VAR_5 = FUNC_2(VAR_2, &VAR_6);

    if (VAR_5 != ((void*)0)) {
 VAR_4 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_1);
 if (VAR_6 != ((void*)0)) FUNC_0(VAR_6);
 if (VAR_5 != ((void*)0)) FUNC_0(VAR_5);
    } else
 VAR_4 = FUNC_1(VAR_3, VAR_2, ((void*)0), VAR_1);
    return(VAR_4);
}
