
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HDC ;
typedef int GpStatus ;
typedef int GpGraphics ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    HDC VAR_3;
    GpStatus VAR_4;
    GpGraphics *VAR_5;

    if (!&FUNC_5)
    {
        FUNC_6("GdipGraphicsSetAbort() is not supported.\n");
        return;
    }

    VAR_3 = FUNC_2(VAR_2);

    VAR_4 = FUNC_0(VAR_3, &VAR_5);
    FUNC_4(VAR_1, VAR_4);

    VAR_4 = FUNC_5(((void*)0), ((void*)0));
    FUNC_4(VAR_0, VAR_4);

    VAR_4 = FUNC_5(VAR_5, ((void*)0));
    FUNC_4(VAR_1, VAR_4);

    FUNC_1(VAR_5);

    FUNC_3(VAR_2, VAR_3);
}
