
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char const*,int ,int *,int ,int *) ;

DWORD FUNC_1( HKEY VAR_1, HKEY VAR_2, const char *VAR_3,
                             char *VAR_4, DWORD VAR_5 )
{
    if (VAR_2 && !FUNC_0( VAR_2, VAR_3, 0, ((void*)0), (LPBYTE)VAR_4, &VAR_5 ))
        return 0;

    if (VAR_1 && !FUNC_0( VAR_1, VAR_3, 0, ((void*)0), (LPBYTE)VAR_4, &VAR_5 ))
        return 0;

    return VAR_0;
}
