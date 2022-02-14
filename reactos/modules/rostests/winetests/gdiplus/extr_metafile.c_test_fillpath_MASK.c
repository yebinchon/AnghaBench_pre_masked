
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {double member_0; double member_1; double member_2; double member_3; } ;
typedef int HENHMETAFILE ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpSolidFill ;
typedef TYPE_1__ GpRectF ;
typedef int GpPath ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int GpBrush ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int,int,int,int) ;
 int FUNC_6 (char const*,int *,int **) ;
 int FUNC_7 (int ,int **) ;
 int FUNC_8 (int,int **) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int **) ;
 int FUNC_16 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_17 (int ,int ,char*) ;
 int FUNC_18 (int ,int ) ;
 int VAR_5 ;
 int FUNC_19 (int **,char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    static const WCHAR VAR_6[] = {'w','i','n','e','t','e','s','t',0};
    static const GpRectF VAR_7 = {0.0, 0.0, 100.0, 100.0};
    static const WCHAR VAR_8[] = {'w','i','n','e','t','e','s','t','.','e','m','f',0};

    GpMetafile *VAR_9;
    GpGraphics *VAR_10;
    GpSolidFill *VAR_11;
    HENHMETAFILE VAR_12;
    GpStatus VAR_13;
    GpPath *VAR_14;
    HDC VAR_15;

    VAR_15 = FUNC_1(0);
    VAR_13 = FUNC_16(VAR_15, VAR_0, &VAR_7, VAR_3, VAR_6, &VAR_9);
    FUNC_18(VAR_4, VAR_13);
    FUNC_2(VAR_15);

    VAR_13 = FUNC_15((GpImage*)VAR_9, &VAR_10);
    FUNC_18(VAR_4, VAR_13);

    VAR_13 = FUNC_7(VAR_1, &VAR_14);
    FUNC_18(VAR_4, VAR_13);
    VAR_13 = FUNC_5(VAR_14, 5, 5, 30, 30);
    FUNC_18(VAR_4, VAR_13);
    VAR_13 = FUNC_5(VAR_14, 30, 30, 5, 30);
    FUNC_18(VAR_4, VAR_13);

    VAR_13 = FUNC_8(0xffaabbcc, &VAR_11);
    FUNC_18(VAR_4, VAR_13);

    VAR_13 = FUNC_13(VAR_10, (GpBrush*)VAR_11, VAR_14);
    FUNC_18(VAR_4, VAR_13);

    VAR_13 = FUNC_9((GpBrush*)VAR_11);
    FUNC_18(VAR_4, VAR_13);
    VAR_13 = FUNC_11(VAR_14);
    FUNC_18(VAR_4, VAR_13);

    VAR_13 = FUNC_10(VAR_10);
    FUNC_18(VAR_4, VAR_13);
    FUNC_19(&VAR_9, "fill_path.emf");

    VAR_13 = FUNC_14(VAR_9, &VAR_12);
    FUNC_18(VAR_4, VAR_13);

    FUNC_17(VAR_12, VAR_5, "fill path");


    FUNC_3(FUNC_0(VAR_12, VAR_8));

    FUNC_3(VAR_12);

    VAR_13 = FUNC_12((GpImage*)VAR_9);
    FUNC_18(VAR_4, VAR_13);


    VAR_13 = FUNC_6(VAR_8, ((void*)0), &VAR_9);
    FUNC_18(VAR_4, VAR_13);

    VAR_13 = FUNC_12((GpImage*)VAR_9);
    FUNC_18(VAR_4, VAR_13);

    FUNC_4(VAR_8);

    VAR_13 = FUNC_6(VAR_8, ((void*)0), &VAR_9);
    FUNC_18(VAR_2, VAR_13);
}
