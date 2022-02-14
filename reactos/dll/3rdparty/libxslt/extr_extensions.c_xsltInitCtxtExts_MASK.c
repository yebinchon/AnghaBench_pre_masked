
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
struct TYPE_10__ {int ret; TYPE_1__* ctxt; } ;
typedef TYPE_3__ xsltInitExtCtxt ;
struct TYPE_9__ {int * extInfos; } ;
struct TYPE_8__ {TYPE_2__* style; } ;


 int FUNC_0 (int *,int ,TYPE_3__*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

int
FUNC_3(xsltTransformContextPtr VAR_2)
{
    xsltStylesheetPtr VAR_3;
    xsltInitExtCtxt VAR_4;

    if (VAR_2 == ((void*)0))
        return (-1);

    VAR_3 = VAR_2->style;
    if (VAR_3 == ((void*)0))
        return (-1);

    VAR_4.ctxt = VAR_2;
    VAR_4.ret = 0;

    while (VAR_3 != ((void*)0)) {
        if (VAR_3->extInfos != ((void*)0)) {
            FUNC_0(VAR_3->extInfos, VAR_1, &VAR_4);
            if (VAR_4.ret == -1)
                return (-1);
        }
        VAR_3 = FUNC_2(VAR_3);
    }




    return (VAR_4.ret);
}
