
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int bt; } ;
struct TYPE_12__ {int hdc; } ;
struct TYPE_11__ {int color; } ;
struct TYPE_10__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int HBITMAP ;
typedef int GpStatus ;
typedef TYPE_2__ GpSolidFill ;
typedef TYPE_3__ GpGraphics ;
typedef TYPE_4__ GpBrush ;


 int FUNC_0 (int ) ;

 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int,int) ;

__attribute__((used)) static GpStatus FUNC_10(GpGraphics *VAR_5, GpBrush *VAR_6)
{
    GpStatus VAR_7 = VAR_2;
    switch (VAR_6->bt)
    {
    case 128:
    {
        GpSolidFill *VAR_8 = (GpSolidFill*)VAR_6;
        HBITMAP VAR_9 = FUNC_0(VAR_8->color);

        if (VAR_9)
        {
            RECT VAR_10;


            if (!FUNC_6(VAR_5->hdc, VAR_4))
            {
                VAR_7 = VAR_0;
                FUNC_3(VAR_9);
                break;
            }
            if (FUNC_5(VAR_5->hdc, &VAR_10) != VAR_1)
            {
                HDC VAR_11 = FUNC_1(((void*)0));

                if (!VAR_11)
                {
                    VAR_7 = VAR_3;
                    FUNC_3(VAR_9);
                    break;
                }

                FUNC_7(VAR_11, VAR_9);
                FUNC_9(VAR_5, VAR_10.left, VAR_10.top, VAR_10.right - VAR_10.left, VAR_10.bottom - VAR_10.top,
                                VAR_11, 0, 0, 1, 1);
                FUNC_2(VAR_11);
            }

            FUNC_3(VAR_9);
            break;
        }

    }
    default:
    {
        HBRUSH VAR_12, VAR_13;

        VAR_12 = FUNC_8(VAR_6);
        if (!VAR_12)
        {
            VAR_7 = VAR_3;
            break;
        }

        VAR_13 = FUNC_7(VAR_5->hdc, VAR_12);
        FUNC_4(VAR_5->hdc);
        FUNC_7(VAR_5->hdc, VAR_13);
        FUNC_3(VAR_12);
        break;
    }
    }

    return VAR_7;
}
