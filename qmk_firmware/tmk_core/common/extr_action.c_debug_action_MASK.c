
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int param; } ;
struct TYPE_5__ {TYPE_1__ kind; } ;
typedef TYPE_2__ action_t ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;

void FUNC_2(action_t VAR_0) {
    switch (VAR_0.kind.id) {
        case 135:
            FUNC_0("ACT_LMODS");
            break;
        case 131:
            FUNC_0("ACT_RMODS");
            break;
        case 134:
            FUNC_0("ACT_LMODS_TAP");
            break;
        case 130:
            FUNC_0("ACT_RMODS_TAP");
            break;
        case 128:
            FUNC_0("ACT_USAGE");
            break;
        case 132:
            FUNC_0("ACT_MOUSEKEY");
            break;
        case 139:
            FUNC_0("ACT_LAYER");
            break;
        case 138:
            FUNC_0("ACT_LAYER_MODS");
            break;
        case 137:
            FUNC_0("ACT_LAYER_TAP");
            break;
        case 136:
            FUNC_0("ACT_LAYER_TAP_EXT");
            break;
        case 133:
            FUNC_0("ACT_MACRO");
            break;
        case 141:
            FUNC_0("ACT_COMMAND");
            break;
        case 140:
            FUNC_0("ACT_FUNCTION");
            break;
        case 129:
            FUNC_0("ACT_SWAP_HANDS");
            break;
        default:
            FUNC_0("UNKNOWN");
            break;
    }
    FUNC_1("[%X:%02X]", VAR_0.kind.param >> 8, VAR_0.kind.param & 0xff);
}
