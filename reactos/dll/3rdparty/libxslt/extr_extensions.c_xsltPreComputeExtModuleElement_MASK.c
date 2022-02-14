
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * xsltStylesheetPtr ;
typedef TYPE_2__* xsltExtElementPtr ;
typedef int * xsltElemPreCompPtr ;
typedef TYPE_3__* xmlNodePtr ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__* ns; int name; } ;
struct TYPE_8__ {int transform; int * (* precomp ) (int *,TYPE_3__*,int ) ;} ;
struct TYPE_7__ {int href; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_4 (int *,TYPE_3__*,int ) ;

xsltElemPreCompPtr
FUNC_5(xsltStylesheetPtr VAR_3, xmlNodePtr VAR_4)
{
    xsltExtElementPtr VAR_5;
    xsltElemPreCompPtr VAR_6 = ((void*)0);

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)) ||
        (VAR_4->type != VAR_0) || (VAR_4->ns == ((void*)0)))
        return (((void*)0));

    FUNC_2(VAR_2);

    VAR_5 = (xsltExtElementPtr)
        FUNC_1(VAR_1, VAR_4->name, VAR_4->ns->href);

    FUNC_3(VAR_2);




    if (VAR_5 == ((void*)0))
        return (((void*)0));

    if (VAR_5->precomp != ((void*)0)) {
        VAR_6 = VAR_5->precomp(VAR_3, VAR_4, VAR_5->transform);
    }
    if (VAR_6 == ((void*)0)) {





        VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5->transform);
    }

    return (VAR_6);
}
