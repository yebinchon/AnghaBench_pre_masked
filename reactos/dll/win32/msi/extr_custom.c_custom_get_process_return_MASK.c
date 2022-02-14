
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_2( HANDLE VAR_2 )
{
    DWORD VAR_3 = 0;

    FUNC_0( VAR_2, &VAR_3 );
    FUNC_1("exit code is %u\n", VAR_3);
    if (VAR_3 != 0)
        return VAR_0;
    return VAR_1;
}
