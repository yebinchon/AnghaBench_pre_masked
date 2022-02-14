
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct test_data TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct test_data {int res_x; int res_y; int scale; int pen_unit; int page_unit; int pen_width; scalar_t__ cx; scalar_t__ cy; scalar_t__ path_cx; scalar_t__ path_cy; } ;
struct TYPE_8__ {int Stride; scalar_t__ Scan0; } ;
struct TYPE_7__ {double X; double Y; } ;
typedef int REAL ;
typedef scalar_t__ INT ;
typedef int GpUnit ;
typedef int GpStatus ;
typedef TYPE_1__ GpPointF ;
typedef int GpPen ;
typedef int GpPath ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef TYPE_2__ BitmapData ;
typedef int BYTE ;


 int FUNC_0 (TYPE_6__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int,int,int) ;
 int FUNC_2 (int *,int *,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int,int ,int ,int *,int **) ;
 int FUNC_7 (int ,int **) ;
 int FUNC_8 (int,int ,int ,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int,int,int,int) ;
 int FUNC_14 (int *,int *,int *) ;
 int FUNC_15 (int *,int **) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ,int ,TYPE_1__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int,char*,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_22(void)
{
    static const struct test_data
    {
        REAL res_x, res_y, scale;
        GpUnit pen_unit, page_unit;
        REAL pen_width;
        INT cx, cy, path_cx, path_cy;
    } VAR_6[] =
    {
        { 10.0, 10.0, 1.0, 129, 129, 1.0, 1, 1, 1, 1 },
        { 10.0, 10.0, 1.0, 129, 129, 0.0, 0, 0, 1, 1 },
        { 10.0, 10.0, 1.0, 129, 129, 0.1, 1, 1, 1, 1 },
        { 10.0, 10.0, 3.0, 129, 129, 2.0, 2, 2, 2, 2 },
        { 10.0, 10.0, 30.0, 129, 130, 1.0, 1, 1, 1, 1 },
        { 10.0, 10.0, 1.0, 128, 129, 1.0, 1, 1, 1, 1 },
        { 10.0, 10.0, 1.0, 128, 129, 0.0, 1, 1, 1, 1 },
        { 10.0, 10.0, 3.0, 128, 129, 2.0, 6, 6, 6, 6 },
        { 10.0, 10.0, 2.0, 128, 130, 1.0, 20, 20, 20, 20 },
    };
    GpStatus VAR_7;
    int VAR_8, VAR_9;
    GpGraphics *VAR_10;
    union
    {
        GpBitmap *bitmap;
        GpImage *image;
    } VAR_11;
    GpPen *VAR_12;
    GpPointF VAR_13;
    GpPath *VAR_14;
    BitmapData VAR_15;
    INT VAR_16, VAR_17, VAR_18;

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++)
    {
        VAR_7 = FUNC_6(100, 100, 0, VAR_5, ((void*)0), &VAR_11.bitmap);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_3(VAR_11.bitmap, VAR_6[VAR_8].res_x, VAR_6[VAR_8].res_y);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_15(VAR_11.image, &VAR_10);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_18(VAR_10, VAR_6[VAR_8].page_unit);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_17(VAR_10, VAR_6[VAR_8].scale);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_8(0xffffffff, VAR_6[VAR_8].pen_width, VAR_6[VAR_8].pen_unit, &VAR_12);
        FUNC_20(VAR_4, VAR_7);

        VAR_13.X = VAR_13.Y = 100.0;
        VAR_7 = FUNC_19(VAR_10, VAR_1, VAR_0, &VAR_13, 1);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_13(VAR_10, VAR_12, VAR_13.X/2, 0, VAR_13.X/2, VAR_13.Y);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_13(VAR_10, VAR_12, 0, VAR_13.Y/2, VAR_13.X, VAR_13.Y/2);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_2(VAR_11.bitmap, ((void*)0), VAR_3, VAR_5, &VAR_15);
        FUNC_20(VAR_4, VAR_7);

        VAR_16 = -1;
        VAR_17 = -2;

        for (VAR_9=0; VAR_9<100; VAR_9++)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_9*3] == 0xff)
            {
                VAR_16 = VAR_9;
                break;
            }
        }

        for (VAR_9=99; VAR_9>=0; VAR_9--)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_9*3] == 0xff)
            {
                VAR_17 = VAR_9;
                break;
            }
        }

        VAR_18 = VAR_17-VAR_16+1;

        FUNC_21(VAR_18 == VAR_6[VAR_8].cx, "%u: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].cx, VAR_18);

        VAR_16 = -1;
        VAR_17 = -2;

        for (VAR_9=0; VAR_9<100; VAR_9++)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_15.Stride*VAR_9] == 0xff)
            {
                VAR_16 = VAR_9;
                break;
            }
        }

        for (VAR_9=99; VAR_9>=0; VAR_9--)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_15.Stride*VAR_9] == 0xff)
            {
                VAR_17 = VAR_9;
                break;
            }
        }

        VAR_18 = VAR_17-VAR_16+1;

        FUNC_21(VAR_18 == VAR_6[VAR_8].cy, "%u: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].cy, VAR_18);

        VAR_7 = FUNC_4(VAR_11.bitmap, &VAR_15);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_16(VAR_10, 0xff000000);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_7(VAR_2, &VAR_14);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_1(VAR_14, VAR_13.X/2, 0, VAR_13.X/2, VAR_13.Y);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_5(VAR_14);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_1(VAR_14, 0, VAR_13.Y/2, VAR_13.X, VAR_13.Y/2);
        FUNC_20(VAR_4, VAR_7);

        VAR_7 = FUNC_14(VAR_10, VAR_12, VAR_14);
        FUNC_20(VAR_4, VAR_7);

        FUNC_10(VAR_14);

        VAR_7 = FUNC_2(VAR_11.bitmap, ((void*)0), VAR_3, VAR_5, &VAR_15);
        FUNC_20(VAR_4, VAR_7);

        VAR_16 = -1;
        VAR_17 = -2;

        for (VAR_9=0; VAR_9<100; VAR_9++)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_9*3] == 0xff)
            {
                VAR_16 = VAR_9;
                break;
            }
        }

        for (VAR_9=99; VAR_9>=0; VAR_9--)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_9*3] == 0xff)
            {
                VAR_17 = VAR_9;
                break;
            }
        }

        VAR_18 = VAR_17-VAR_16+1;

        FUNC_21(VAR_18 == VAR_6[VAR_8].path_cx, "%u: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].path_cx, VAR_18);

        VAR_16 = -1;
        VAR_17 = -2;

        for (VAR_9=0; VAR_9<100; VAR_9++)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_15.Stride*VAR_9] == 0xff)
            {
                VAR_16 = VAR_9;
                break;
            }
        }

        for (VAR_9=99; VAR_9>=0; VAR_9--)
        {
            if (((BYTE*)VAR_15.Scan0)[VAR_15.Stride*VAR_9] == 0xff)
            {
                VAR_17 = VAR_9;
                break;
            }
        }

        VAR_18 = VAR_17-VAR_16+1;

        FUNC_21(VAR_18 == VAR_6[VAR_8].path_cy, "%u: expected %d, got %d\n", VAR_8, VAR_6[VAR_8].path_cy, VAR_18);

        VAR_7 = FUNC_4(VAR_11.bitmap, &VAR_15);
        FUNC_20(VAR_4, VAR_7);

        FUNC_11(VAR_12);
        FUNC_9(VAR_10);
        FUNC_12(VAR_11.image);
    }
}
