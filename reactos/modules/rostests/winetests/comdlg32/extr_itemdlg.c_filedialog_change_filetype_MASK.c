
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int IFileDialog ;
typedef int * HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *,float const*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(IFileDialog *VAR_4, HWND VAR_5)
{
    HWND VAR_6;
    const WCHAR VAR_7[] = {'f','n','a','m','e','1',0};
    const WCHAR VAR_8[] = {'f','n','a','m','e','1',' ', '(','*','.','t','x','t',')',0};

    VAR_6 = FUNC_2(VAR_5, ((void*)0), VAR_7);
    FUNC_3(VAR_6 != ((void*)0) || FUNC_1(VAR_6 == ((void*)0)), "Could not find combobox on first attempt\n");

    if(!VAR_6)
    {


        FUNC_4("Didn't find combobox on first attempt, trying broken string..\n");
        VAR_6 = FUNC_2(VAR_5, ((void*)0), VAR_8);
        FUNC_3(FUNC_1(VAR_6 != ((void*)0)), "Failed to find combobox on second attempt\n");
        if(!VAR_6)
            return;
    }


    FUNC_0( VAR_6, VAR_1, 1, 0 );
    FUNC_0( VAR_6, VAR_0, 1, 0 );
    FUNC_0( VAR_6, VAR_2, 0, -1 );
    FUNC_0( VAR_6, VAR_3, 0, -1 );
}
