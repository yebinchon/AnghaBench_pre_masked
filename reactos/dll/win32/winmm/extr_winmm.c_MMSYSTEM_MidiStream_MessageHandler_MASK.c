
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* lpMidiHdr; int hDevice; int wFlags; int dwStartTicks; int hEvent; } ;
typedef TYPE_2__ WINE_MIDIStream ;
struct TYPE_15__ {int dwStreamID; } ;
struct TYPE_14__ {int dwFlags; int dwBufferLength; int dwOffset; struct TYPE_14__* lpNext; int dwBytesRecorded; int lpData; } ;
struct TYPE_13__ {int message; int lParam; int wParam; } ;
struct TYPE_10__ {int dwInstance; int dwCallback; } ;
struct TYPE_12__ {TYPE_1__ mod; } ;
typedef TYPE_3__* LPWINE_MIDI ;
typedef TYPE_4__* LPMSG ;
typedef TYPE_5__* LPMIDIHDR ;
typedef TYPE_6__* LPMIDIEVENT ;
typedef int* LPBYTE ;
typedef int HDRVR ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static BOOL FUNC_8(WINE_MIDIStream* VAR_7, LPWINE_MIDI VAR_8, LPMSG VAR_9)
{
    LPMIDIHDR VAR_10;
    LPMIDIHDR* VAR_11;
    LPBYTE VAR_12;

    switch (VAR_9->message) {
    case 128:
 FUNC_3(VAR_7->hEvent);
 return VAR_0;
    case 129:
 FUNC_4("STOP\n");

 FUNC_5(VAR_7->hDevice);

 for (VAR_10 = VAR_7->lpMidiHdr; VAR_10; VAR_10 = VAR_10->lpNext) {
     VAR_10->dwFlags |= VAR_1;
     VAR_10->dwFlags &= ~VAR_2;

     FUNC_0(VAR_8->mod.dwCallback, VAR_7->wFlags,
      (HDRVR)VAR_7->hDevice, VAR_4,
      VAR_8->mod.dwInstance, (DWORD_PTR)VAR_10, 0);
 }
 VAR_7->lpMidiHdr = 0;
 FUNC_3(VAR_7->hEvent);
 break;
    case 130:

 if (!VAR_7->dwStartTicks)
     VAR_7->dwStartTicks = FUNC_2();
 VAR_10 = (LPMIDIHDR)VAR_9->lParam;
 VAR_12 = (LPBYTE)VAR_10->lpData;
 FUNC_4("Adding %s lpMidiHdr=%p [lpData=0x%p dwBufferLength=%u/%u dwFlags=0x%08x size=%lu]\n",
       (VAR_10->dwFlags & VAR_3) ? "stream" : "regular", VAR_10,
       VAR_10, VAR_10->dwBufferLength, VAR_10->dwBytesRecorded,
       VAR_10->dwFlags, VAR_9->wParam);
 if (((LPMIDIEVENT)VAR_12)->dwStreamID != 0 &&
     ((LPMIDIEVENT)VAR_12)->dwStreamID != 0xFFFFFFFF &&

     ((LPMIDIEVENT)VAR_12)->dwStreamID != (DWORD_PTR)VAR_7) {
     FUNC_1("Dropping bad %s lpMidiHdr (streamID=%08x)\n",
    (VAR_10->dwFlags & VAR_3) ? "stream" : "regular",
    ((LPMIDIEVENT)VAR_12)->dwStreamID);
     VAR_10->dwFlags |= VAR_1;
     VAR_10->dwFlags &= ~VAR_2;

     FUNC_0(VAR_8->mod.dwCallback, VAR_7->wFlags,
      (HDRVR)VAR_7->hDevice, VAR_4,
      VAR_8->mod.dwInstance, (DWORD_PTR)VAR_10, 0);
     break;
 }

 for (VAR_11 = &VAR_7->lpMidiHdr; *VAR_11; VAR_11 = &(*VAR_11)->lpNext);
 *VAR_11 = VAR_10;
 VAR_10 = (LPMIDIHDR)VAR_9->lParam;
 VAR_10->lpNext = 0;
 VAR_10->dwFlags |= VAR_2;
 VAR_10->dwFlags &= ~VAR_1;
 VAR_10->dwOffset = 0;

 break;
    default:
 FUNC_1("Unknown message %d\n", VAR_9->message);
 break;
    }
    return VAR_5;
}
