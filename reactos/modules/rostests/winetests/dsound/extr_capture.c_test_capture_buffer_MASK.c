
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wfx ;
typedef int state ;
typedef int dscbcaps ;
struct TYPE_9__ {int buffer_size; int size; int * event; int * notify; TYPE_6__* posnotify; TYPE_2__* wfx; int dscbo; } ;
typedef TYPE_1__ capture_state_t ;
struct TYPE_10__ {int nBlockAlign; int nAvgBytesPerSec; int nChannels; int wBitsPerSample; int nSamplesPerSec; int wFormatTag; } ;
typedef TYPE_2__ WAVEFORMATEX ;
struct TYPE_12__ {int dwOffset; int hEventNotify; } ;
struct TYPE_11__ {int dwSize; int dwBufferBytes; int dwFlags; } ;
typedef int LPDIRECTSOUNDCAPTUREBUFFER ;
typedef int LPDIRECTSOUNDCAPTURE ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ DSCBCAPS ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,TYPE_2__*,int,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,int *,void**) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int,TYPE_6__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int,int *,int ,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int,char*,int,...) ;
 int FUNC_14 (char*,scalar_t__,...) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_15(LPDIRECTSOUNDCAPTURE VAR_12,
    LPDIRECTSOUNDCAPTUREBUFFER VAR_13, int VAR_14)
{
    HRESULT VAR_15;
    DSCBCAPS VAR_16;
    WAVEFORMATEX VAR_17;
    DWORD VAR_18,VAR_19;
    capture_state_t VAR_20;
    int VAR_21, VAR_22;


    VAR_15=FUNC_1(VAR_13,0);
    FUNC_13(VAR_15==VAR_3,"IDirectSoundCaptureBuffer_GetCaps() should "
       "have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_15);


    VAR_16.dwSize=0;
    VAR_15=FUNC_1(VAR_13,&VAR_16);
    FUNC_13(VAR_15==VAR_3,"IDirectSoundCaptureBuffer_GetCaps() should "
       "have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_15);

    VAR_16.dwSize=sizeof(VAR_16);
    VAR_15=FUNC_1(VAR_13,&VAR_16);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_GetCaps() failed: %08x\n", VAR_15);
    if (VAR_15==VAR_4 && VAR_11 > 1) {
 FUNC_14("    Caps: size = %d flags=0x%08x buffer size=%d\n",
     VAR_16.dwSize,VAR_16.dwFlags,VAR_16.dwBufferBytes);
    }




    VAR_15=FUNC_2(VAR_13,((void*)0),0,((void*)0));
    FUNC_13(VAR_15==VAR_3,"IDirectSoundCaptureBuffer_GetFormat() should "
       "have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_15);

    VAR_18=0;
    VAR_15=FUNC_2(VAR_13,((void*)0),0,&VAR_18);
    FUNC_13(VAR_15==VAR_4 && VAR_18!=0,"IDirectSoundCaptureBuffer_GetFormat() should "
       "have returned the needed size: rc=%08x, size=%d\n", VAR_15,VAR_18);

    VAR_15=FUNC_2(VAR_13,&VAR_17,sizeof(VAR_17),((void*)0));
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_GetFormat() failed: %08x\n", VAR_15);
    if (VAR_15==VAR_4 && VAR_11 > 1) {
 FUNC_14("    Format: tag=0x%04x %dx%dx%d avg.B/s=%d align=%d\n",
       VAR_17.wFormatTag,VAR_17.nSamplesPerSec,VAR_17.wBitsPerSample,
       VAR_17.nChannels,VAR_17.nAvgBytesPerSec,VAR_17.nBlockAlign);
    }


    VAR_15=FUNC_3(VAR_13,0);
    FUNC_13(VAR_15==VAR_3,"IDirectSoundCaptureBuffer_GetStatus() should "
       "have returned DSERR_INVALIDPARAM, returned: %08x\n", VAR_15);

    VAR_15=FUNC_3(VAR_13,&VAR_19);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_GetStatus() failed: %08x\n", VAR_15);
    if (VAR_15==VAR_4 && VAR_11 > 1) {
 FUNC_14("    Status=0x%04x\n",VAR_19);
    }

    FUNC_10(&VAR_20, sizeof(VAR_20));
    VAR_20.dscbo=VAR_13;
    VAR_20.wfx=&VAR_17;
    VAR_20.buffer_size = VAR_16.dwBufferBytes;
    for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++)
 VAR_20.event[VAR_21] = FUNC_0( ((void*)0), VAR_5, VAR_5, ((void*)0) );
    VAR_20.size = VAR_16.dwBufferBytes / VAR_7;

    VAR_15=FUNC_4(VAR_13,&VAR_6,
                                                (void **)&(VAR_20.notify));
    FUNC_13((VAR_15==VAR_4)&&(VAR_20.notify!=((void*)0)),
       "IDirectSoundCaptureBuffer_QueryInterface() failed: %08x\n", VAR_15);

    for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
 VAR_20.posnotify[VAR_21].dwOffset = (VAR_21 * VAR_20.size) + VAR_20.size - 1;
 VAR_20.posnotify[VAR_21].hEventNotify = VAR_20.event[VAR_21];
    }

    VAR_15=FUNC_8(VAR_20.notify,VAR_7,
                                                   VAR_20.posnotify);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundNotify_SetNotificationPositions() failed: %08x\n", VAR_15);

    VAR_22=FUNC_7(VAR_20.notify);
    FUNC_13(VAR_22==0,"IDirectSoundNotify_Release(): has %d references, should have "
       "0\n",VAR_22);

    VAR_15=FUNC_5(VAR_13,VAR_0);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_Start() failed: %08x\n", VAR_15);

    VAR_15=FUNC_5(VAR_13,0);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_Start() failed: %08x\n", VAR_15);

    VAR_15=FUNC_3(VAR_13,&VAR_19);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_GetStatus() failed: %08x\n", VAR_15);
    FUNC_13(VAR_19==(VAR_1|VAR_2) || FUNC_11(VAR_19==VAR_1),
       "GetStatus: bad status: %x\n",VAR_19);

    if (VAR_14) {

 for (VAR_21 = 0; VAR_21 < (VAR_7 * 2); VAR_21++) {
     VAR_15=FUNC_9(VAR_7,VAR_20.event,VAR_5,3000);
     FUNC_13(VAR_15==(VAR_9+(VAR_21%VAR_7)),
               "WaitForMultipleObjects failed: 0x%x\n",VAR_15);
     if (VAR_15!=(VAR_9+(VAR_21%VAR_7))) {
  FUNC_13((VAR_15==VAR_10)||(VAR_15==VAR_8),
                   "Wrong notification: should be %d, got %d\n",
      VAR_21%VAR_7,VAR_15-VAR_9);
     }
     if (!FUNC_12(&VAR_20))
  break;
 }

    }
    VAR_15=FUNC_6(VAR_13);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_Stop() failed: %08x\n", VAR_15);

    VAR_15=FUNC_6(VAR_13);
    FUNC_13(VAR_15==VAR_4,"IDirectSoundCaptureBuffer_Stop() failed: %08x\n", VAR_15);
}
