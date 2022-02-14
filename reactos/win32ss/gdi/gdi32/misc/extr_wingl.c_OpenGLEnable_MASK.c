
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int * HMODULE ;
typedef int FARPROC ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    HMODULE VAR_8;
    BOOL VAR_9 = VAR_1;

    VAR_8 = FUNC_2(L"OPENGL32.DLL");
    if (VAR_8 == ((void*)0))
        return VAR_0;

    if (FUNC_1((PVOID*)&VAR_7,
                                          (PVOID)VAR_8,
                                          ((void*)0)) != ((void*)0))
    {
        FUNC_0(VAR_8);





    }


    if (!FUNC_3("wglChoosePixelFormat", (FARPROC*)&VAR_2))
        VAR_9 = VAR_0;

    if (!FUNC_3("wglSetPixelFormat", (FARPROC*)&VAR_5))
        VAR_9 = VAR_0;

    if (!FUNC_3("wglSwapBuffers", (FARPROC*)&VAR_6))
        VAR_9 = VAR_0;

    if (!FUNC_3("wglDescribePixelFormat", (FARPROC*)&VAR_3))
        VAR_9 = VAR_0;

    if (!FUNC_3("wglGetPixelFormat", (FARPROC*)&VAR_4))
        VAR_9 = VAR_0;

    return VAR_9;
}
