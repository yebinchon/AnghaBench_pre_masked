
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int SourceConstantAlpha; int AlphaFormat; scalar_t__ BlendFlags; int BlendOp; } ;
struct TYPE_5__ {int hdc; } ;
typedef int INT ;
typedef int HDC ;
typedef TYPE_1__ GpGraphics ;
typedef TYPE_2__ BLENDFUNCTION ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,TYPE_2__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(GpGraphics *VAR_7, INT VAR_8, INT VAR_9, INT VAR_10, INT VAR_11,
                            HDC VAR_12, INT VAR_13, INT VAR_14, INT VAR_15, INT VAR_16)
{
    if (FUNC_1(VAR_7->hdc, VAR_6) == VAR_2 &&
        FUNC_1(VAR_7->hdc, VAR_4) == VAR_3)
    {
        FUNC_3("alpha blending not supported by device, fallback to StretchBlt\n");

        FUNC_2(VAR_7->hdc, VAR_8, VAR_9, VAR_10, VAR_11,
                   VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_5);
    }
    else
    {
        BLENDFUNCTION VAR_17;

        VAR_17.BlendOp = VAR_1;
        VAR_17.BlendFlags = 0;
        VAR_17.SourceConstantAlpha = 255;
        VAR_17.AlphaFormat = VAR_0;

        FUNC_0(VAR_7->hdc, VAR_8, VAR_9, VAR_10, VAR_11,
                      VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);
    }
}
