
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct FormatConverter {int palette; int source; } ;
typedef enum pixelformat { ____Placeholder_pixelformat } pixelformat ;
struct TYPE_5__ {int Width; int Height; } ;
typedef TYPE_1__ WICRect ;
typedef int WICColor ;
typedef int UINT ;
typedef scalar_t__ INT ;
typedef scalar_t__ HRESULT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__ const*,int,int,int *) ;
 scalar_t__ FUNC_4 (int ,int,int *,int*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (struct FormatConverter*,TYPE_1__ const*,int,int,int *,int) ;
 int VAR_3 ;
 int FUNC_7 (int ,int ,int ,int *,int) ;

__attribute__((used)) static HRESULT FUNC_8(struct FormatConverter *VAR_4, const WICRect *VAR_5,
    UINT VAR_6, UINT VAR_7, BYTE *VAR_8, enum pixelformat VAR_9)
{
    HRESULT VAR_10;
    BYTE *VAR_11;
    WICColor VAR_12[256];
    UINT VAR_13, VAR_14, VAR_15;

    if (VAR_9 == VAR_3)
    {
        if (VAR_5)
            return FUNC_3(VAR_4->source, VAR_5, VAR_6, VAR_7, VAR_8);

        return VAR_1;
    }

    if (!VAR_4->palette) return VAR_2;

    VAR_10 = FUNC_4(VAR_4->palette, 256, VAR_12, &VAR_15);
    if (VAR_10 != VAR_1) return VAR_10;

    VAR_13 = 3 * VAR_5->Width;
    VAR_14 = VAR_13 * VAR_5->Height;

    VAR_11 = FUNC_1(FUNC_0(), 0, VAR_14);
    if (!VAR_11) return VAR_0;

    VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_13, VAR_14, VAR_11, VAR_9);
    if (FUNC_5(VAR_10) && VAR_5)
    {
        INT VAR_16, VAR_17;
        BYTE *VAR_18 = VAR_11, *VAR_19 = VAR_8;

        for (VAR_17 = 0; VAR_17 < VAR_5->Height; VAR_17++)
        {
            BYTE *VAR_20 = VAR_18;

            for (VAR_16 = 0; VAR_16 < VAR_5->Width; VAR_16++)
            {
                VAR_19[VAR_16] = FUNC_7(VAR_20[2], VAR_20[1], VAR_20[0], VAR_12, VAR_15);
                VAR_20 += 3;
            }
            VAR_18 += VAR_13;
            VAR_19 += VAR_6;
        }
    }

    FUNC_2(FUNC_0(), 0, VAR_11);
    return VAR_10;
}
