
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wasapi_sample_fmt {int used_msb; int mp_format; int bits; } ;
struct mp_chmap {int num; } ;
struct TYPE_6__ {int wValidBitsPerSample; } ;
struct TYPE_7__ {int cbSize; int wBitsPerSample; int nSamplesPerSec; int nChannels; int wFormatTag; } ;
struct TYPE_8__ {int dwChannelMask; TYPE_1__ Samples; int SubFormat; TYPE_2__ Format; } ;
typedef TYPE_3__ WAVEFORMATEXTENSIBLE ;
typedef int WAVEFORMATEX ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct mp_chmap*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(WAVEFORMATEXTENSIBLE *VAR_1,
                           struct wasapi_sample_fmt *VAR_2,
                           DWORD VAR_3, struct mp_chmap *VAR_4)
{
    VAR_1->Format.wFormatTag = VAR_0;
    VAR_1->Format.nChannels = VAR_4->num;
    VAR_1->Format.nSamplesPerSec = VAR_3;
    VAR_1->Format.wBitsPerSample = VAR_2->bits;
    VAR_1->Format.cbSize = sizeof(WAVEFORMATEXTENSIBLE) - sizeof(WAVEFORMATEX);

    VAR_1->SubFormat = *FUNC_0(VAR_2->mp_format);
    VAR_1->Samples.wValidBitsPerSample = VAR_2->used_msb;
    VAR_1->dwChannelMask = FUNC_1(VAR_4);
    FUNC_2(VAR_1);
}
