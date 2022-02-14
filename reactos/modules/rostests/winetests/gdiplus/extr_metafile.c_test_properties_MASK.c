
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
typedef int GpMetafile ;
typedef int GpImage ;
typedef int GpGraphics ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int ,int ,TYPE_1__ const*,int ,char const*,int **) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int ,int ,char*) ;
 int FUNC_15 (int ,int ) ;
 int VAR_12 ;
 int FUNC_16 (int **,char*) ;

__attribute__((used)) static void FUNC_17(void)
{
    static const WCHAR VAR_13[] = {'w','i','n','e','t','e','s','t',0};
    static const GpRectF VAR_14 = {0.0, 0.0, 100.0, 100.0};

    GpMetafile *VAR_15;
    GpGraphics *VAR_16;
    HENHMETAFILE VAR_17;
    GpStatus VAR_18;
    HDC VAR_19;

    VAR_19 = FUNC_0(0);
    VAR_18 = FUNC_7(VAR_19, VAR_3, &VAR_14, VAR_6, VAR_13, &VAR_15);
    FUNC_15(VAR_7, VAR_18);
    FUNC_1(VAR_19);

    VAR_18 = FUNC_6((GpImage*)VAR_15, &VAR_16);
    FUNC_15(VAR_7, VAR_18);

    VAR_18 = FUNC_13(VAR_16, VAR_11);
    FUNC_15(VAR_7, VAR_18);
    VAR_18 = FUNC_13(VAR_16, VAR_10);
    FUNC_15(VAR_7, VAR_18);

    VAR_18 = FUNC_11(VAR_16, VAR_8);
    FUNC_15(VAR_7, VAR_18);
    VAR_18 = FUNC_11(VAR_16, VAR_8);
    FUNC_15(VAR_7, VAR_18);

    VAR_18 = FUNC_12(VAR_16, VAR_9);
    FUNC_15(VAR_7, VAR_18);
    VAR_18 = FUNC_12(VAR_16, VAR_9);
    FUNC_15(VAR_7, VAR_18);

    VAR_18 = FUNC_8(VAR_16, VAR_1);
    FUNC_15(VAR_7, VAR_18);
    VAR_18 = FUNC_8(VAR_16, VAR_0);
    FUNC_15(VAR_7, VAR_18);

    VAR_18 = FUNC_9(VAR_16, VAR_2);
    FUNC_15(VAR_7, VAR_18);
    VAR_18 = FUNC_9(VAR_16, VAR_2);
    FUNC_15(VAR_7, VAR_18);

    VAR_18 = FUNC_10(VAR_16, VAR_4);
    FUNC_15(VAR_7, VAR_18);
    VAR_18 = FUNC_10(VAR_16, VAR_5);
    FUNC_15(VAR_7, VAR_18);

    VAR_18 = FUNC_3(VAR_16);
    FUNC_15(VAR_7, VAR_18);
    FUNC_16(&VAR_15, "properties.emf");

    VAR_18 = FUNC_5(VAR_15, &VAR_17);
    FUNC_15(VAR_7, VAR_18);

    FUNC_14(VAR_17, VAR_12, "properties");
    FUNC_2(VAR_17);

    VAR_18 = FUNC_4((GpImage*)VAR_15);
    FUNC_15(VAR_7, VAR_18);
}
