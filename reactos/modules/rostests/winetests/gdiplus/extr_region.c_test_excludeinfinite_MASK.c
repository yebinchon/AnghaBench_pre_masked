
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int Height; int Width; int Y; int X; } ;
struct TYPE_5__ {double member_0; double member_1; double member_2; double member_3; } ;
typedef TYPE_1__ RectF ;
typedef int INT ;
typedef int GpStatus ;
typedef int GpRegion ;
typedef TYPE_2__ GpRectF ;
typedef int GpMatrix ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__ const*,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_2__*,int *,int *) ;
 int FUNC_6 (int *,int*,int *) ;
 int VAR_1 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (double,int ) ;

__attribute__((used)) static void FUNC_9(void)
{
    GpStatus VAR_2;
    GpRegion *VAR_3;
    UINT VAR_4=0xdeadbeef;
    GpRectF VAR_5[4];
    GpMatrix *VAR_6;
    static const RectF VAR_7 = {0.0, 0.0, 1.0, 1.0};

    VAR_2 = FUNC_1(&VAR_6);
    FUNC_7(VAR_1, VAR_2);

    VAR_2 = FUNC_2(&VAR_3);
    FUNC_7(VAR_1, VAR_2);

    VAR_2 = FUNC_0(VAR_3, &VAR_7, VAR_0);
    FUNC_7(VAR_1, VAR_2);

    VAR_2 = FUNC_6(VAR_3, &VAR_4, VAR_6);
    FUNC_7(VAR_1, VAR_2);
    FUNC_7(4, VAR_4);

    VAR_4 = 4;
    VAR_2 = FUNC_5(VAR_3, VAR_5, (INT*)&VAR_4, VAR_6);
    FUNC_7(VAR_1, VAR_2);

    FUNC_8(-4194304.0, VAR_5[0].X);
    FUNC_8(-4194304.0, VAR_5[0].Y);
    FUNC_8(8388608.0, VAR_5[0].Width);
    FUNC_8(4194304.0, VAR_5[0].Height);

    FUNC_8(-4194304.0, VAR_5[1].X);
    FUNC_8(0.0, VAR_5[1].Y);
    FUNC_8(4194304.0, VAR_5[1].Width);
    FUNC_8(1.0, VAR_5[1].Height);

    FUNC_8(1.0, VAR_5[2].X);
    FUNC_8(0.0, VAR_5[2].Y);
    FUNC_8(4194303.0, VAR_5[2].Width);
    FUNC_8(1.0, VAR_5[2].Height);

    FUNC_8(-4194304.0, VAR_5[3].X);
    FUNC_8(1.0, VAR_5[3].Y);
    FUNC_8(8388608.0, VAR_5[3].Width);
    FUNC_8(4194303.0, VAR_5[3].Height);

    FUNC_4(VAR_3);
    FUNC_3(VAR_6);
}
