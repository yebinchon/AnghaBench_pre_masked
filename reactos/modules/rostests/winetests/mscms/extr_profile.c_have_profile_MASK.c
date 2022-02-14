
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WIN32_FIND_DATAA ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int *) ;

__attribute__((used)) static BOOL FUNC_4(void)
{
    char VAR_4[VAR_2 + sizeof("\\*.icm")];
    DWORD VAR_5 = VAR_2;
    HANDLE VAR_6;
    WIN32_FIND_DATAA VAR_7;

    if (!FUNC_3( ((void*)0), VAR_4, &VAR_5 )) return VAR_0;
    FUNC_2( VAR_4, "\\*.icm" );
    VAR_6 = FUNC_1( VAR_4, &VAR_7 );
    if (VAR_6 == VAR_1) return VAR_0;
    FUNC_0( VAR_6 );
    return VAR_3;
}
