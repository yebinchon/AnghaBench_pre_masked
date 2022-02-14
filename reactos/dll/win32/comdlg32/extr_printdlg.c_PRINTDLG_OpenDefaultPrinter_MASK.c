
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static BOOL FUNC_5(HANDLE *VAR_1)
{
    WCHAR VAR_2[260];
    DWORD VAR_3 = FUNC_0(VAR_2);
    BOOL VAR_4;
    if(!FUNC_1(VAR_2, &VAR_3))
        return VAR_0;
    VAR_4 = FUNC_2(VAR_2, VAR_1, ((void*)0));
    if (!VAR_4)
        FUNC_3("Could not open printer %s\n", FUNC_4(VAR_2));
    return VAR_4;
}
