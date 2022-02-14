
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fccID; int dwSize; } ;
struct TYPE_5__ {int loop_present; TYPE_2__ wave_link; TYPE_2__ wave_loop; TYPE_2__ wave_sample; TYPE_2__ header; } ;
typedef TYPE_1__ instrument_region ;
typedef int chunk ;
typedef scalar_t__ ULONG ;
typedef int IStream ;
typedef int IDirectMusicInstrumentImpl ;
typedef int HRESULT ;
typedef TYPE_2__ DMUS_PRIVATE_CHUNK ;


 scalar_t__ FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;

__attribute__((used)) static HRESULT FUNC_6(IDirectMusicInstrumentImpl *VAR_1, IStream *VAR_2, instrument_region *VAR_3, ULONG VAR_4)
{
    HRESULT VAR_5;
    DMUS_PRIVATE_CHUNK VAR_6;

    FUNC_1("(%p, %p, %p, %u)\n", *VAR_1, VAR_2, VAR_3, VAR_4);

    while (VAR_4)
    {
        VAR_5 = FUNC_4(VAR_2, &VAR_6, sizeof(VAR_6));
        if (FUNC_0(VAR_5))
            return VAR_5;

        VAR_4 = FUNC_5(VAR_4, sizeof(VAR_6));

        switch (VAR_6.fccID)
        {
            case 130:
                FUNC_1("RGNH chunk (region header): %u bytes\n", VAR_6.dwSize);

                VAR_5 = FUNC_4(VAR_2, &VAR_3->header, sizeof(VAR_3->header));
                if (FUNC_0(VAR_5))
                    return VAR_5;

                VAR_4 = FUNC_5(VAR_4, sizeof(VAR_3->header));
                break;

            case 128:
                FUNC_1("WSMP chunk (wave sample): %u bytes\n", VAR_6.dwSize);

                VAR_5 = FUNC_4(VAR_2, &VAR_3->wave_sample, sizeof(VAR_3->wave_sample));
                if (FUNC_0(VAR_5))
                    return VAR_5;
                VAR_4 = FUNC_5(VAR_4, sizeof(VAR_3->wave_sample));

                if (!(VAR_3->loop_present = (VAR_6.dwSize != sizeof(VAR_3->wave_sample))))
                    break;

                VAR_5 = FUNC_4(VAR_2, &VAR_3->wave_loop, sizeof(VAR_3->wave_loop));
                if (FUNC_0(VAR_5))
                    return VAR_5;

                VAR_4 = FUNC_5(VAR_4, sizeof(VAR_3->wave_loop));
                break;

            case 129:
                FUNC_1("WLNK chunk (wave link): %u bytes\n", VAR_6.dwSize);

                VAR_5 = FUNC_4(VAR_2, &VAR_3->wave_link, sizeof(VAR_3->wave_link));
                if (FUNC_0(VAR_5))
                    return VAR_5;

                VAR_4 = FUNC_5(VAR_4, sizeof(VAR_3->wave_link));
                break;

            default:
                FUNC_1("Unknown chunk %s (skipping): %u bytes\n", FUNC_3(VAR_6.fccID), VAR_6.dwSize);

                VAR_5 = FUNC_2(VAR_2, VAR_6.dwSize);
                if (FUNC_0(VAR_5))
                    return VAR_5;

                VAR_4 = FUNC_5(VAR_4, VAR_6.dwSize);
                break;
        }
    }

    return VAR_0;
}
