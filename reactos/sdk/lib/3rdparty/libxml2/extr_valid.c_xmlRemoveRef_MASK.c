
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* ap; int * l; } ;
typedef TYPE_1__ xmlRemoveMemo ;
typedef int * xmlRefTablePtr ;
typedef int * xmlListPtr ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_3__* xmlAttrPtr ;
struct TYPE_10__ {int children; } ;
struct TYPE_9__ {scalar_t__ refs; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;
 int * FUNC_5 (TYPE_2__*,int ,int) ;
 int VAR_1 ;

int
FUNC_6(xmlDocPtr VAR_2, xmlAttrPtr VAR_3) {
    xmlListPtr VAR_4;
    xmlRefTablePtr VAR_5;
    xmlChar *VAR_6;
    xmlRemoveMemo VAR_7;

    if (VAR_2 == ((void*)0)) return(-1);
    if (VAR_3 == ((void*)0)) return(-1);

    VAR_5 = (xmlRefTablePtr) VAR_2->refs;
    if (VAR_5 == ((void*)0))
        return(-1);

    VAR_6 = FUNC_5(VAR_2, VAR_3->children, 1);
    if (VAR_6 == ((void*)0))
        return(-1);

    VAR_4 = FUNC_1(VAR_5, VAR_6);
    if(VAR_4 == ((void*)0)) {
        FUNC_0(VAR_6);
        return (-1);
    }
    VAR_7.l = VAR_4;
    VAR_7.ap = VAR_3;


    FUNC_4(VAR_4, VAR_1, &VAR_7);


    if (FUNC_3(VAR_4))
        FUNC_2(VAR_5, VAR_6, ((void*)0), VAR_0);
    FUNC_0(VAR_6);
    return(0);
}
