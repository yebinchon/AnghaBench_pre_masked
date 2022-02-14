
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int todo_wine ;
struct GdiplusStartupInput {int GdiplusVersion; scalar_t__ SuppressExternalCodecs; scalar_t__ SuppressBackgroundThread; int * DebugEventCallback; } ;
typedef int status ;
typedef int ULONG_PTR ;
typedef int Status ;
typedef int GpPen ;
typedef int GdiplusNotInitialized ;
typedef int ARGB ;


 int FUNC_0 (int ,float,int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct GdiplusStartupInput*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    GpPen *VAR_3 = ((void*)0);
    Status VAR_4;
    struct GdiplusStartupInput VAR_5;
    ULONG_PTR VAR_6;
    int VAR_7;

    VAR_5.DebugEventCallback = ((void*)0);
    VAR_5.SuppressBackgroundThread = 0;
    VAR_5.SuppressExternalCodecs = 0;

    for (VAR_7=1; VAR_7<256; VAR_7++)
    {
        VAR_5.GdiplusVersion = VAR_7;
        VAR_4 = FUNC_3(&VAR_6, &VAR_5, ((void*)0));
        FUNC_4(VAR_4 == VAR_0 || VAR_4 == VAR_2,
            "GdiplusStartup returned %x\n", VAR_4);
        FUNC_2(VAR_6);
        if (VAR_4 != VAR_0)
        {
            VAR_7--;
            break;
        }
    }

    FUNC_4(VAR_7 > 0 && VAR_7 <= 2, "unexpected gdiplus version %i\n", VAR_7);
    FUNC_5("gdiplus version is %i\n", VAR_7);

    VAR_4 = FUNC_0((ARGB)0xffff00ff, 10.0f, VAR_1, &VAR_3);

    todo_wine
        FUNC_7(GdiplusNotInitialized, VAR_8);

    FUNC_1(VAR_3);
}
