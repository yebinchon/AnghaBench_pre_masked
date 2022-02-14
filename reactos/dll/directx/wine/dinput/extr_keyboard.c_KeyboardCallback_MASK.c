
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
struct TYPE_9__ {int vkCode; int scanCode; int flags; } ;
struct TYPE_7__ {int dwCoopLevel; int crit; TYPE_1__* dinput; } ;
struct TYPE_8__ {int* DInputKeyState; TYPE_2__ base; int subtype; } ;
struct TYPE_6__ {int evsequence; } ;
typedef TYPE_3__ SysKeyboardImpl ;
typedef int LPDIRECTINPUTDEVICE8A ;
typedef scalar_t__ LPARAM ;
typedef TYPE_4__ KBDLLHOOKSTRUCT ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int,...) ;




 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_3__* FUNC_5 (int ) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int ,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_8( LPDIRECTINPUTDEVICE8A VAR_12, WPARAM VAR_13, LPARAM VAR_14 )
{
    SysKeyboardImpl *VAR_15 = FUNC_5(VAR_12);
    int VAR_16, VAR_17 = VAR_15->base.dwCoopLevel & VAR_5;
    KBDLLHOOKSTRUCT *VAR_18 = (KBDLLHOOKSTRUCT *)VAR_14;
    BYTE VAR_19;

    if (VAR_13 != VAR_8 && VAR_13 != VAR_9 &&
        VAR_13 != VAR_10 && VAR_13 != VAR_11)
        return 0;

    FUNC_4("(%p) wp %08lx, lp %08lx, vk %02x, scan %02x\n",
          VAR_12, VAR_13, VAR_14, VAR_18->vkCode, VAR_18->scanCode);

    switch (VAR_18->vkCode)
    {

        case 129 : VAR_16 = VAR_3; break;
        case 130 : VAR_16 = VAR_2; break;
        case 131 : VAR_16 = VAR_1; break;
        case 128: VAR_16 = VAR_4; break;
        default:
            VAR_16 = FUNC_6(VAR_18->scanCode & 0xff, VAR_18->vkCode, VAR_15->subtype);
            if (VAR_18->flags & VAR_6) VAR_16 |= 0x80;
    }
    VAR_19 = VAR_18->flags & VAR_7 ? 0 : 0x80;


    if (VAR_19 == VAR_15->DInputKeyState[VAR_16])
        return VAR_17;

    VAR_15->DInputKeyState[VAR_16] = VAR_19;
    FUNC_4(" setting %02X to %02X\n", VAR_16, VAR_15->DInputKeyState[VAR_16]);

    FUNC_1(&VAR_15->base.crit);
    FUNC_7(VAR_12, FUNC_0(VAR_16) | VAR_0,
                VAR_19, FUNC_2(), VAR_15->base.dinput->evsequence++);
    FUNC_3(&VAR_15->base.crit);

    return VAR_17;
}
