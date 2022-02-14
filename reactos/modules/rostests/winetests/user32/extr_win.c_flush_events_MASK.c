
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int ,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_4( BOOL VAR_4 )
{
    MSG VAR_5;
    int VAR_6 = 200;
    int VAR_7 = 100;
    DWORD VAR_8 = FUNC_1() + VAR_6;

    while (VAR_6 > 0)
    {
        if (FUNC_2( 0, ((void*)0), VAR_0, VAR_7, VAR_2 ) == VAR_3) break;
        if (VAR_4)
            while (FUNC_3( &VAR_5, 0, 0, 0, VAR_1 )) FUNC_0( &VAR_5 );
        VAR_6 = VAR_8 - FUNC_1();
        VAR_7 = 50;
    }
}
