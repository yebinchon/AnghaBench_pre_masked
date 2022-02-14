
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {double member_0; double member_1; } ;
struct TYPE_5__ {double member_0; double member_1; double member_2; double member_3; } ;
typedef int HENHMETAFILE ;
typedef int HDC ;
typedef int GpStatus ;
typedef TYPE_1__ GpRectF ;
typedef TYPE_2__ GpPointF ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBitmap ;
typedef int ARGB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int,int*) ;
 int FUNC_4 (int,int,int ,int ,int *,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,TYPE_2__ const*,int,double,double,double,double,int ,int *,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int **) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ,int ,char*) ;
 int VAR_6 ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int **,char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    GpStatus VAR_7;
    GpMetafile *VAR_8;
    GpGraphics *VAR_9;
    HDC VAR_10;
    HENHMETAFILE VAR_11;
    static const GpRectF VAR_12 = {0.0, 0.0, 100.0, 100.0};
    static const GpPointF VAR_13[3] = {{10.0,10.0},{20.0,10.0},{10.0,20.0}};
    static const WCHAR VAR_14[] = {'w','i','n','e','t','e','s','t',0};
    GpBitmap *VAR_15;
    ARGB VAR_16;

    VAR_10 = FUNC_0(0);

    VAR_7 = FUNC_11(VAR_10, VAR_0, &VAR_12, VAR_2, VAR_14, &VAR_8);
    FUNC_13(VAR_3, VAR_7);

    FUNC_1(VAR_10);

    if (VAR_7 != VAR_3)
        return;

    VAR_7 = FUNC_8(VAR_8, &VAR_11);
    FUNC_13(VAR_1, VAR_7);

    VAR_7 = FUNC_9((GpImage*)VAR_8, &VAR_9);
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_10(VAR_9, 0xffffff00);
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_5(VAR_9);
    FUNC_13(VAR_3, VAR_7);

    FUNC_14(&VAR_8, "clear.emf");

    VAR_7 = FUNC_4(30, 30, 0, VAR_4, ((void*)0), &VAR_15);
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_9((GpImage*)VAR_15, &VAR_9);
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_7(VAR_9, (GpImage*)VAR_8, VAR_13, 3,
        0.0, 0.0, 100.0, 100.0, VAR_5, ((void*)0), ((void*)0), ((void*)0));
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_3(VAR_15, 5, 5, &VAR_16);
    FUNC_13(VAR_3, VAR_7);
    FUNC_13(0xff000000, VAR_16);

    VAR_7 = FUNC_3(VAR_15, 15, 15, &VAR_16);
    FUNC_13(VAR_3, VAR_7);
    FUNC_13(0xffffff00, VAR_16);

    VAR_7 = FUNC_3(VAR_15, 25, 25, &VAR_16);
    FUNC_13(VAR_3, VAR_7);
    FUNC_13(0xff000000, VAR_16);

    VAR_7 = FUNC_5(VAR_9);
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_6((GpImage*)VAR_15);
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_8(VAR_8, &VAR_11);
    FUNC_13(VAR_3, VAR_7);

    VAR_7 = FUNC_6((GpImage*)VAR_8);
    FUNC_13(VAR_3, VAR_7);

    FUNC_12(VAR_11, VAR_6, "clear emf");

    FUNC_2(VAR_11);
}
