
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,char*,int*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_2( MSIHANDLE VAR_1, const char * VAR_2)
{
    UINT VAR_3;
    DWORD VAR_4;
    char VAR_5[2];

    VAR_4 = sizeof VAR_5;
    FUNC_1(VAR_5,"x");
    VAR_3 = FUNC_0( VAR_1, VAR_2, VAR_5, &VAR_4 );
    return VAR_3 == VAR_0 && VAR_5[0] == 0 && VAR_4 == 0;
}
