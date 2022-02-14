
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cs; } ;
typedef TYPE_1__ WINE_MCIAVI ;
typedef int UINT ;
struct TYPE_6__ {int dwItem; void* dwReturn; } ;
typedef TYPE_2__* LPMCI_GETDEVCAPS_PARMS ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*,...) ;
 int VAR_11 ;

DWORD FUNC_6(UINT VAR_12, DWORD VAR_13, LPMCI_GETDEVCAPS_PARMS VAR_14)
{
    WINE_MCIAVI* VAR_15 = FUNC_4(VAR_12);
    DWORD VAR_16 = VAR_4;

    FUNC_5("(%04x, %08X, %p)\n", VAR_12, VAR_13, VAR_14);

    if (VAR_14 == ((void*)0)) return VAR_3;
    if (VAR_15 == ((void*)0)) return VAR_1;
    if (!(VAR_13 & VAR_7)) return VAR_2;
    if (VAR_13 & VAR_9) return 0;

    FUNC_0(&VAR_15->cs);

    if (VAR_13 & VAR_7) {
 switch (VAR_14->dwItem) {
 case 131:
     FUNC_5("MCI_GETDEVCAPS_DEVICE_TYPE !\n");
     VAR_14->dwReturn = FUNC_3(VAR_5, VAR_5);
     VAR_16 = VAR_8;
     break;
 case 130:
     FUNC_5("MCI_GETDEVCAPS_HAS_AUDIO !\n");
     VAR_14->dwReturn = FUNC_3(VAR_11, VAR_10);
     VAR_16 = VAR_8;
     break;
 case 129:
     FUNC_5("MCI_GETDEVCAPS_HAS_VIDEO !\n");
     VAR_14->dwReturn = FUNC_3(VAR_11, VAR_10);
     VAR_16 = VAR_8;
     break;
 case 128:
     FUNC_5("MCI_GETDEVCAPS_USES_FILES !\n");
     VAR_14->dwReturn = FUNC_3(VAR_11, VAR_10);
     VAR_16 = VAR_8;
     break;
 case 132:
     FUNC_5("MCI_GETDEVCAPS_COMPOUND_DEVICE !\n");
     VAR_14->dwReturn = FUNC_3(VAR_11, VAR_10);
     VAR_16 = VAR_8;
     break;
 case 136:
     FUNC_5("MCI_GETDEVCAPS_CAN_EJECT !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 135:
     FUNC_5("MCI_GETDEVCAPS_CAN_PLAY !\n");
     VAR_14->dwReturn = FUNC_3(VAR_11, VAR_10);
     VAR_16 = VAR_8;
     break;
 case 134:
     FUNC_5("MCI_GETDEVCAPS_CAN_RECORD !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 133:
     FUNC_5("MCI_GETDEVCAPS_CAN_SAVE !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 142:
     FUNC_5("MCI_DGV_GETDEVCAPS_CAN_REVERSE !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 141:
     FUNC_5("MCI_DGV_GETDEVCAPS_CAN_STRETCH !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 143:
     FUNC_5("MCI_DGV_GETDEVCAPS_CAN_LOCK !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 144:
     FUNC_5("MCI_DGV_GETDEVCAPS_CAN_FREEZE !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 140:
     FUNC_5("MCI_DGV_GETDEVCAPS_CAN_STRETCH_INPUT !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 138:
     FUNC_5("MCI_DGV_GETDEVCAPS_HAS_STILL !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;
 case 139:
     FUNC_5("MCI_DGV_GETDEVCAPS_CAN_TEST !\n");
     VAR_14->dwReturn = FUNC_3(VAR_11, VAR_10);
     VAR_16 = VAR_8;
     break;
 case 137:
     FUNC_5("MCI_DGV_GETDEVCAPS_PALETTES !\n");
     VAR_14->dwReturn = FUNC_3(VAR_0, VAR_6);
     VAR_16 = VAR_8;
     break;

 default:
            FUNC_1("Unknown capability (%08x) !\n", VAR_14->dwItem);
            break;
 }
    }

    FUNC_2(&VAR_15->cs);
    return VAR_16;
}
