
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ dwControlID; } ;
struct TYPE_15__ {int NodeID; TYPE_1__ Control; } ;
struct TYPE_12__ {struct TYPE_12__* Flink; } ;
struct TYPE_14__ {TYPE_2__ ControlsList; } ;
struct TYPE_13__ {TYPE_2__ LineList; } ;
typedef int * PULONG ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int MIXER_STATUS ;
typedef TYPE_3__* LPMIXER_INFO ;
typedef TYPE_4__* LPMIXERLINE_EXT ;
typedef TYPE_5__* LPMIXERCONTROL_EXT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

MIXER_STATUS
FUNC_1(
    LPMIXER_INFO VAR_4,
    DWORD VAR_5,
    LPMIXERLINE_EXT *VAR_6,
    LPMIXERCONTROL_EXT *VAR_7,
    PULONG VAR_8)
{
    PLIST_ENTRY VAR_9, VAR_10;
    LPMIXERLINE_EXT VAR_11;
    LPMIXERCONTROL_EXT VAR_12;


    VAR_9 = VAR_4->LineList.Flink;

    while(VAR_9 != &VAR_4->LineList)
    {
        VAR_11 = (LPMIXERLINE_EXT)FUNC_0(VAR_9, VAR_1, VAR_9);

        VAR_10 = VAR_11->ControlsList.Flink;
        while(VAR_10 != &VAR_11->ControlsList)
        {
            VAR_12 = (LPMIXERCONTROL_EXT)FUNC_0(VAR_10, VAR_0, VAR_9);
            if (VAR_12->Control.dwControlID == VAR_5)
            {
                if (VAR_6)
                    *VAR_6 = VAR_11;
                if (VAR_7)
                    *VAR_7 = VAR_12;
                if (VAR_8)
                    *VAR_8 = VAR_12->NodeID;
                return VAR_2;
            }
            VAR_10 = VAR_10->Flink;
        }
        VAR_9 = VAR_9->Flink;
    }

    return VAR_3;
}
