
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WrapMode ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_5__ {scalar_t__ Height; scalar_t__ Width; scalar_t__ Y; scalar_t__ X; } ;
typedef scalar_t__ REAL ;
typedef int InterpolationMode ;
typedef scalar_t__ INT ;
typedef TYPE_1__ GpRect ;
typedef TYPE_2__ GpBitmap ;







 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(InterpolationMode VAR_1, WrapMode VAR_2,
    GpBitmap* VAR_3, REAL VAR_4, REAL VAR_5, REAL VAR_6, REAL VAR_7,
    GpRect *VAR_8)
{
    INT VAR_9, VAR_10, VAR_11, VAR_12;

    switch (VAR_1)
    {
    case 129:
    case 130:

    case 132:
    case 131:
        VAR_9 = (INT)(FUNC_1(VAR_4));
        VAR_10 = (INT)(FUNC_1(VAR_5));
        VAR_11 = (INT)(FUNC_0(VAR_4+VAR_6));
        VAR_12 = (INT)(FUNC_0(VAR_5+VAR_7));
        break;
    case 128:
    default:
        VAR_9 = FUNC_2(VAR_4);
        VAR_10 = FUNC_2(VAR_5);
        VAR_11 = FUNC_2(VAR_4+VAR_6);
        VAR_12 = FUNC_2(VAR_5+VAR_7);
        break;
    }

    if (VAR_2 == VAR_0)
    {
        if (VAR_9 < 0)
            VAR_9 = 0;
        if (VAR_10 < 0)
            VAR_10 = 0;
        if (VAR_11 >= VAR_3->width)
            VAR_11 = VAR_3->width-1;
        if (VAR_12 >= VAR_3->height)
            VAR_12 = VAR_3->height-1;
        if (VAR_12 < VAR_10 || VAR_11 < VAR_9)


            VAR_9 = VAR_10 = VAR_11 = VAR_12 = 0;
    }
    else
    {



        if (VAR_9 < 0 || VAR_11 >= VAR_3->width)
        {
            VAR_9 = 0;
            VAR_11 = VAR_3->width-1;
        }

        if (VAR_10 < 0 || VAR_12 >= VAR_3->height)
        {
            VAR_10 = 0;
            VAR_12 = VAR_3->height-1;
        }
    }

    VAR_8->X = VAR_9;
    VAR_8->Y = VAR_10;
    VAR_8->Width = VAR_11 - VAR_9 + 1;
    VAR_8->Height = VAR_12 - VAR_10 + 1;
}
