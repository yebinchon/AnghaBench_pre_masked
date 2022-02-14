
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int fmt ;
typedef int data ;
typedef int WORD ;
struct TYPE_21__ {int dwTimeFormat; int handle; } ;
typedef TYPE_3__ WINE_MCICDAUDIO ;
typedef int UINT ;
struct TYPE_25__ {void* Format; } ;
struct TYPE_24__ {size_t FirstTrack; size_t LastTrack; TYPE_1__* TrackData; } ;
struct TYPE_23__ {int dwItem; int dwReturn; size_t dwTrack; int dwCallback; } ;
struct TYPE_20__ {int TrackNumber; int AbsoluteAddress; } ;
struct TYPE_22__ {TYPE_2__ CurrentPosition; } ;
struct TYPE_19__ {int Control; } ;
typedef TYPE_4__ SUB_Q_CHANNEL_DATA ;
typedef TYPE_5__* LPMCI_STATUS_PARMS ;
typedef int DWORD ;
typedef TYPE_6__ CDROM_TOC ;
typedef TYPE_7__ CDROM_SUB_Q_DATA_FORMAT ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_6__,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int,int) ;
 void* FUNC_6 (TYPE_3__*,int,int,int*) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,TYPE_6__*,int*) ;
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
 int VAR_16 ;
 int VAR_17 ;

 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (char*,...) ;
 int VAR_20 ;
 int FUNC_13 (int ,int ,TYPE_7__*,int,TYPE_4__*,int,int*,int *) ;

