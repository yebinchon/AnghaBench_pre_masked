
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xsltStyleExtShutdownFunction ;
typedef int xsltStyleExtInitFunction ;
typedef scalar_t__ xsltExtShutdownFunction ;
typedef TYPE_1__* xsltExtModulePtr ;
typedef int * xsltExtInitFunction ;
typedef int xmlChar ;
struct TYPE_4__ {scalar_t__ shutdownFunc; int * initFunc; } ;


 int FUNC_0 (int *,int const*,void*) ;
 int * FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_5 (int *,scalar_t__,int ,int ) ;

int
FUNC_6(const xmlChar * VAR_2,
                          xsltExtInitFunction VAR_3,
                          xsltExtShutdownFunction VAR_4,
                          xsltStyleExtInitFunction VAR_5,
                          xsltStyleExtShutdownFunction VAR_6)
{
    int VAR_7;
    xsltExtModulePtr VAR_8;

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return (-1);
    if (VAR_1 == ((void*)0))
        VAR_1 = FUNC_1(10);

    if (VAR_1 == ((void*)0))
        return (-1);

    FUNC_3(VAR_0);

    VAR_8 = FUNC_2(VAR_1, VAR_2);
    if (VAR_8 != ((void*)0)) {
        if ((VAR_8->initFunc == VAR_3) &&
            (VAR_8->shutdownFunc == VAR_4))
            VAR_7 = 0;
        else
            VAR_7 = -1;
        goto done;
    }
    VAR_8 = FUNC_5(VAR_3, VAR_4,
                              VAR_5, VAR_6);
    if (VAR_8 == ((void*)0)) {
        VAR_7 = -1;
        goto done;
    }
    VAR_7 = FUNC_0(VAR_1, VAR_2, (void *) VAR_8);

done:
    FUNC_4(VAR_0);
    return (VAR_7);
}
