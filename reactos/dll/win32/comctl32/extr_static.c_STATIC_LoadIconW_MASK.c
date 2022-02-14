
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int LPCWSTR ;
typedef scalar_t__ HINSTANCE ;
typedef scalar_t__ HICON ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HICON FUNC_3( HINSTANCE VAR_3, LPCWSTR VAR_4, DWORD VAR_5 )
{
    HICON VAR_6 = 0;

    if (VAR_3 && ((ULONG_PTR)VAR_3 >> 16))
    {
        if ((VAR_5 & VAR_2) != 0)
            VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_0, 0, 0, VAR_1);
        else
        {
            VAR_6 = FUNC_1( VAR_3, VAR_4 );
            if (!VAR_6) VAR_6 = FUNC_0( VAR_3, VAR_4 );
        }
    }
    if (!VAR_6) VAR_6 = FUNC_1( 0, VAR_4 );



    return VAR_6;
}
