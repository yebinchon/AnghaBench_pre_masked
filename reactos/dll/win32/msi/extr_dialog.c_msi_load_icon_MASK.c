
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;
typedef int HICON ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HICON FUNC_1( MSIDATABASE *VAR_6, LPCWSTR VAR_7, UINT VAR_8 )
{
    DWORD VAR_9 = 0, VAR_10 = 0, VAR_11;

    VAR_11 = VAR_2 | VAR_1;
    if( VAR_8 & VAR_3 )
    {
        VAR_11 &= ~VAR_1;
        if( VAR_8 & VAR_4 )
        {
            VAR_9 += 16;
            VAR_10 += 16;
        }
        if( VAR_8 & VAR_5 )
        {
            VAR_9 += 32;
            VAR_10 += 32;
        }

    }
    return FUNC_0( VAR_6, VAR_7, VAR_0, VAR_9, VAR_10, VAR_11 );
}
