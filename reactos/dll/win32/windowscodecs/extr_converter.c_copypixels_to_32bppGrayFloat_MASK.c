
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct FormatConverter {int source; } ;
typedef enum pixelformat { ____Placeholder_pixelformat } pixelformat ;
struct TYPE_5__ {scalar_t__ Height; scalar_t__ Width; } ;
typedef TYPE_1__ WICRect ;
typedef int UINT ;
typedef scalar_t__ INT ;
typedef int HRESULT ;
typedef float BYTE ;


 int FUNC_0 (int ,TYPE_1__ const*,int ,int ,float*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct FormatConverter*,TYPE_1__ const*,int ,int ,float*,int) ;





__attribute__((used)) static HRESULT FUNC_3(struct FormatConverter *VAR_1, const WICRect *VAR_2,
    UINT VAR_3, UINT VAR_4, BYTE *VAR_5, enum pixelformat VAR_6)
{
    HRESULT VAR_7;

    switch (VAR_6)
    {
    case 131:
    case 130:
    case 128:
    case 129:
        if (VAR_2)
        {
            VAR_7 = FUNC_0(VAR_1->source, VAR_2, VAR_3, VAR_4, VAR_5);
            break;
        }
        return VAR_0;

    default:
        VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
        break;
    }

    if (FUNC_1(VAR_7) && VAR_2 && VAR_6 != 129)
    {
        INT VAR_8, VAR_9;
        BYTE *VAR_10 = VAR_5;

        for (VAR_9 = 0; VAR_9 < VAR_2->Height; VAR_9++)
        {
            BYTE *VAR_11 = VAR_10;
            for (VAR_8 = 0; VAR_8 < VAR_2->Width; VAR_8++)
            {
                float VAR_12 = (VAR_11[2] * 0.2126f + VAR_11[1] * 0.7152f + VAR_11[0] * 0.0722f) / 255.0f;
                *(float *)VAR_11 = VAR_12;
                VAR_11 += 4;
            }
            VAR_10 += VAR_3;
        }
    }
    return VAR_7;
}
