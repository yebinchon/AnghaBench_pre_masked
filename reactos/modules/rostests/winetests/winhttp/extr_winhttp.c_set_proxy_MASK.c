
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REGSAM ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,scalar_t__,int *,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4( REGSAM VAR_3, BYTE *VAR_4, DWORD VAR_5, DWORD VAR_6 )
{
    HKEY VAR_7;
    if (!FUNC_1( VAR_1, VAR_0, 0, ((void*)0), 0, VAR_3, ((void*)0), &VAR_7, ((void*)0) ))
    {
        if (VAR_5) FUNC_3( VAR_7, VAR_2, 0, VAR_6, VAR_4, VAR_5 );
        else FUNC_2( VAR_7, VAR_2 );
        FUNC_0( VAR_7 );
    }
}
