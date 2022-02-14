
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3( BYTE *VAR_3, DWORD VAR_4, DWORD VAR_5 )
{
    BOOL VAR_6;
    FUNC_1( FUNC_0(), &VAR_6 );
    if (sizeof(void *) > sizeof(int) || VAR_6)
    {
        FUNC_2( VAR_2|VAR_1, VAR_3, VAR_4, VAR_5 );
        FUNC_2( VAR_2|VAR_0, VAR_3, VAR_4, VAR_5 );
    }
    else
        FUNC_2( VAR_2, VAR_3, VAR_4, VAR_5 );
}
