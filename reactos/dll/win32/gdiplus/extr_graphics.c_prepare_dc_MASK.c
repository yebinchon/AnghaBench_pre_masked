
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ unit; int scale; int hdc; int xres; int worldtrans; } ;
struct TYPE_10__ {scalar_t__ unit; int width; scalar_t__ dash; int* dashes; int style; int brush; int numdashes; } ;
struct TYPE_9__ {double X; double Y; } ;
typedef int REAL ;
typedef int LOGBRUSH ;
typedef size_t INT ;
typedef int HPEN ;
typedef TYPE_1__ GpPointF ;
typedef TYPE_2__ GpPen ;
typedef TYPE_3__ GpGraphics ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,size_t,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int VAR_2 ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*,int ,int ,TYPE_1__*,int) ;
 size_t FUNC_10 (int ,int) ;
 int FUNC_11 (double) ;
 int FUNC_12 (int,scalar_t__,int ) ;

__attribute__((used)) static INT FUNC_13(GpGraphics *VAR_6, GpPen *VAR_7)
{
    LOGBRUSH VAR_8;
    HPEN VAR_9;
    REAL VAR_10;
    INT VAR_11, VAR_12, VAR_13;
    GpPointF VAR_14[2];
    DWORD VAR_15[VAR_2];

    VAR_11 = FUNC_3(VAR_6->hdc);

    FUNC_0(VAR_6->hdc);

    if(VAR_7->unit == VAR_3){
        VAR_10 = VAR_7->width;
    }
    else{


        VAR_14[0].X = 0.0;
        VAR_14[0].Y = 0.0;
        VAR_14[1].X = 1.0;
        VAR_14[1].Y = 1.0;
        FUNC_2(&VAR_6->worldtrans, VAR_14, 2);
        VAR_10 = FUNC_11((VAR_14[1].X - VAR_14[0].X) * (VAR_14[1].X - VAR_14[0].X) +
                     (VAR_14[1].Y - VAR_14[0].Y) * (VAR_14[1].Y - VAR_14[0].Y)) / FUNC_11(2.0);

        VAR_10 *= FUNC_12(VAR_7->width, VAR_7->unit == VAR_4 ? VAR_6->unit : VAR_7->unit, VAR_6->xres);
        VAR_10 *= VAR_6->scale;

        VAR_14[0].X = 0.0;
        VAR_14[0].Y = 0.0;
        VAR_14[1].X = 1.0;
        VAR_14[1].Y = 1.0;
        FUNC_9(VAR_6, VAR_5, VAR_0, VAR_14, 2);
        VAR_10 *= FUNC_11((VAR_14[1].X - VAR_14[0].X) * (VAR_14[1].X - VAR_14[0].X) +
                      (VAR_14[1].Y - VAR_14[0].Y) * (VAR_14[1].Y - VAR_14[0].Y)) / FUNC_11(2.0);
    }

    if(VAR_7->dash == VAR_1){
        VAR_13 = FUNC_10(VAR_7->numdashes, VAR_2);

        FUNC_5("dashes are: ");
        for(VAR_12 = 0; VAR_12 < VAR_13; VAR_12++){
            VAR_15[VAR_12] = FUNC_8(VAR_10 * VAR_7->dashes[VAR_12]);
            FUNC_5("%d, ", VAR_15[VAR_12]);
        }
        FUNC_5("\n and the pen style is %x\n", VAR_7->style);

        FUNC_6(VAR_7->brush, &VAR_8);
        VAR_9 = FUNC_1(VAR_7->style, FUNC_8(VAR_10), &VAR_8,
                              VAR_13, VAR_15);
        FUNC_7(&VAR_8);
    }
    else
    {
        FUNC_6(VAR_7->brush, &VAR_8);
        VAR_9 = FUNC_1(VAR_7->style, FUNC_8(VAR_10), &VAR_8, 0, ((void*)0));
        FUNC_7(&VAR_8);
    }

    FUNC_4(VAR_6->hdc, VAR_9);

    return VAR_11;
}
