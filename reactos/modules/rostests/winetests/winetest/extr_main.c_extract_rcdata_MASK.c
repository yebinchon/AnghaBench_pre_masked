
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* LPVOID ;
typedef int LPTSTR ;
typedef int HRSRC ;
typedef int HGLOBAL ;
typedef int DWORD ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void* FUNC_5 (LPTSTR VAR_0, int VAR_1, DWORD* VAR_2)
{
    HRSRC VAR_3;
    HGLOBAL VAR_4;
    LPVOID VAR_5;

    if (!(VAR_3 = FUNC_0 (((void*)0), VAR_0, FUNC_3(VAR_1))) ||
        !(*VAR_2 = FUNC_4 (0, VAR_3)) ||
        !(VAR_4 = FUNC_1 (0, VAR_3)) ||
        !(VAR_5 = FUNC_2 (VAR_4)))
        return ((void*)0);
    return VAR_5;
}
