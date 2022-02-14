
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef int GLubyte ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int ,int const*) ;
 void* FUNC_2 (int const*) ;

__attribute__((used)) static void *FUNC_3(const GLubyte *VAR_0)
{
    HMODULE VAR_1;
    void *VAR_2 = FUNC_2(VAR_0);
    if (VAR_2)
        return VAR_2;
    VAR_1 = FUNC_0(L"opengl32.dll");
    return FUNC_1(VAR_1, VAR_0);
}
