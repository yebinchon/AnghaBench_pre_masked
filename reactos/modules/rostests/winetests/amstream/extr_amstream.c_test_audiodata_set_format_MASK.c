
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int wFormatTag; int nChannels; int nSamplesPerSec; int nAvgBytesPerSec; int nBlockAlign; int wBitsPerSample; int cbSize; } ;
struct TYPE_7__ {int wValidBitsPerSample; } ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_8__ {TYPE_4__ Format; int SubFormat; int dwChannelMask; TYPE_2__ Samples; TYPE_1__ member_0; } ;
typedef TYPE_3__ WAVEFORMATPCMEX ;
typedef int IUnknown ;
typedef int IAudioData ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_6 () ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    IUnknown *VAR_8 = FUNC_6();
    IAudioData *VAR_9 = ((void*)0);
    WAVEFORMATPCMEX VAR_10 = {{0}};

    HRESULT VAR_11;

    VAR_11 = FUNC_4(VAR_8, &VAR_2, (void **)&VAR_9);
    if (FUNC_0(VAR_11))
    {

        FUNC_8("No IAudioData\n");
        goto out_unknown;
    }

    VAR_11 = FUNC_3(VAR_9, ((void*)0));
    FUNC_7(VAR_1 == VAR_11, "got 0x%08x\n", VAR_11);

    VAR_10.Format.wFormatTag = VAR_6;
    VAR_10.Format.nChannels = 2;
    VAR_10.Format.nSamplesPerSec = 44100;
    VAR_10.Format.nAvgBytesPerSec = 176400;
    VAR_10.Format.nBlockAlign = 4;
    VAR_10.Format.wBitsPerSample = 16;
    VAR_10.Format.cbSize = 22;
    VAR_10.Samples.wValidBitsPerSample = 16;
    VAR_10.dwChannelMask = VAR_3;
    VAR_10.SubFormat = VAR_4;
    VAR_11 = FUNC_3(VAR_9, &VAR_10.Format);
    FUNC_7(VAR_0 == VAR_11, "got 0x%08x\n", VAR_11);

    VAR_10.Format.wFormatTag = VAR_7;
    VAR_10.Format.nChannels = 2;
    VAR_10.Format.nSamplesPerSec = 44100;
    VAR_10.Format.nAvgBytesPerSec = 176400;
    VAR_10.Format.nBlockAlign = 4;
    VAR_10.Format.wBitsPerSample = 16;
    VAR_10.Format.cbSize = 0;
    VAR_11 = FUNC_3(VAR_9, &VAR_10.Format);
    FUNC_7(VAR_5 == VAR_11, "got 0x%08x\n", VAR_11);

    VAR_10.Format.wFormatTag = 0xdead;
    VAR_10.Format.nChannels = 0xdead;
    VAR_10.Format.nSamplesPerSec = 0xdeadbeef;
    VAR_10.Format.nAvgBytesPerSec = 0xdeadbeef;
    VAR_10.Format.nBlockAlign = 0xdead;
    VAR_10.Format.wBitsPerSample = 0xdead;
    VAR_10.Format.cbSize = 0xdead;
    VAR_11 = FUNC_1(VAR_9, &VAR_10.Format);
    FUNC_7(VAR_5 == VAR_11, "got 0x%08x\n", VAR_11);
    FUNC_7(VAR_7 == VAR_10.Format.wFormatTag, "got %u\n", VAR_10.Format.wFormatTag);
    FUNC_7(2 == VAR_10.Format.nChannels, "got %u\n", VAR_10.Format.nChannels);
    FUNC_7(44100 == VAR_10.Format.nSamplesPerSec, "got %u\n", VAR_10.Format.nSamplesPerSec);
    FUNC_7(176400 == VAR_10.Format.nAvgBytesPerSec, "got %u\n", VAR_10.Format.nAvgBytesPerSec);
    FUNC_7(4 == VAR_10.Format.nBlockAlign, "got %u\n", VAR_10.Format.nBlockAlign);
    FUNC_7(16 == VAR_10.Format.wBitsPerSample, "got %u\n", VAR_10.Format.wBitsPerSample);
    FUNC_7(0 == VAR_10.Format.cbSize, "got %u\n", VAR_10.Format.cbSize);

    FUNC_2(VAR_9);

out_unknown:
    FUNC_5(VAR_8);
}
