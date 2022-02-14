
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int * HICON ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int ,int ,int **,int **,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HICON VAR_0=((void*)0), VAR_1=((void*)0);
    HRESULT VAR_2;

    if (!&FUNC_4)
    {
        FUNC_5("SHDefExtractIconA is unavailable\n");
        return;
    }

    VAR_2 = FUNC_4("shell32.dll", 0, 0, &VAR_0, &VAR_1, FUNC_1(16,24));
    FUNC_3(FUNC_2(VAR_2), "SHDefExtractIconA failed, res=%x\n", VAR_2);
    FUNC_3(VAR_0 != ((void*)0), "got null hiconlarge\n");
    FUNC_3(VAR_1 != ((void*)0), "got null hiconsmall\n");
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    VAR_1 = ((void*)0);
    VAR_2 = FUNC_4("shell32.dll", 0, 0, ((void*)0), &VAR_1, FUNC_1(16,24));
    FUNC_3(FUNC_2(VAR_2), "SHDefExtractIconA failed, res=%x\n", VAR_2);
    FUNC_3(VAR_1 != ((void*)0), "got null hiconsmall\n");
    FUNC_0(VAR_1);

    VAR_2 = FUNC_4("shell32.dll", 0, 0, ((void*)0), ((void*)0), FUNC_1(16,24));
    FUNC_3(FUNC_2(VAR_2), "SHDefExtractIconA failed, res=%x\n", VAR_2);
}
