
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int INT ;
typedef int GpStatus ;
typedef int GpFontFamily ;
typedef int GpFontCollection ;
typedef int GpFont ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,double,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int,int **,int*) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (char const*,int,char*) ;
 int FUNC_10 (int,char*,int) ;

__attribute__((used)) static void FUNC_11(void)
{
    WCHAR VAR_6[VAR_3];
    static const WCHAR VAR_7[] = {'w','i','n','e','_','l','o','n','g','n','a','m','e','.','t','t','f',0};
    GpStatus VAR_8;
    GpFontCollection *VAR_9;
    INT VAR_10;
    GpFontFamily *VAR_11;
    WCHAR VAR_12[VAR_2];
    GpFont *VAR_13;

    VAR_8 = FUNC_7(&VAR_9);
    FUNC_10(VAR_8 == VAR_4, "GdipNewPrivateFontCollection failed: %d\n", VAR_8);

    FUNC_9(VAR_7, 1, VAR_6);

    VAR_8 = FUNC_8(VAR_9, VAR_6);
    FUNC_10(VAR_8 == VAR_4, "GdipPrivateAddFontFile failed: %d\n", VAR_8);

    VAR_8 = FUNC_5(VAR_9, &VAR_10);
    FUNC_10(VAR_8 == VAR_4, "GdipGetFontCollectionFamilyCount failed: %d\n", VAR_8);

    FUNC_10(VAR_10 == 1, "expected num_families to be 1, got %d\n", VAR_10);

    VAR_8 = FUNC_6(VAR_9, VAR_10, &VAR_11, &VAR_10);
    FUNC_10(VAR_8 == VAR_4, "GdipGetFontCollectionFamilyList failed: %d\n", VAR_8);

    VAR_8 = FUNC_4(VAR_11, VAR_12, VAR_1);
    FUNC_10(VAR_8 == VAR_4, "GdipGetFamilyName failed: %d\n", VAR_8);

    VAR_8 = FUNC_1(VAR_11, 256.0, VAR_0, VAR_5, &VAR_13);
    FUNC_10(VAR_8 == VAR_4, "GdipCreateFont failed: %d\n", VAR_8);



    VAR_8 = FUNC_2(VAR_13);
    FUNC_10(VAR_8 == VAR_4, "GdipDeleteFont failed: %d\n", VAR_8);

    VAR_8 = FUNC_3(&VAR_9);
    FUNC_10(VAR_8 == VAR_4, "GdipDeletePrivateFontCollection failed: %d\n", VAR_8);

    FUNC_0(VAR_6);
}
