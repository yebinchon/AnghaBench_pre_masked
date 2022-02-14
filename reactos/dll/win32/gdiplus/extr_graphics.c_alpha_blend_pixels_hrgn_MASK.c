
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int hdc; TYPE_2__* image; } ;
struct TYPE_16__ {int left; int top; int right; int bottom; } ;
struct TYPE_13__ {size_t nCount; } ;
struct TYPE_15__ {TYPE_1__ rdh; scalar_t__ Buffer; } ;
struct TYPE_14__ {scalar_t__ type; } ;
typedef TYPE_3__ RGNDATA ;
typedef TYPE_4__ RECT ;
typedef int PixelFormat ;
typedef int INT ;
typedef scalar_t__ HRGN ;
typedef scalar_t__ GpStatus ;
typedef TYPE_5__ GpGraphics ;
typedef size_t DWORD ;
typedef int BYTE ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int,int,int,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_5__*,int,int,int const*,int,int,int,int ) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int,int,int const*,int,int,int,int ) ;
 scalar_t__ FUNC_10 (TYPE_5__*,scalar_t__*) ;
 TYPE_3__* FUNC_11 (int) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static GpStatus FUNC_13(GpGraphics *VAR_7, INT VAR_8, INT VAR_9,
    const BYTE *VAR_10, INT VAR_11, INT VAR_12, INT VAR_13, HRGN VAR_14, PixelFormat VAR_15)
{
    GpStatus VAR_16=VAR_3;

    if (VAR_7->image && VAR_7->image->type == VAR_0)
    {
        DWORD VAR_17;
        int VAR_18;
        RGNDATA *VAR_19;
        RECT *VAR_20;
        HRGN VAR_21, VAR_22;

        VAR_21 = FUNC_1(VAR_8, VAR_9, VAR_8 + VAR_11, VAR_9 + VAR_12);
        if (!VAR_21)
            return VAR_4;

        VAR_16 = FUNC_10(VAR_7, &VAR_22);
        if (VAR_16 != VAR_3)
        {
            FUNC_2(VAR_21);
            return VAR_16;
        }

        if (VAR_22)
        {
            FUNC_0(VAR_21, VAR_21, VAR_22, VAR_5);
            FUNC_2(VAR_22);
        }

        if (VAR_14)
            FUNC_0(VAR_21, VAR_21, VAR_14, VAR_5);

        VAR_18 = FUNC_5(VAR_21, 0, ((void*)0));

        VAR_19 = FUNC_11(VAR_18);
        if (!VAR_19)
        {
            FUNC_2(VAR_21);
            return VAR_4;
        }

        FUNC_5(VAR_21, VAR_18, VAR_19);

        VAR_20 = (RECT*)VAR_19->Buffer;

        for (VAR_17=0; VAR_16 == VAR_3 && VAR_17<VAR_19->rdh.nCount; VAR_17++)
        {
            VAR_16 = FUNC_8(VAR_7, VAR_20[VAR_17].left, VAR_20[VAR_17].top,
                &VAR_10[(VAR_20[VAR_17].left - VAR_8) * 4 + (VAR_20[VAR_17].top - VAR_9) * VAR_13],
                VAR_20[VAR_17].right - VAR_20[VAR_17].left, VAR_20[VAR_17].bottom - VAR_20[VAR_17].top,
                VAR_13, VAR_15);
        }

        FUNC_12(VAR_19);

        FUNC_2(VAR_21);

        return VAR_16;
    }
    else if (VAR_7->image && VAR_7->image->type == VAR_1)
    {
        FUNC_3("This should not be used for metafiles; fix caller\n");
        return VAR_2;
    }
    else
    {
        HRGN VAR_23;
        int VAR_24;

        VAR_16 = FUNC_10(VAR_7, &VAR_23);

        if (VAR_16 != VAR_3)
            return VAR_16;

        VAR_24 = FUNC_7(VAR_7->hdc);

        FUNC_4(VAR_7->hdc, VAR_23, VAR_6);

        if (VAR_14)
            FUNC_4(VAR_7->hdc, VAR_14, VAR_5);

        VAR_16 = FUNC_9(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
            VAR_12, VAR_13, VAR_15);

        FUNC_6(VAR_7->hdc, VAR_24);

        FUNC_2(VAR_23);

        return VAR_16;
    }
}
