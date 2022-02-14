
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int bottom; int right; int left; int top; } ;
struct TYPE_7__ {TYPE_3__ rcClient; TYPE_1__* rcRebar; int ** hRebar; } ;
struct TYPE_6__ {scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_2__* PTOOLBAR_DOCKS ;
typedef TYPE_3__* PRECT ;
typedef size_t INT ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;

INT
FUNC_0(PTOOLBAR_DOCKS VAR_5,
                          PRECT VAR_6)
{
    INT VAR_7, VAR_8 = 0;

    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
    {
        if (VAR_5->hRebar[VAR_7] != ((void*)0))
        {
            VAR_8++;
        }
    }

    if (VAR_8 != 0)
    {
        VAR_6->top += VAR_5->rcRebar[VAR_4].bottom;
        VAR_6->left += VAR_5->rcRebar[VAR_2].right;
        VAR_6->right -= VAR_5->rcRebar[VAR_3].right;
        VAR_6->bottom -= VAR_5->rcRebar[VAR_0].bottom;
    }

    VAR_5->rcClient = *VAR_6;

    return VAR_8;
}
