
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwTimeFormat; } ;
typedef TYPE_1__ WINE_MCICDAUDIO ;
typedef int UINT ;
struct TYPE_7__ {int dwTimeFormat; int dwCallback; int dwAudio; } ;
typedef TYPE_2__* LPMCI_SET_PARMS ;
typedef int DWORD ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,...) ;
 int VAR_10 ;

__attribute__((used)) static DWORD FUNC_4(UINT VAR_11, DWORD VAR_12, LPMCI_SET_PARMS VAR_13)
{
    WINE_MCICDAUDIO* VAR_14 = FUNC_0(VAR_11);

    FUNC_3("(%04X, %08X, %p);\n", VAR_11, VAR_12, VAR_13);

    if (VAR_14 == ((void*)0)) return VAR_2;

    if (VAR_12 & VAR_8) {
 FUNC_2(VAR_11, VAR_10);
    }
    if (VAR_12 & VAR_7) {
 FUNC_2(VAR_11, VAR_0);
    }


    if (VAR_13 == ((void*)0)) return VAR_3;



    if (VAR_12 & VAR_9) {
 switch (VAR_13->dwTimeFormat) {
 case 130:
     FUNC_3("MCI_FORMAT_MILLISECONDS !\n");
     break;
 case 129:
     FUNC_3("MCI_FORMAT_MSF !\n");
     break;
 case 128:
     FUNC_3("MCI_FORMAT_TMSF !\n");
     break;
 default:
     return VAR_1;
 }
 VAR_14->dwTimeFormat = VAR_13->dwTimeFormat;
    }
    if (VAR_12 & VAR_6)
 FUNC_3("SET_AUDIO %X %x\n", VAR_12, VAR_13->dwAudio);

    if (VAR_12 & VAR_4)
 FUNC_1(VAR_13->dwCallback, VAR_14, VAR_5);
    return 0;
}
