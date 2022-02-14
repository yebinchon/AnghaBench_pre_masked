
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwMciTimeFormat; int dwSet; int cs; } ;
typedef TYPE_1__ WINE_MCIAVI ;
typedef int UINT ;
struct TYPE_6__ {int dwTimeFormat; int dwAudio; int dwFileFormat; char* dwSpeed; } ;
typedef TYPE_2__* LPMCI_DGV_SET_PARMS ;
typedef char* LPCSTR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;

DWORD FUNC_6(UINT VAR_16, DWORD VAR_17, LPMCI_DGV_SET_PARMS VAR_18)
{
    WINE_MCIAVI* VAR_19 = FUNC_3(VAR_16);

    if (VAR_18 == ((void*)0)) return VAR_2;
    if (VAR_19 == ((void*)0)) return VAR_1;
    if (VAR_17 & VAR_15) return 0;

    FUNC_0(&VAR_19->cs);

    if (VAR_17 & VAR_13) {
 switch (VAR_18->dwTimeFormat) {
 case 131:
     FUNC_4("MCI_FORMAT_MILLISECONDS !\n");
     VAR_19->dwMciTimeFormat = 131;
     break;
 case 132:
     FUNC_4("MCI_FORMAT_FRAMES !\n");
     VAR_19->dwMciTimeFormat = 132;
     break;
 default:
            FUNC_5("Bad time format %u!\n", VAR_18->dwTimeFormat);
            FUNC_2(&VAR_19->cs);
     return VAR_0;
 }
    }

    if (VAR_17 & VAR_10) {
 FUNC_4("No support for door open !\n");
        FUNC_2(&VAR_19->cs);
 return VAR_3;
    }
    if (VAR_17 & VAR_9) {
 FUNC_4("No support for door close !\n");
        FUNC_2(&VAR_19->cs);
 return VAR_3;
    }

    if (VAR_17 & VAR_12) {
 const char *VAR_20="";
 const char *VAR_21="";
 const char *VAR_22="";

 if (VAR_17 & VAR_14) {
     VAR_20 = " video";
     VAR_19->dwSet |= 4;
 }
 if (VAR_17 & VAR_8) {
     switch (VAR_18->dwAudio) {
     case 130:
  VAR_21 = " audio all";
  VAR_19->dwSet |= 3;
  break;
     case 129:
  VAR_21 = " audio left";
  VAR_19->dwSet |= 1;
  break;
     case 128:
  VAR_21 = " audio right";
  VAR_19->dwSet |= 2;
  break;
     default:
  VAR_21 = " audio unknown";
  FUNC_5("Unknown audio channel %u\n", VAR_18->dwAudio);
  break;
     }
 }
 if (VAR_17 & VAR_5) {
     VAR_22 = " seek_exactly";
 }
 FUNC_1("MCI_SET_ON:%s%s%s\n", VAR_20, VAR_21, VAR_22);
    }

    if (VAR_17 & VAR_11) {
 const char *VAR_23="";
 const char *VAR_24="";
 const char *VAR_25="";

 if (VAR_17 & VAR_14) {
     VAR_23 = " video";
     VAR_19->dwSet &= ~4;
 }
 if (VAR_17 & VAR_8) {
     switch (VAR_18->dwAudio) {
     case 130:
  VAR_24 = " audio all";
  VAR_19->dwSet &= ~3;
  break;
     case 129:
  VAR_24 = " audio left";
  VAR_19->dwSet &= ~2;
  break;
     case 128:
  VAR_24 = " audio right";
  VAR_19->dwSet &= ~2;
  break;
     default:
  VAR_24 = " audio unknown";
  FUNC_5("Unknown audio channel %u\n", VAR_18->dwAudio);
  break;
     }
 }
 if (VAR_17 & VAR_5) {
     VAR_25 = " seek_exactly";
 }
 FUNC_1("MCI_SET_OFF:%s%s%s\n", VAR_23, VAR_24, VAR_25);
    }
    if (VAR_17 & VAR_4) {
 LPCSTR VAR_26 = "save";
 if (VAR_17 & VAR_7)
     VAR_26 = "capture";

 switch (VAR_18->dwFileFormat) {
 case 140: FUNC_1("Setting file format (%s) to 'AVI'\n", VAR_26); break;
 case 139: FUNC_1("Setting file format (%s) to 'AVSS'\n", VAR_26); break;
 case 138: FUNC_1("Setting file format (%s) to 'DIB'\n", VAR_26); break;
 case 137: FUNC_1("Setting file format (%s) to 'JFIF'\n", VAR_26); break;
 case 136: FUNC_1("Setting file format (%s) to 'JPEG'\n", VAR_26); break;
 case 135: FUNC_1("Setting file format (%s) to 'MPEG'\n", VAR_26); break;
 case 134: FUNC_1("Setting file format (%s) to 'RLE DIB'\n", VAR_26); break;
 case 133: FUNC_1("Setting file format (%s) to 'RJPEG'\n", VAR_26); break;
 default: FUNC_1("Setting unknown file format (%s): %d\n", VAR_26, VAR_18->dwFileFormat);
 }
    }

    if (VAR_17 & VAR_6) {
 FUNC_1("Setting speed to %d\n", VAR_18->dwSpeed);
    }

    FUNC_2(&VAR_19->cs);
    return 0;
}
