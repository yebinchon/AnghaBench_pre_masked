
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {double member_0; double member_1; double member_2; double member_3; double Width; double Height; int Y; int X; } ;
typedef double REAL ;
typedef int HDC ;
typedef scalar_t__ GpUnit ;
typedef scalar_t__ GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *,double*) ;
 scalar_t__ FUNC_7 (int *,double*) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (double,int ) ;
 int FUNC_12 (double,double,double) ;
 int FUNC_13 (int,char*,double) ;

__attribute__((used)) static void FUNC_14(void)
{
    GpStatus VAR_4;
    GpMetafile *VAR_5;
    GpGraphics *VAR_6;
    HDC VAR_7;
    static const GpRectF VAR_8 = {0.0, 0.0, 5.0, 5.0};
    static const WCHAR VAR_9[] = {'w','i','n','e','t','e','s','t',0};
    GpUnit VAR_10;
    REAL VAR_11, VAR_12;
    GpRectF VAR_13;

    VAR_7 = FUNC_0(0);

    VAR_4 = FUNC_8(VAR_7, VAR_0, &VAR_8, VAR_1, VAR_9, &VAR_5);
    FUNC_10(VAR_2, VAR_4);

    FUNC_1(VAR_7);

    if (VAR_4 != VAR_2)
        return;

    VAR_4 = FUNC_4((GpImage*)VAR_5, &VAR_13, &VAR_10);
    FUNC_10(VAR_2, VAR_4);
    FUNC_10(VAR_3, VAR_10);
    FUNC_11(0.0, VAR_13.X);
    FUNC_11(0.0, VAR_13.Y);
    FUNC_13(VAR_13.Width == 1.0 || FUNC_9(VAR_13.Width == 0.0) ,
        "expected 1.0, got %f\n", VAR_13.Width);
    FUNC_13(VAR_13.Height == 1.0 || FUNC_9(VAR_13.Height == 0.0) ,
        "expected 1.0, got %f\n", VAR_13.Height);

    VAR_4 = FUNC_5((GpImage*)VAR_5, &VAR_6);
    FUNC_10(VAR_2, VAR_4);

    VAR_4 = FUNC_4((GpImage*)VAR_5, &VAR_13, &VAR_10);
    FUNC_10(VAR_2, VAR_4);
    FUNC_10(VAR_3, VAR_10);
    FUNC_11(0.0, VAR_13.X);
    FUNC_11(0.0, VAR_13.Y);
    FUNC_13(VAR_13.Width == 1.0 || FUNC_9(VAR_13.Width == 0.0) ,
        "expected 1.0, got %f\n", VAR_13.Width);
    FUNC_13(VAR_13.Height == 1.0 || FUNC_9(VAR_13.Height == 0.0) ,
        "expected 1.0, got %f\n", VAR_13.Height);

    VAR_4 = FUNC_2(VAR_6);
    FUNC_10(VAR_2, VAR_4);

    VAR_4 = FUNC_6((GpImage*)VAR_5, &VAR_11);
    FUNC_10(VAR_2, VAR_4);

    VAR_4 = FUNC_7((GpImage*)VAR_5, &VAR_12);
    FUNC_10(VAR_2, VAR_4);

    VAR_4 = FUNC_4((GpImage*)VAR_5, &VAR_13, &VAR_10);
    FUNC_10(VAR_2, VAR_4);
    FUNC_10(VAR_3, VAR_10);
    FUNC_11(0.0, VAR_13.X);
    FUNC_11(0.0, VAR_13.Y);
    FUNC_12(5.0 * VAR_11, VAR_13.Width, 1.0);
    FUNC_12(5.0 * VAR_12, VAR_13.Height, 1.0);

    VAR_4 = FUNC_3((GpImage*)VAR_5);
    FUNC_10(VAR_2, VAR_4);
}
