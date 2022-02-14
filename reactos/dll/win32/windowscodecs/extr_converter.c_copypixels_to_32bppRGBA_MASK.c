
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct FormatConverter {int source; } ;
typedef enum pixelformat { ____Placeholder_pixelformat } pixelformat ;
struct TYPE_5__ {int Height; int Width; } ;
typedef TYPE_1__ WICRect ;
typedef int UINT ;
typedef int HRESULT ;
typedef int BYTE ;


 int FUNC_0 (int ,TYPE_1__ const*,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct FormatConverter*,TYPE_1__ const*,int ,int ,int *,int) ;



 int FUNC_3 (int,int *,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_4(struct FormatConverter *VAR_1, const WICRect *VAR_2,
    UINT VAR_3, UINT VAR_4, BYTE *VAR_5, enum pixelformat VAR_6)
{
    HRESULT VAR_7;

    switch (VAR_6)
    {
    case 129:
    case 128:
    case 130:
        if (VAR_2)
            return FUNC_0(VAR_1->source, VAR_2, VAR_3, VAR_4, VAR_5);
        return VAR_0;
    default:
        VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
        if (FUNC_1(VAR_7) && VAR_2)
              FUNC_3(4, VAR_5, VAR_2->Width, VAR_2->Height, VAR_3);
        return VAR_7;
    }
}
