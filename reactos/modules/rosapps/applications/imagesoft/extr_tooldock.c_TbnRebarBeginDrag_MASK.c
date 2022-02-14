
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int wID; int uBand; } ;
struct TYPE_6__ {int DraggingBandId; int * Dragging; } ;
typedef TYPE_1__* PTOOLBAR_DOCKS ;
typedef int * PDOCKBAR_ITEM ;
typedef int LRESULT ;
typedef TYPE_2__* LPNMREBAR ;
typedef int DOCK_POSITION ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static LRESULT
FUNC_1(PTOOLBAR_DOCKS VAR_2,
                  DOCK_POSITION VAR_3,
                  LPNMREBAR VAR_4)
{
    PDOCKBAR_ITEM VAR_5;

    VAR_5 = FUNC_0(VAR_2,
                                    VAR_3,
                                    VAR_4->uBand);

    if (VAR_5 != ((void*)0))
    {
        VAR_2->Dragging = VAR_5;
        VAR_2->DraggingBandId = VAR_4->wID;
        return VAR_0;
    }

    return VAR_1;
}
