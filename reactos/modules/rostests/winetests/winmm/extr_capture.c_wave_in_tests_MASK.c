
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int capsW ;
typedef int capsA ;
typedef int WAVEINCAPSW ;
typedef int WAVEINCAPSA ;
struct TYPE_3__ {int nChannels; int wBitsPerSample; int nSamplesPerSec; int nBlockAlign; int nAvgBytesPerSec; scalar_t__ cbSize; int wFormatTag; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef int UINT ;
typedef scalar_t__ MMRESULT ;
typedef int HWAVEIN ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,scalar_t__,...) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int,int *,int) ;
 scalar_t__ FUNC_5 (int,int *,int) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int,TYPE_1__*,int ,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(void)
{
    WAVEINCAPSA VAR_8;
    WAVEINCAPSW VAR_9;
    WAVEFORMATEX VAR_10;
    HWAVEIN VAR_11;
    MMRESULT VAR_12;
    DWORD VAR_13, VAR_14;
    UINT VAR_15,VAR_16;

    VAR_15=FUNC_6();
    FUNC_3("found %d WaveIn devices\n",VAR_15);

    VAR_12 = FUNC_7((HWAVEIN)VAR_7, VAR_1,
            (DWORD_PTR)&VAR_13, (DWORD_PTR)&VAR_14);
    FUNC_2((VAR_15 == 0 && (VAR_12 == VAR_3 || VAR_12 == VAR_2)) ||
            VAR_12 == VAR_5 ||
            VAR_12 == VAR_4, "waveInMessage(DRVM_MAPPER_PREFERRED_GET) failed: %u\n", VAR_12);

    if(VAR_12 != VAR_5)
        FUNC_2((VAR_15 == 0 && (VAR_13 == -1 || FUNC_0(VAR_13 != -1))) ||
                VAR_13 < VAR_15, "Got invalid preferred device: 0x%x\n", VAR_13);

    VAR_12=FUNC_4(VAR_15+1,&VAR_8,sizeof(VAR_8));
    FUNC_2(VAR_12==VAR_2,
       "waveInGetDevCapsA(%s): MMSYSERR_BADDEVICEID expected, got %s\n",
       FUNC_1(VAR_15+1),FUNC_9(VAR_12));

    VAR_12=FUNC_4(VAR_7,&VAR_8,sizeof(VAR_8));
    FUNC_2(VAR_12==VAR_4 || VAR_12==VAR_3 || (!VAR_15 && (VAR_12==VAR_2)),
       "waveInGetDevCapsA(%s): got %s\n",FUNC_1(VAR_7),FUNC_9(VAR_12));

    VAR_12=FUNC_5(VAR_15+1,&VAR_9,sizeof(VAR_9));
    FUNC_2(VAR_12==VAR_2 || VAR_12==VAR_5,
       "waveInGetDevCapsW(%s): MMSYSERR_BADDEVICEID or MMSYSERR_NOTSUPPORTED "
       "expected, got %s\n",FUNC_1(VAR_15+1),FUNC_9(VAR_12));

    VAR_12=FUNC_5(VAR_7,&VAR_9,sizeof(VAR_9));
    FUNC_2(VAR_12==VAR_4 || VAR_12==VAR_3 ||
       VAR_12==VAR_5 || (!VAR_15 && (VAR_12==VAR_2)),
       "waveInGetDevCapsW(%s): got %s\n", FUNC_1(VAR_15+1),FUNC_9(VAR_12));

    VAR_10.wFormatTag=VAR_6;
    VAR_10.nChannels=2;
    VAR_10.wBitsPerSample=16;
    VAR_10.nSamplesPerSec=44100;
    VAR_10.nBlockAlign=VAR_10.nChannels*VAR_10.wBitsPerSample/8;
    VAR_10.nAvgBytesPerSec=VAR_10.nSamplesPerSec*VAR_10.nBlockAlign;
    VAR_10.cbSize=0;
    VAR_12=FUNC_8(&VAR_11,VAR_15+1,&VAR_10,0,0,VAR_0);
    FUNC_2(VAR_12==VAR_2,
       "waveInOpen(%s): MMSYSERR_BADDEVICEID expected, got %s\n",
       FUNC_1(VAR_15+1),FUNC_9(VAR_12));

    for (VAR_16=0;VAR_16<VAR_15;VAR_16++)
        FUNC_10(VAR_16);

    if (VAR_15>0)
        FUNC_10(VAR_7);
}
