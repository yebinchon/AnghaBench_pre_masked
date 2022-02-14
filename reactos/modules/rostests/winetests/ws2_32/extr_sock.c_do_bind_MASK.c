
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct sockaddr*,int) ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5 ( SOCKET VAR_3, struct sockaddr* VAR_4, int VAR_5 )
{
    int VAR_6, VAR_7 = 0, VAR_8 = VAR_1;

    while ( ( VAR_6 = FUNC_2 ( VAR_3, VAR_4, VAR_5 ) ) != 0 &&
            ( VAR_7 = FUNC_1 () ) == VAR_2 &&
            VAR_8-- >= 0)
    {
        FUNC_4 ( "address in use, waiting ...\n" );
        FUNC_0 ( 1000 * VAR_0 );
    }
    FUNC_3 ( VAR_6 == 0, "failed to bind: %d\n", VAR_7 );
}
