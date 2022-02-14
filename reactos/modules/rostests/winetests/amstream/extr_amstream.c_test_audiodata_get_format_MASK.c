
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wFormatTag; int nChannels; int nSamplesPerSec; int nAvgBytesPerSec; int nBlockAlign; int wBitsPerSample; int cbSize; int member_0; } ;
typedef TYPE_1__ WAVEFORMATEX ;
typedef int IUnknown ;
typedef int IAudioData ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 () ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IUnknown *VAR_4 = FUNC_5();
    IAudioData *VAR_5 = ((void*)0);
    WAVEFORMATEX VAR_6 = {0};

    HRESULT VAR_7;

    VAR_7 = FUNC_3(VAR_4, &VAR_1, (void **)&VAR_5);
    if (FUNC_0(VAR_7))
    {

        FUNC_7("No IAudioData\n");
        goto out_unknown;
    }

    VAR_7 = FUNC_1(VAR_5, ((void*)0));
    FUNC_6(VAR_0 == VAR_7, "got 0x%08x\n", VAR_7);

    VAR_6.wFormatTag = 0xdead;
    VAR_6.nChannels = 0xdead;
    VAR_6.nSamplesPerSec = 0xdeadbeef;
    VAR_6.nAvgBytesPerSec = 0xdeadbeef;
    VAR_6.nBlockAlign = 0xdead;
    VAR_6.wBitsPerSample = 0xdead;
    VAR_6.cbSize = 0xdead;
    VAR_7 = FUNC_1(VAR_5, &VAR_6);
    FUNC_6(VAR_2 == VAR_7, "got 0x%08x\n", VAR_7);
    FUNC_6(VAR_3 == VAR_6.wFormatTag, "got %u\n", VAR_6.wFormatTag);
    FUNC_6(1 == VAR_6.nChannels, "got %u\n", VAR_6.nChannels);
    FUNC_6(11025 == VAR_6.nSamplesPerSec, "got %u\n", VAR_6.nSamplesPerSec);
    FUNC_6(22050 == VAR_6.nAvgBytesPerSec, "got %u\n", VAR_6.nAvgBytesPerSec);
    FUNC_6(2 == VAR_6.nBlockAlign, "got %u\n", VAR_6.nBlockAlign);
    FUNC_6(16 == VAR_6.wBitsPerSample, "got %u\n", VAR_6.wBitsPerSample);
    FUNC_6(0 == VAR_6.cbSize, "got %u\n", VAR_6.cbSize);

    FUNC_2(VAR_5);

out_unknown:
    FUNC_4(VAR_4);
}
