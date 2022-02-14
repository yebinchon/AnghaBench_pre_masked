
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_6__ {int sin_port; } ;
struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sock_info {TYPE_3__ peer; int s; TYPE_2__ addr; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 scalar_t__ FUNC_1 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*,scalar_t__*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int ,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_9 (int ,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_10 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_11(void)
{




    struct sock_info VAR_7[VAR_2];
    char VAR_8[16];
    int VAR_9, VAR_10, VAR_11, VAR_12;

    FUNC_6 (VAR_8,0,sizeof(VAR_8));
    for ( VAR_10 = VAR_2 - 1; VAR_10 >= 0; VAR_10-- ) {
        FUNC_7 ( ( VAR_7[VAR_10].s = FUNC_10 ( VAR_0, VAR_6, 0 ) ) != VAR_1, "UDP: socket failed\n" );

        VAR_7[VAR_10].addr.sin_family = VAR_0;
        VAR_7[VAR_10].addr.sin_addr.s_addr = FUNC_3 ( VAR_3 );

        if ( VAR_10 == 0 ) {
            VAR_7[VAR_10].addr.sin_port = FUNC_2 ( VAR_4 );
        } else {
            VAR_7[VAR_10].addr.sin_port = FUNC_2 ( 0 );
        }

        FUNC_0 ( VAR_7[VAR_10].s, (struct sockaddr *) &VAR_7[VAR_10].addr, sizeof( VAR_7[VAR_10].addr ) );


        VAR_9 = sizeof ( VAR_7[VAR_10].addr );
        FUNC_7 ( FUNC_1 ( VAR_7[VAR_10].s, (struct sockaddr *) &VAR_7[VAR_10].addr, &VAR_9 ) != VAR_5, "UDP: could not getsockname()\n" );
        FUNC_7 ( VAR_7[VAR_10].addr.sin_port != FUNC_2 ( 0 ), "UDP: bind() did not associate port\n" );
    }


    FUNC_7 ( VAR_7[0].addr.sin_port == FUNC_2 ( VAR_4 ), "UDP: getsockname returned incorrect peer port\n" );

    for ( VAR_10 = 1; VAR_10 < VAR_2; VAR_10++ ) {

        FUNC_5( VAR_8, &VAR_7[VAR_10].addr.sin_port, sizeof(VAR_7[VAR_10].addr.sin_port) );
        VAR_12 = FUNC_9 ( VAR_7[VAR_10].s, VAR_8, sizeof(VAR_8), 0, (struct sockaddr*) &VAR_7[0].addr, sizeof(VAR_7[0].addr) );
        FUNC_7 ( VAR_12 == sizeof(VAR_8), "UDP: sendto() sent wrong amount of data or socket error: %d\n", VAR_12 );
    }

    for ( VAR_10 = 1; VAR_10 < VAR_2; VAR_10++ ) {
        VAR_11 = FUNC_8 ( VAR_7[0].s, VAR_8, sizeof(VAR_8), 0,(struct sockaddr *) &VAR_7[0].peer, &VAR_9 );
        FUNC_7 ( VAR_11 == sizeof(VAR_8), "UDP: recvfrom() received wrong amount of data or socket error: %d\n", VAR_11 );
        FUNC_7 ( FUNC_4 ( &VAR_7[0].peer.sin_port, VAR_8, sizeof(VAR_7[0].addr.sin_port) ) == 0, "UDP: port numbers do not match\n" );
    }
}