__attribute__((used)) static DWORD FUNC_14(UINT VAR_21, DWORD VAR_22, LPMCI_STATUS_PARMS VAR_23)
{
    WINE_MCICDAUDIO* VAR_24 = FUNC_8(VAR_21);
    DWORD VAR_25 = 0;
    CDROM_SUB_Q_DATA_FORMAT VAR_26;
    SUB_Q_CHANNEL_DATA VAR_27;
    CDROM_TOC VAR_28;
    DWORD VAR_29;

    FUNC_12("(%04X, %08X, %p);\n", VAR_21, VAR_22, VAR_23);

    if (VAR_23 == ((void*)0)) return VAR_6;
    if (VAR_24 == ((void*)0)) return VAR_4;

    if (VAR_22 & VAR_18) {
 FUNC_12("dwItem = %x\n", VAR_23->dwItem);
 switch (VAR_23->dwItem) {
 case 137:
            VAR_26.Format = VAR_1;
            if (!FUNC_13(VAR_24->handle, VAR_2, &VAR_26, sizeof(VAR_26),
                                 &VAR_27, sizeof(VAR_27), &VAR_29, ((void*)0)))
            {
  return FUNC_7(VAR_24);

     }
     VAR_23->dwReturn = VAR_27.CurrentPosition.TrackNumber;
            FUNC_12("CURRENT_TRACK=%lu\n", VAR_23->dwReturn);
     break;
 case 136:
     if (!FUNC_11(VAR_24, &VAR_28, &VAR_29))
                return FUNC_7(VAR_24);

     if (VAR_22 & 128) {
  FUNC_12("MCI_TRACK #%u LENGTH=??? !\n", VAR_23->dwTrack);
  if (VAR_23->dwTrack < VAR_28.FirstTrack || VAR_23->dwTrack > VAR_28.LastTrack)
      return VAR_7;
  VAR_23->dwReturn = FUNC_2(VAR_28, VAR_23->dwTrack + 1) -
                    FUNC_2(VAR_28, VAR_23->dwTrack);


  if (VAR_23->dwTrack == VAR_28.LastTrack)
      VAR_23->dwReturn--;
     } else {



  VAR_23->dwReturn = FUNC_2(VAR_28, VAR_28.LastTrack + 1) -
                    FUNC_2(VAR_28, VAR_28.FirstTrack) - 1;
     }
     VAR_23->dwReturn = FUNC_6(VAR_24,
       (VAR_24->dwTimeFormat == VAR_14)
          ? VAR_12 : VAR_24->dwTimeFormat,
       VAR_23->dwReturn,
       &VAR_25);
            FUNC_12("LENGTH=%lu\n", VAR_23->dwReturn);
     break;
 case 134:
            VAR_23->dwReturn = FUNC_9(VAR_24);
            FUNC_12("MCI_STATUS_MODE=%08lX\n", VAR_23->dwReturn);
     VAR_23->dwReturn = FUNC_5(VAR_23->dwReturn, VAR_23->dwReturn);
     VAR_25 = VAR_17;
     break;
 case 135:
     VAR_23->dwReturn = (FUNC_9(VAR_24) == 138) ?
  FUNC_5(VAR_0, VAR_11) : FUNC_5(VAR_20, VAR_19);
     FUNC_12("MCI_STATUS_MEDIA_PRESENT =%c!\n", FUNC_4(VAR_23->dwReturn) ? 'Y' : 'N');
     VAR_25 = VAR_17;
     break;
 case 133:
     if (!FUNC_11(VAR_24, &VAR_28, &VAR_29))
                return FUNC_7(VAR_24);

     VAR_23->dwReturn = VAR_28.LastTrack - VAR_28.FirstTrack + 1;
            FUNC_12("MCI_STATUS_NUMBER_OF_TRACKS = %lu\n", VAR_23->dwReturn);
     if (VAR_23->dwReturn == (WORD)-1)
  return FUNC_7(VAR_24);
     break;
 case 132:
            switch (VAR_22 & (130 | 128)) {
            case 130:
                if (!FUNC_11(VAR_24, &VAR_28, &VAR_29))
                    return FUNC_7(VAR_24);

  VAR_23->dwReturn = FUNC_2(VAR_28, VAR_28.FirstTrack);
  FUNC_12("get MCI_STATUS_START !\n");
                break;
            case 128:
                if (!FUNC_11(VAR_24, &VAR_28, &VAR_29))
                    return FUNC_7(VAR_24);

  if (VAR_23->dwTrack < VAR_28.FirstTrack || VAR_23->dwTrack > VAR_28.LastTrack)
      return VAR_7;
  VAR_23->dwReturn = FUNC_2(VAR_28, VAR_23->dwTrack);
  FUNC_12("get MCI_TRACK #%u !\n", VAR_23->dwTrack);
                break;
            case 0:
                VAR_26.Format = VAR_1;
                if (!FUNC_13(VAR_24->handle, VAR_2, &VAR_26, sizeof(VAR_26),
                                     &VAR_27, sizeof(VAR_27), &VAR_29, ((void*)0))) {
                    return FUNC_7(VAR_24);
                }
                VAR_23->dwReturn = FUNC_1(VAR_27.CurrentPosition.AbsoluteAddress);
                break;
            default:
                return VAR_3;
            }
     VAR_23->dwReturn = FUNC_6(VAR_24, VAR_24->dwTimeFormat, VAR_23->dwReturn, &VAR_25);
            FUNC_12("MCI_STATUS_POSITION=%08lX\n", VAR_23->dwReturn);
     break;
 case 131:
     FUNC_12("MCI_STATUS_READY !\n");
            switch (FUNC_9(VAR_24))
            {
            case 139:
            case 138:
                VAR_23->dwReturn = FUNC_5(VAR_0, VAR_11);
                break;
            default:
                VAR_23->dwReturn = FUNC_5(VAR_20, VAR_19);
                break;
            }
     FUNC_12("MCI_STATUS_READY=%u!\n", FUNC_4(VAR_23->dwReturn));
     VAR_25 = VAR_17;
     break;
 case 129:
     VAR_23->dwReturn = FUNC_5(VAR_24->dwTimeFormat, VAR_13 + VAR_24->dwTimeFormat);
     FUNC_12("MCI_STATUS_TIME_FORMAT=%08x!\n", FUNC_4(VAR_23->dwReturn));
     VAR_25 = VAR_17;
     break;
 case 4001:
 case 140:
     if (!(VAR_22 & 128))
  VAR_25 = VAR_5;
     else {
                if (!FUNC_11(VAR_24, &VAR_28, &VAR_29))
                    return FUNC_7(VAR_24);

  if (VAR_23->dwTrack < VAR_28.FirstTrack || VAR_23->dwTrack > VAR_28.LastTrack)
      VAR_25 = VAR_7;
  else
      VAR_23->dwReturn = (VAR_28.TrackData[VAR_23->dwTrack - VAR_28.FirstTrack].Control & 0x04) ?
                                         VAR_10 : VAR_9;

     }
            FUNC_12("MCI_CDA_STATUS_TYPE_TRACK[%d]=%ld\n", VAR_23->dwTrack, VAR_23->dwReturn);
     break;
 default:
            FUNC_0("unknown command %08X !\n", VAR_23->dwItem);
     return VAR_8;
 }
    } else return VAR_5;
    if ((VAR_22 & VAR_15) && FUNC_3(VAR_25)==0)
 FUNC_10(VAR_23->dwCallback, VAR_24, VAR_16);
    return VAR_25;
}
