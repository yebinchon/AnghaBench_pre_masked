
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wasapi_sample_fmt {int bits; int used_msb; int * subtype; scalar_t__ mp_format; int member_0; } ;
struct TYPE_5__ {int wValidBitsPerSample; } ;
struct TYPE_6__ {TYPE_1__ Samples; int SubFormat; } ;
typedef TYPE_2__ WAVEFORMATEXTENSIBLE ;
struct TYPE_7__ {int wBitsPerSample; int wFormatTag; } ;
typedef TYPE_3__ WAVEFORMATEX ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;



 struct wasapi_sample_fmt* VAR_2 ;

__attribute__((used)) static struct wasapi_sample_fmt FUNC_1(WAVEFORMATEX *VAR_3)
{
    struct wasapi_sample_fmt VAR_4 = {0};

    for (int VAR_5 = 0; VAR_2[VAR_5].mp_format; VAR_5++) {
        const struct wasapi_sample_fmt *VAR_6 = &VAR_2[VAR_5];
        int VAR_7 = 0;

        if (VAR_3->wBitsPerSample != VAR_6->bits)
            continue;

        const GUID *VAR_8 = ((void*)0);

        switch (VAR_3->wFormatTag) {
        case 130: {
            WAVEFORMATEXTENSIBLE *VAR_9 = (WAVEFORMATEXTENSIBLE *)VAR_3;
            VAR_8 = &VAR_9->SubFormat;
            if (FUNC_0(VAR_8, &VAR_1))
                VAR_7 = VAR_9->Samples.wValidBitsPerSample;
            break;
        }
        case 128:
            VAR_8 = &VAR_1;
            break;
        case 129:
            VAR_8 = &VAR_0;
            break;
        }

        if (!VAR_8 || !FUNC_0(VAR_8, VAR_6->subtype))
            continue;

        VAR_4 = *VAR_6;
        if (VAR_7 > 0 && VAR_7 < VAR_6->bits)
            VAR_4.used_msb = VAR_7;
        break;
    }

    return VAR_4;
}
