
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dllpath ;
typedef int * HINSTANCE ;


 int FUNC_0 (int *,char*,int) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static HINSTANCE FUNC_4()
{
    HINSTANCE VAR_1;
    char VAR_2[VAR_0];
    char* VAR_3;

    VAR_1=FUNC_1("hook.dll");
    if (VAR_1 != ((void*)0))
        return VAR_1;

    if (!FUNC_0(((void*)0),VAR_2,sizeof(VAR_2)))
        return ((void*)0);

    VAR_3=FUNC_3(VAR_2,'\\');
    if (!VAR_3)
        return ((void*)0);
    *VAR_3='\0';
    VAR_3=FUNC_3(VAR_2,'\\');
    if (!VAR_3)
        return ((void*)0);
    *VAR_3='\0';
    FUNC_2(VAR_2,"\\hookdll\\hook.dll");
    VAR_1=FUNC_1(VAR_2);
    return VAR_1;
}
