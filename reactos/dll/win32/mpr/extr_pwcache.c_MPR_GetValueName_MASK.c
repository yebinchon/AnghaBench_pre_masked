
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef scalar_t__* LPSTR ;
typedef int* LPCSTR ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,scalar_t__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,char*,int) ;

__attribute__((used)) static LPSTR FUNC_5( LPCSTR VAR_0, WORD VAR_1, BYTE VAR_2 )
{
    LPSTR VAR_3;
    DWORD VAR_4;

    VAR_3 = FUNC_1( FUNC_0(), 0, 6+VAR_1*2 );
    if( !VAR_3 ) return ((void*)0);

    FUNC_4( VAR_3, "X-%02X-", VAR_2 );
    for(VAR_4=0; VAR_4<VAR_1; VAR_4++)
    {
        VAR_3[5+VAR_4*2]=FUNC_3((VAR_0[VAR_4]&0xf0)>>4);
        VAR_3[6+VAR_4*2]=FUNC_3(VAR_0[VAR_4]&0x0f);
    }
    VAR_3[5+VAR_4*2]=0;
    FUNC_2( "Value is %s\n", VAR_3 );
    return VAR_3;
}
