
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_1__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_5__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int ,char*,int *,int *) ;
 int VAR_2 ;
 int * FUNC_4 (TYPE_1__*,int const*,int const*) ;

xmlChar *
FUNC_5(xsltTransformContextPtr VAR_3, xmlNodePtr VAR_4,
                   const xmlChar *VAR_5, const xmlChar *VAR_6)
{
    xmlChar *VAR_7;
    xmlChar *VAR_8;

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) ||
        (VAR_4->type != VAR_0))
 return(((void*)0));

    VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_6);
    if (VAR_8 == ((void*)0))
 return(((void*)0));







    VAR_7 = FUNC_2(VAR_3, VAR_8, VAR_4);




    if (VAR_8 != ((void*)0))
 FUNC_1(VAR_8);
    return(VAR_7);
}
