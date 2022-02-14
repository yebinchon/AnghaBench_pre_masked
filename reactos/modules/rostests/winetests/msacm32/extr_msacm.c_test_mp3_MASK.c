
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nSamplesPerSec; int wBitsPerSample; int nChannels; int nBlockAlign; int nAvgBytesPerSec; int wFormatTag; scalar_t__ cbSize; } ;
typedef TYPE_2__ WAVEFORMATEX ;
struct TYPE_6__ {int nSamplesPerSec; int nChannels; int nBlockAlign; int nAvgBytesPerSec; scalar_t__ cbSize; scalar_t__ wBitsPerSample; int wFormatTag; } ;
struct TYPE_8__ {int nBlockSize; int nFramesPerBlock; TYPE_1__ wfx; void* wID; scalar_t__ nCodecDelay; scalar_t__ fdwFlags; } ;
typedef TYPE_3__ MPEGLAYER3WAVEFORMAT ;
typedef scalar_t__ MMRESULT ;
typedef int HACMSTREAM ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_2__*,TYPE_2__*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int,int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    MPEGLAYER3WAVEFORMAT VAR_7;
    WAVEFORMATEX VAR_8;
    HACMSTREAM VAR_9;
    DWORD VAR_10;
    MMRESULT VAR_11;

    VAR_7.wfx.wFormatTag = VAR_5;
    VAR_7.wfx.nSamplesPerSec = 11025;
    VAR_7.wfx.wBitsPerSample = 0;
    VAR_7.wfx.nChannels = 1;
    VAR_7.wfx.nBlockAlign = 576;
    VAR_7.wfx.nAvgBytesPerSec = 2000;

    VAR_7.wID = VAR_3;
    VAR_7.fdwFlags = 0;
    VAR_7.nBlockSize = 576;
    VAR_7.nFramesPerBlock = 1;
    VAR_7.nCodecDelay = 0;

    VAR_8.cbSize = 0;
    VAR_8.wFormatTag = VAR_6;
    VAR_8.nSamplesPerSec = 11025;
    VAR_8.wBitsPerSample = 16;
    VAR_8.nChannels = 1;
    VAR_8.nBlockAlign = VAR_8.wBitsPerSample * VAR_8.nChannels / 8;
    VAR_8.nAvgBytesPerSec = VAR_8.nSamplesPerSec * VAR_8.nBlockAlign;

    VAR_7.wfx.cbSize = 0;

    VAR_11 = FUNC_1(&VAR_9, ((void*)0), (WAVEFORMATEX*)&VAR_7, &VAR_8, ((void*)0), 0, 0, 0);
    FUNC_4(VAR_11 == VAR_0, "expected error ACMERR_NOTPOSSIBLE, got 0x%x\n", VAR_11);
    if (VAR_11 == VAR_2) FUNC_0(VAR_9, 0);

    VAR_7.wfx.cbSize = VAR_4;
    VAR_7.wID = 0;

    VAR_11 = FUNC_1(&VAR_9, ((void*)0), (WAVEFORMATEX*)&VAR_7, &VAR_8, ((void*)0), 0, 0, 0);
    FUNC_4(VAR_11 == VAR_0, "expected error ACMERR_NOTPOSSIBLE, got 0x%x\n", VAR_11);
    if (VAR_11 == VAR_2) FUNC_0(VAR_9, 0);

    VAR_7.wID = VAR_3;
    VAR_7.nBlockSize = 0;

    VAR_11 = FUNC_1(&VAR_9, ((void*)0), (WAVEFORMATEX*)&VAR_7, &VAR_8, ((void*)0), 0, 0, 0);
    FUNC_4(VAR_11 == VAR_2 || FUNC_3(VAR_11 == VAR_0) ,
       "failed with error 0x%x\n", VAR_11);
    if (VAR_11 == VAR_2)
    {
       VAR_11 = FUNC_0(VAR_9, 0);
       FUNC_4(VAR_11 == VAR_2, "failed with error 0x%x\n", VAR_11);
    }
    VAR_7.nBlockSize = 576;
    VAR_7.wfx.nAvgBytesPerSec = 0;

    VAR_11 = FUNC_1(&VAR_9, ((void*)0), (WAVEFORMATEX*)&VAR_7, &VAR_8, ((void*)0), 0, 0, 0);
    FUNC_4(VAR_11 == VAR_2 || FUNC_3(VAR_11 == VAR_0) ,
       "failed with error 0x%x\n", VAR_11);
    if (VAR_11 == VAR_2)
    {


       if (0) FUNC_2(VAR_9, 4000, &VAR_10, VAR_1);
       VAR_11 = FUNC_0(VAR_9, 0);
       FUNC_4(VAR_11 == VAR_2, "failed with error 0x%x\n", VAR_11);
    }

    VAR_7.wfx.nAvgBytesPerSec = 2000;

    VAR_11 = FUNC_1(&VAR_9, ((void*)0), (WAVEFORMATEX*)&VAR_7, &VAR_8, ((void*)0), 0, 0, 0);
    FUNC_4(VAR_11 == VAR_2 || FUNC_3(VAR_11 == VAR_0) ,
       "failed with error 0x%x\n", VAR_11);
    if (VAR_11 == VAR_2)
    {
       VAR_11 = FUNC_2(VAR_9, 4000, &VAR_10, VAR_1);
       FUNC_4(VAR_11 == VAR_2, "failed with error 0x%x\n", VAR_11);
       VAR_11 = FUNC_0(VAR_9, 0);
       FUNC_4(VAR_11 == VAR_2, "failed with error 0x%x\n", VAR_11);
    }
}
