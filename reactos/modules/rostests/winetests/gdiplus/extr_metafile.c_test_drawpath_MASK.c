
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
typedef TYPE_1__ GpRectF ;
typedef int GpPen ;
typedef int GpPath ;
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;
typedef int ARGB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int,int,int,int) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int ,float,int ,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int **) ;
 int FUNC_13 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int **,char*) ;

__attribute__((used)) static void FUNC_17(void)
{
    static const WCHAR VAR_6[] = {'w','i','n','e','t','e','s','t',0};
    static const GpRectF VAR_7 = {0.0, 0.0, 100.0, 100.0};

    GpMetafile *VAR_8;
    GpGraphics *VAR_9;
    HENHMETAFILE VAR_10;
    GpStatus VAR_11;
    GpPath *VAR_12;
    GpPen *VAR_13;
    HDC VAR_14;

    VAR_14 = FUNC_0(0);
    VAR_11 = FUNC_13(VAR_14, VAR_0, &VAR_7, VAR_2, VAR_6, &VAR_8);
    FUNC_15(VAR_3, VAR_11);
    FUNC_1(VAR_14);

    VAR_11 = FUNC_12((GpImage*)VAR_8, &VAR_9);
    FUNC_15(VAR_3, VAR_11);

    VAR_11 = FUNC_4(VAR_1, &VAR_12);
    FUNC_15(VAR_3, VAR_11);
    VAR_11 = FUNC_3(VAR_12, 5, 5, 30, 30);
    FUNC_15(VAR_3, VAR_11);

    VAR_11 = FUNC_5((ARGB)0xffff00ff, 10.0f, VAR_4, &VAR_13);
    FUNC_15(VAR_3, VAR_11);

    VAR_11 = FUNC_10(VAR_9, VAR_13, VAR_12);
    FUNC_15(VAR_3, VAR_11);

    VAR_11 = FUNC_8(VAR_13);
    FUNC_15(VAR_3, VAR_11);
    VAR_11 = FUNC_7(VAR_12);
    FUNC_15(VAR_3, VAR_11);

    VAR_11 = FUNC_6(VAR_9);
    FUNC_15(VAR_3, VAR_11);
    FUNC_16(&VAR_8, "draw_path.emf");

    VAR_11 = FUNC_11(VAR_8, &VAR_10);
    FUNC_15(VAR_3, VAR_11);

    FUNC_14(VAR_10, VAR_5, "draw path");
    FUNC_2(VAR_10);

    VAR_11 = FUNC_9((GpImage*)VAR_8);
    FUNC_15(VAR_3, VAR_11);
}
