
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PDWORD ;
typedef int PBYTE ;
typedef int NTSTATUS ;
typedef int IFInfo ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;

DWORD FUNC_5(DWORD VAR_1, PDWORD VAR_2, PBYTE VAR_3,
 PDWORD VAR_4)
{
    HANDLE VAR_5;
    IFInfo VAR_6;
    NTSTATUS VAR_7 = FUNC_4( &VAR_5, VAR_0 );

    if( FUNC_0(VAR_7) ) {
        VAR_7 = FUNC_2( VAR_5, VAR_1, &VAR_6 );
        if( FUNC_0(VAR_7) )
            FUNC_3( &VAR_6, VAR_2, VAR_3, VAR_4 );
        FUNC_1( VAR_5 );
    }

    return VAR_7;
}
