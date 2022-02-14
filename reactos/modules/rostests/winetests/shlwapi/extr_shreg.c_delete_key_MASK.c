
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static DWORD FUNC_3( HKEY VAR_3, LPCSTR VAR_4, LPCSTR VAR_5 )
{
    HKEY VAR_6;
    DWORD VAR_7;

    FUNC_0(VAR_3);


    VAR_7 = FUNC_1( VAR_1, VAR_4, 0, VAR_2, &VAR_6);
    if (VAR_7 != VAR_0)
        return VAR_7;

    VAR_7 = FUNC_2( VAR_6, VAR_5 );
    FUNC_0(VAR_6);

    return VAR_7;
}
