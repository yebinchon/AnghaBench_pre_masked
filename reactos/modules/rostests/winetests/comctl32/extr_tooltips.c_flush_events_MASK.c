
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(int VAR_4)
{
    MSG VAR_5;
    int VAR_6 = VAR_4;
    DWORD VAR_7 = FUNC_1() + VAR_4;

    while (VAR_6 > 0)
    {
        if (FUNC_2( 0, ((void*)0), VAR_0, FUNC_4(100,VAR_6), VAR_2) == VAR_3) break;
        while (FUNC_3( &VAR_5, 0, 0, 0, VAR_1 )) FUNC_0( &VAR_5 );
        VAR_6 = VAR_7 - FUNC_1();
    }
}
