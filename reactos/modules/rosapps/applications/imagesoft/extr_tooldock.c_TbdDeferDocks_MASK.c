
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bottom; scalar_t__ left; scalar_t__ top; scalar_t__ right; } ;
struct TYPE_7__ {TYPE_2__* rcRebar; TYPE_1__ rcClient; int ** hRebar; } ;
struct TYPE_6__ {scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_3__* PTOOLBAR_DOCKS ;
typedef scalar_t__ LONG ;
typedef int * HDWP ;


 size_t VAR_0 ;
 int * FUNC_0 (int *,int *,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;

HDWP
FUNC_1(HDWP VAR_5,
              PTOOLBAR_DOCKS VAR_6)
{
    LONG VAR_7, VAR_8;
    HDWP VAR_9 = VAR_5;

    VAR_7 = VAR_6->rcClient.right - VAR_6->rcClient.left;
    VAR_8 = VAR_6->rcClient.bottom - VAR_6->rcClient.top;


    if (VAR_6->hRebar[VAR_4] != ((void*)0))
    {
        VAR_9 = FUNC_0(VAR_9,
                              VAR_6->hRebar[VAR_4],
                              ((void*)0),
                              VAR_6->rcClient.left - VAR_6->rcRebar[VAR_1].right,
                              VAR_6->rcClient.top - VAR_6->rcRebar[VAR_4].bottom,
                              VAR_7 + VAR_6->rcRebar[VAR_1].right + VAR_6->rcRebar[VAR_2].right,
                              VAR_6->rcRebar[VAR_4].bottom,
                              VAR_3);
        if (VAR_9 == ((void*)0))
            return ((void*)0);
    }


    if (VAR_6->hRebar[VAR_1] != ((void*)0))
    {
        VAR_9 = FUNC_0(VAR_9,
                              VAR_6->hRebar[VAR_1],
                              ((void*)0),
                              VAR_6->rcClient.left - VAR_6->rcRebar[VAR_1].right,
                              VAR_6->rcClient.top,
                              VAR_6->rcRebar[VAR_1].right,
                              VAR_8,
                              VAR_3);
        if (VAR_9 == ((void*)0))
            return ((void*)0);
    }


    if (VAR_6->hRebar[VAR_2] != ((void*)0))
    {
        VAR_9 = FUNC_0(VAR_9,
                              VAR_6->hRebar[VAR_2],
                              ((void*)0),
                              VAR_6->rcClient.right,
                              VAR_6->rcClient.top,
                              VAR_6->rcRebar[VAR_2].right,
                              VAR_8,
                              VAR_3);
        if (VAR_9 == ((void*)0))
            return ((void*)0);
    }


    if (VAR_6->hRebar[VAR_0] != ((void*)0))
    {
        VAR_9 = FUNC_0(VAR_9,
                              VAR_6->hRebar[VAR_0],
                              ((void*)0),
                              VAR_6->rcClient.left - VAR_6->rcRebar[VAR_1].right,
                              VAR_6->rcClient.bottom,
                              VAR_7 + VAR_6->rcRebar[VAR_1].right + VAR_6->rcRebar[VAR_2].right,
                              VAR_6->rcRebar[VAR_0].bottom,
                              VAR_3);
        if (VAR_9 == ((void*)0))
            return ((void*)0);
    }

    return VAR_9;
}
