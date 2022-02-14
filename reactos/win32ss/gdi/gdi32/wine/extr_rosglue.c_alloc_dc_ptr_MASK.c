
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_9__ {int * hdc; int * next; int * funcs; } ;
struct TYPE_10__ {int refcount; int * hdc; TYPE_1__ NullPhysDev; TYPE_1__* physDev; int iType; void* hPalette; void* hPen; void* hBrush; void* hFont; } ;
typedef TYPE_2__ WINEDC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int VAR_5 ;
 int * FUNC_7 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_2__*,int) ;

WINEDC*
FUNC_9(WORD VAR_10)
{
    WINEDC* VAR_11;


    VAR_11 = FUNC_5(FUNC_3(), 0, sizeof(*VAR_11));
    if (VAR_11 == ((void*)0))
    {
        return ((void*)0);
    }

    FUNC_8(VAR_11, sizeof(*VAR_11));
    VAR_11->refcount = 1;
    VAR_11->hFont = FUNC_4(VAR_8);
    VAR_11->hBrush = FUNC_4(VAR_9);
    VAR_11->hPen = FUNC_4(VAR_0);
    VAR_11->hPalette = FUNC_4(VAR_1);

    if (VAR_10 == VAR_6)
    {


        VAR_11->hdc = FUNC_7(((void*)0));
        if (VAR_11->hdc == ((void*)0))
        {
            FUNC_6(FUNC_3(), 0, VAR_11);
            return ((void*)0);
        }

        VAR_11->iType = VAR_5;


        FUNC_2(VAR_11->hdc, VAR_11);
    }
    else if (VAR_10 == VAR_7)
    {
        VAR_11->hdc = FUNC_1(VAR_11, VAR_4);
        if (VAR_11->hdc == ((void*)0))
        {
            FUNC_6(FUNC_3(), 0, VAR_11);
            return ((void*)0);
        }
    }
    else
    {

        FUNC_0(VAR_3);
    }

    VAR_11->physDev = &VAR_11->NullPhysDev;
    VAR_11->NullPhysDev.funcs = &VAR_2;
    VAR_11->NullPhysDev.next = ((void*)0);

    VAR_11->NullPhysDev.hdc = VAR_11->hdc;
    return VAR_11;
}
