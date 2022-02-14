
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINE_MCICDAUDIO ;
typedef int UINT ;
struct TYPE_3__ {int dwItem; int dwReturn; int dwCallback; } ;
typedef TYPE_1__* LPMCI_GETDEVCAPS_PARMS ;
typedef int DWORD ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;
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
 int VAR_11 ;
 int FUNC_2 (char*,...) ;
 int VAR_12 ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static DWORD FUNC_5(UINT VAR_13, DWORD VAR_14,
       LPMCI_GETDEVCAPS_PARMS VAR_15)
{
    WINE_MCICDAUDIO* VAR_16 = (WINE_MCICDAUDIO*)FUNC_4(VAR_13);
    DWORD VAR_17 = 0;

    FUNC_2("(%04X, %08X, %p);\n", VAR_13, VAR_14, VAR_15);

    if (VAR_15 == ((void*)0)) return VAR_3;
    if (VAR_16 == ((void*)0)) return VAR_1;

    if (VAR_14 & VAR_7) {
 FUNC_2("MCI_GETDEVCAPS_ITEM dwItem=%08X;\n", VAR_15->dwItem);

 switch (VAR_15->dwItem) {
 case 134:
     VAR_15->dwReturn = FUNC_0(VAR_0, VAR_6);
     VAR_17 = VAR_10;
     break;
 case 130:
     VAR_15->dwReturn = FUNC_0(VAR_12, VAR_11);
     VAR_17 = VAR_10;
     break;
 case 129:
     VAR_15->dwReturn = FUNC_0(VAR_0, VAR_6);
     VAR_17 = VAR_10;
     break;
 case 131:
     VAR_15->dwReturn = FUNC_0(VAR_5, VAR_5);
     VAR_17 = VAR_10;
     break;
 case 128:
     VAR_15->dwReturn = FUNC_0(VAR_0, VAR_6);
     VAR_17 = VAR_10;
     break;
 case 132:
     VAR_15->dwReturn = FUNC_0(VAR_0, VAR_6);
     VAR_17 = VAR_10;
     break;
 case 136:
     VAR_15->dwReturn = FUNC_0(VAR_12, VAR_11);
     VAR_17 = VAR_10;
     break;
 case 135:
     VAR_15->dwReturn = FUNC_0(VAR_12, VAR_11);
     VAR_17 = VAR_10;
     break;
 case 133:
     VAR_15->dwReturn = FUNC_0(VAR_0, VAR_6);
     VAR_17 = VAR_10;
     break;
 default:
            FUNC_3("Unsupported %x devCaps item\n", VAR_15->dwItem);
     return VAR_4;
 }
    } else {
 FUNC_2("No GetDevCaps-Item !\n");
 return VAR_2;
    }
    FUNC_2("lpParms->dwReturn=%08X;\n", VAR_15->dwReturn);
    if (VAR_14 & VAR_8) {
 FUNC_1(VAR_15->dwCallback, VAR_16, VAR_9);
    }
    return VAR_17;
}
