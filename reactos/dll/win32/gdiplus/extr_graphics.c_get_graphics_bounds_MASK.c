
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ hdc; } ;
struct TYPE_11__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_10__ {scalar_t__ X; scalar_t__ Y; scalar_t__ Width; scalar_t__ Height; } ;
typedef scalar_t__ GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef TYPE_2__ GpPointF ;
typedef TYPE_3__ GpGraphics ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static GpStatus FUNC_2(GpGraphics* VAR_3, GpRectF* VAR_4)
{
    GpStatus VAR_5 = FUNC_1(VAR_3, VAR_4);

    if (VAR_5 == VAR_1 && VAR_3->hdc)
    {
        GpPointF VAR_6[4], VAR_7, VAR_8;
        int VAR_9;

        VAR_6[0].X = VAR_6[2].X = VAR_4->X;
        VAR_6[0].Y = VAR_6[1].Y = VAR_4->Y;
        VAR_6[1].X = VAR_6[3].X = VAR_4->X + VAR_4->Width;
        VAR_6[2].Y = VAR_6[3].Y = VAR_4->Y + VAR_4->Height;

        FUNC_0(VAR_3, VAR_0, VAR_2, VAR_6, 4);

        VAR_7 = VAR_8 = VAR_6[0];

        for (VAR_9=1; VAR_9<4; VAR_9++)
        {
            if (VAR_6[VAR_9].X < VAR_7.X) VAR_7.X = VAR_6[VAR_9].X;
            if (VAR_6[VAR_9].Y < VAR_7.Y) VAR_7.Y = VAR_6[VAR_9].Y;
            if (VAR_6[VAR_9].X > VAR_8.X) VAR_8.X = VAR_6[VAR_9].X;
            if (VAR_6[VAR_9].Y > VAR_8.Y) VAR_8.Y = VAR_6[VAR_9].Y;
        }

        VAR_4->X = VAR_7.X;
        VAR_4->Y = VAR_7.Y;
        VAR_4->Width = VAR_8.X - VAR_7.X;
        VAR_4->Height = VAR_8.Y - VAR_7.Y;
    }

    return VAR_5;
}
