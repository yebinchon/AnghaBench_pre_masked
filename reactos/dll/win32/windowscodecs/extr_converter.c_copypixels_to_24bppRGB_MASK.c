
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct FormatConverter {int source; } ;
typedef enum pixelformat { ____Placeholder_pixelformat } pixelformat ;
struct TYPE_4__ {int Width; int Height; } ;
typedef TYPE_1__ WICRect ;
typedef int UINT ;
typedef int INT ;
typedef int HRESULT ;
typedef void* BYTE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 void** FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,void**) ;
 int FUNC_4 (int ,TYPE_1__ const*,int,int,void**) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_6 (int,void**,int,int,int) ;

__attribute__((used)) static HRESULT FUNC_7(struct FormatConverter *VAR_3, const WICRect *VAR_4,
    UINT VAR_5, UINT VAR_6, BYTE *VAR_7, enum pixelformat VAR_8)
{
    HRESULT VAR_9;

    switch (VAR_8)
    {
    case 132:
    case 131:
        if (VAR_4)
        {
            VAR_9 = FUNC_4(VAR_3->source, VAR_4, VAR_5, VAR_6, VAR_7);
            if (FUNC_5(VAR_9) && VAR_8 == 132)
              FUNC_6(3, VAR_7, VAR_4->Width, VAR_4->Height, VAR_5);
            return VAR_9;
        }
        return VAR_1;
    case 130:
    case 129:
    case 128:
        if (VAR_4)
        {
            HRESULT VAR_10;
            INT VAR_11, VAR_12;
            BYTE *VAR_13;
            UINT VAR_14, VAR_15;
            const BYTE *VAR_16;
            const BYTE *VAR_17;
            BYTE *VAR_18;
            BYTE *VAR_19;
            BYTE VAR_20[3];

            VAR_14 = 4 * VAR_4->Width;
            VAR_15 = VAR_14 * VAR_4->Height;

            VAR_13 = FUNC_2(FUNC_1(), 0, VAR_15);
            if (!VAR_13) return VAR_0;

            VAR_10 = FUNC_4(VAR_3->source, VAR_4, VAR_14, VAR_15, VAR_13);

            if (FUNC_5(VAR_10))
            {
                VAR_16 = VAR_13;
                VAR_18 = VAR_7;
                for (VAR_12=0; VAR_12<VAR_4->Height; VAR_12++) {
                    VAR_17=VAR_16;
                    VAR_19=VAR_18;
                    for (VAR_11=0; VAR_11<VAR_4->Width; VAR_11++) {
                        VAR_20[0]=*VAR_17++;
                        VAR_20[1]=*VAR_17++;
                        VAR_20[2]=*VAR_17++;
                        VAR_17++;

                        *VAR_19++=VAR_20[2];
                        *VAR_19++=VAR_20[1];
                        *VAR_19++=VAR_20[0];
                    }
                    VAR_16 += VAR_14;
                    VAR_18 += VAR_5;
                }
            }

            FUNC_3(FUNC_1(), 0, VAR_13);

            return VAR_10;
        }
        return VAR_1;
    default:
        FUNC_0("Unimplemented conversion path!\n");
        return VAR_2;
    }
}
