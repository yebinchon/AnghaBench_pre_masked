
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int WPARAM ;
struct TYPE_13__ {int x; int y; } ;
struct TYPE_20__ {int mouseData; TYPE_1__ pt; } ;
struct TYPE_19__ {int x; int y; } ;
struct TYPE_15__ {TYPE_2__* user_df; } ;
struct TYPE_17__ {int dwCoopLevel; int crit; TYPE_4__* dinput; TYPE_3__ data_format; } ;
struct TYPE_12__ {int lX; int lY; int lZ; int* rgbButtons; } ;
struct TYPE_18__ {int clipped; TYPE_5__ base; TYPE_10__ m_state; int need_warp; int warp_override; } ;
struct TYPE_16__ {int evsequence; } ;
struct TYPE_14__ {int dwFlags; } ;
typedef TYPE_6__ SysMouseImpl ;
typedef TYPE_7__ POINT ;
typedef TYPE_8__ MSLLHOOKSTRUCT ;
typedef int LPDIRECTINPUTDEVICE8A ;
typedef scalar_t__ LPARAM ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (TYPE_10__*) ;
 TYPE_6__* FUNC_8 (int ) ;
 int FUNC_9 (int ,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_10( LPDIRECTINPUTDEVICE8A VAR_11, WPARAM VAR_12, LPARAM VAR_13 )
{
    MSLLHOOKSTRUCT *VAR_14 = (MSLLHOOKSTRUCT *)VAR_13;
    SysMouseImpl* VAR_15 = FUNC_8(VAR_11);
    int VAR_16 = 0, VAR_17 = -1, VAR_18 = 0;

    FUNC_6("msg %lx @ (%d %d)\n", VAR_12, VAR_14->pt.x, VAR_14->pt.y);

    FUNC_1(&VAR_15->base.crit);

    switch(VAR_12) {
        case 133:
        {
            POINT VAR_19, VAR_20;

            FUNC_3(&VAR_19);
            VAR_15->m_state.lX += VAR_19.x = VAR_14->pt.x - VAR_19.x;
            VAR_15->m_state.lY += VAR_19.y = VAR_14->pt.y - VAR_19.y;

            if (VAR_15->base.data_format.user_df->dwFlags & VAR_2)
            {
                VAR_20 = VAR_15->m_state.lX;
                VAR_20 = VAR_15->m_state.lY;
            } else
                VAR_20 = VAR_19;

            if (VAR_19.x)
            {
                VAR_17 = FUNC_0(VAR_8) | VAR_1;
                VAR_16 = VAR_20;
            }
            if (VAR_19.y)
            {

                if (VAR_17 != -1)
                    FUNC_9(VAR_11, VAR_17,
                                VAR_16, FUNC_2(), VAR_15->base.dinput->evsequence);
                VAR_17 = FUNC_0(VAR_9) | VAR_1;
                VAR_16 = VAR_20;
            }

            if (VAR_19.x || VAR_19.y)
            {
                if ((VAR_15->warp_override == VAR_6) ||
                    (VAR_15->warp_override != VAR_5 && (VAR_15->base.dwCoopLevel & VAR_3)))
                    VAR_15->need_warp = VAR_4;
            }
            break;
        }
        case 132:
            VAR_17 = FUNC_0(VAR_10) | VAR_1;
            VAR_15->m_state.lZ += VAR_16 = (short)FUNC_4(VAR_14->mouseData);


            VAR_18 = VAR_15->clipped;
            break;
        case 137:
            VAR_17 = FUNC_0(VAR_7 + 0) | VAR_0;
            VAR_15->m_state.rgbButtons[0] = VAR_16 = 0x80;
     break;
 case 136:
            VAR_17 = FUNC_0(VAR_7 + 0) | VAR_0;
            VAR_15->m_state.rgbButtons[0] = VAR_16 = 0x00;
     break;
 case 131:
            VAR_17 = FUNC_0(VAR_7 + 1) | VAR_0;
            VAR_15->m_state.rgbButtons[1] = VAR_16 = 0x80;
     break;
 case 130:
            VAR_17 = FUNC_0(VAR_7 + 1) | VAR_0;
            VAR_15->m_state.rgbButtons[1] = VAR_16 = 0x00;
     break;
 case 135:
            VAR_17 = FUNC_0(VAR_7 + 2) | VAR_0;
            VAR_15->m_state.rgbButtons[2] = VAR_16 = 0x80;
     break;
 case 134:
            VAR_17 = FUNC_0(VAR_7 + 2) | VAR_0;
            VAR_15->m_state.rgbButtons[2] = VAR_16 = 0x00;
     break;
        case 129:
            VAR_17 = FUNC_0(VAR_7 + 2 + FUNC_4(VAR_14->mouseData)) | VAR_0;
            VAR_15->m_state.rgbButtons[2 + FUNC_4(VAR_14->mouseData)] = VAR_16 = 0x80;
            break;
        case 128:
            VAR_17 = FUNC_0(VAR_7 + 2 + FUNC_4(VAR_14->mouseData)) | VAR_0;
            VAR_15->m_state.rgbButtons[2 + FUNC_4(VAR_14->mouseData)] = VAR_16 = 0x00;
            break;
    }


    if (VAR_17 != -1)
    {
        FUNC_7(&VAR_15->m_state);
        FUNC_9(VAR_11, VAR_17,
                    VAR_16, FUNC_2(), VAR_15->base.dinput->evsequence++);
    }

    FUNC_5(&VAR_15->base.crit);
    return VAR_18;
}
