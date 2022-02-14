
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* LPBYTE ;
typedef int DWORD ;



__attribute__((used)) static DWORD FUNC_0( LPBYTE VAR_0, DWORD VAR_1, DWORD VAR_2 )
{
    if( VAR_0 )
    {
        VAR_0[VAR_1++] = VAR_2&0xff;
        VAR_0[VAR_1++] = (VAR_2>>8)&0xff;
        VAR_0[VAR_1++] = (VAR_2>>16)&0xff;
        VAR_0[VAR_1++] = (VAR_2>>24)&0xff;
    }
    return 4;
}
