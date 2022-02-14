
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct FormatConverter {int source; } ;
typedef enum pixelformat { ____Placeholder_pixelformat } pixelformat ;
struct TYPE_5__ {int Width; int Height; } ;
typedef TYPE_1__ WICRect ;
typedef int UINT ;
typedef scalar_t__ INT ;
typedef int HRESULT ;
typedef float BYTE ;


 int VAR_0 ;
 int FUNC_0 () ;
 float* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,float*) ;
 int FUNC_3 (int ,TYPE_1__ const*,int,int,float*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct FormatConverter*,TYPE_1__ const*,int,int,float*,int) ;
 scalar_t__ FUNC_6 (float) ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_7 (float) ;

__attribute__((used)) static HRESULT FUNC_8(struct FormatConverter *VAR_4, const WICRect *VAR_5,
    UINT VAR_6, UINT VAR_7, BYTE *VAR_8, enum pixelformat VAR_9)
{
    HRESULT VAR_10;
    BYTE *VAR_11;
    UINT VAR_12, VAR_13;

    if (VAR_9 == VAR_3)
    {
        if (VAR_5)
            return FUNC_3(VAR_4->source, VAR_5, VAR_6, VAR_7, VAR_8);

        return VAR_1;
    }

    if (VAR_9 == VAR_2)
    {
        VAR_10 = VAR_1;

        if (VAR_5)
        {
            VAR_12 = 4 * VAR_5->Width;
            VAR_13 = VAR_12 * VAR_5->Height;

            VAR_11 = FUNC_1(FUNC_0(), 0, VAR_13);
            if (!VAR_11) return VAR_0;

            VAR_10 = FUNC_3(VAR_4->source, VAR_5, VAR_12, VAR_13, VAR_11);
            if (FUNC_4(VAR_10))
            {
                INT VAR_14, VAR_15;
                BYTE *VAR_16 = VAR_11, *VAR_17 = VAR_8;

                for (VAR_15=0; VAR_15 < VAR_5->Height; VAR_15++)
                {
                    float *VAR_18 = (float*)VAR_16;
                    BYTE *VAR_19 = VAR_17;

                    for (VAR_14=0; VAR_14 < VAR_5->Width; VAR_14++)
                        *VAR_19++ = (BYTE)FUNC_6(FUNC_7(*VAR_18++) * 255.0f + 0.51f);

                    VAR_16 += VAR_12;
                    VAR_17 += VAR_6;
                }
            }

            FUNC_2(FUNC_0(), 0, VAR_11);
        }

        return VAR_10;
    }

    VAR_12 = 3 * VAR_5->Width;
    VAR_13 = VAR_12 * VAR_5->Height;

    VAR_11 = FUNC_1(FUNC_0(), 0, VAR_13);
    if (!VAR_11) return VAR_0;

    VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_12, VAR_13, VAR_11, VAR_9);
    if (FUNC_4(VAR_10) && VAR_5)
    {
        INT VAR_20, VAR_21;
        BYTE *VAR_22 = VAR_11, *VAR_23 = VAR_8;

        for (VAR_21 = 0; VAR_21 < VAR_5->Height; VAR_21++)
        {
            BYTE *VAR_24 = VAR_22;

            for (VAR_20 = 0; VAR_20 < VAR_5->Width; VAR_20++)
            {
                float VAR_25 = (VAR_24[2] * 0.2126f + VAR_24[1] * 0.7152f + VAR_24[0] * 0.0722f) / 255.0f;

                VAR_25 = FUNC_7(VAR_25) * 255.0f;
                VAR_23[VAR_20] = (BYTE)FUNC_6(VAR_25 + 0.51f);
                VAR_24 += 3;
            }
            VAR_22 += VAR_12;
            VAR_23 += VAR_6;
        }
    }

    FUNC_2(FUNC_0(), 0, VAR_11);
    return VAR_10;
}
