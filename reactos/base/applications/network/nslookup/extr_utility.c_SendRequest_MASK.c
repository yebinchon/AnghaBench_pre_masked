
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
typedef int ULONG ;
struct TYPE_7__ {scalar_t__ debug; int port; int DefaultServerAddress; scalar_t__ d2; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; void* sin_port; void* sin_family; } ;
typedef int SendAddr ;
typedef scalar_t__ SOCKET ;
typedef TYPE_2__ SOCKADDR_IN ;
typedef int SOCKADDR ;
typedef int RecAddr2 ;
typedef int RecAddr ;
typedef int* PULONG ;
typedef int * PSHORT ;
typedef int * PCHAR ;
typedef scalar_t__ BOOL ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 () ;

 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,int *,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int *,int,int ,int *,int*) ;
 int FUNC_13 (scalar_t__,int *,int ,int ,int *,int) ;
 scalar_t__ FUNC_14 (void*,int ,int ) ;

BOOL FUNC_15( PCHAR VAR_9,
                  ULONG VAR_10,
                  PCHAR VAR_11,
                  PULONG VAR_12 )
{
    int VAR_13;
    USHORT VAR_14, VAR_15;
    BOOL VAR_16;
    SOCKET VAR_17;
    SOCKADDR_IN VAR_18, VAR_19, VAR_20;
    int VAR_21 = sizeof(VAR_20);

    FUNC_2( &VAR_18, sizeof(SOCKADDR_IN) );
    FUNC_2( &VAR_19, sizeof(SOCKADDR_IN) );
    FUNC_2( &VAR_20, sizeof(SOCKADDR_IN) );


    VAR_14 = FUNC_11( ((PSHORT)&VAR_9[0])[0] );


    if( VAR_7.d2 ) FUNC_0( VAR_9, VAR_10 );


    VAR_17 = FUNC_14( VAR_0, VAR_6, VAR_4 );

    if (VAR_17 == VAR_3)
        return VAR_1;


    VAR_18.sin_family = VAR_0;
    VAR_18.sin_port = FUNC_9( VAR_7.port );
    VAR_18.sin_addr.s_addr = FUNC_10( VAR_7.DefaultServerAddress );


    VAR_19 = VAR_0;
    VAR_19 = FUNC_9( VAR_7.port );
    VAR_19 = FUNC_8( VAR_2 );


    FUNC_6( VAR_17, (SOCKADDR*)&VAR_19, sizeof(VAR_19) );


    VAR_13 = FUNC_13( VAR_17,
                VAR_9,
                VAR_10,
                0,
                (SOCKADDR*)&VAR_18,
                sizeof(VAR_18) );
    if( VAR_13 == VAR_5 )
    {
        switch( FUNC_3() )
        {
        case 128:
            FUNC_5( FUNC_4("sendto() failed with WSANOTINITIALIZED\n") );
            break;
        case 138:
            FUNC_5( FUNC_4("sendto() failed with WSAENETDOWN\n") );
            break;
        case 150:
            FUNC_5( FUNC_4("sendto() failed with WSAEACCES\n") );
            break;
        case 140:
            FUNC_5( FUNC_4("sendto() failed with WSAEINVAL\n") );
            break;
        case 141:
            FUNC_5( FUNC_4("sendto() failed with WSAEINTR\n") );
            break;
        case 142:
            FUNC_5( FUNC_4("sendto() failed with WSAEINPROGRESS\n") );
            break;
        case 144:
            FUNC_5( FUNC_4("sendto() failed with WSAEFAULT\n") );
            break;
        case 137:
            FUNC_5( FUNC_4("sendto() failed with WSAENETRESET\n") );
            break;
        case 135:
            FUNC_5( FUNC_4("sendto() failed with WSAENOBUFS\n") );
            break;
        case 134:
            FUNC_5( FUNC_4("sendto() failed with WSAENOTCONN\n") );
            break;
        case 133:
            FUNC_5( FUNC_4("sendto() failed with WSAENOTSOCK\n") );
            break;
        case 132:
            FUNC_5( FUNC_4("sendto() failed with WSAEOPNOTSUPP\n") );
            break;
        case 131:
            FUNC_5( FUNC_4("sendto() failed with WSAESHUTDOWN\n") );
            break;
        case 129:
            FUNC_5( FUNC_4("sendto() failed with WSAEWOULDBLOCK\n") );
            break;
        case 139:
            FUNC_5( FUNC_4("sendto() failed with WSAEMSGSIZE\n") );
            break;
        case 143:
            FUNC_5( FUNC_4("sendto() failed with WSAEHOSTUNREACH\n") );
            break;
        case 147:
            FUNC_5( FUNC_4("sendto() failed with WSAECONNABORTED\n") );
            break;
        case 146:
            FUNC_5( FUNC_4("sendto() failed with WSAECONNRESET\n") );
            break;
        case 149:
            FUNC_5( FUNC_4("sendto() failed with WSAEADDRNOTAVAIL\n") );
            break;
        case 148:
            FUNC_5( FUNC_4("sendto() failed with WSAEAFNOSUPPORT\n") );
            break;
        case 145:
            FUNC_5( FUNC_4("sendto() failed with WSAEDESTADDRREQ\n") );
            break;
        case 136:
            FUNC_5( FUNC_4("sendto() failed with WSAENETUNREACH\n") );
            break;
        case 130:
            FUNC_5( FUNC_4("sendto() failed with WSAETIMEDOUT\n") );
            break;
        default:
            FUNC_5( FUNC_4("sendto() failed with unknown error\n") );
        }

        FUNC_7( VAR_17 );
        return VAR_1;
    }

    VAR_16 = VAR_8;

    while( VAR_16 )
    {

        VAR_13 = FUNC_12( VAR_17,
                      VAR_11,
                      *VAR_12,
                      0,
                      (SOCKADDR*)&VAR_20,
                      &VAR_21 );
        if( VAR_13 == VAR_5 )
        {
            switch( FUNC_3() )
            {
            case 128:
                FUNC_5( FUNC_4("recvfrom() failed with WSANOTINITIALIZED\n") );
                break;
            case 138:
                FUNC_5( FUNC_4("recvfrom() failed with WSAENETDOWN\n") );
                break;
            case 150:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEACCES\n") );
                break;
            case 140:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEINVAL\n") );
                break;
            case 141:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEINTR\n") );
                break;
            case 142:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEINPROGRESS\n") );
                break;
            case 144:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEFAULT\n") );
                break;
            case 137:
                FUNC_5( FUNC_4("recvfrom() failed with WSAENETRESET\n") );
                break;
            case 135:
                FUNC_5( FUNC_4("recvfrom() failed with WSAENOBUFS\n") );
                break;
            case 134:
                FUNC_5( FUNC_4("recvfrom() failed with WSAENOTCONN\n") );
                break;
            case 133:
                FUNC_5( FUNC_4("recvfrom() failed with WSAENOTSOCK\n") );
                break;
            case 132:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEOPNOTSUPP\n") );
                break;
            case 131:
                FUNC_5( FUNC_4("recvfrom() failed with WSAESHUTDOWN\n") );
                break;
            case 129:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEWOULDBLOCK\n") );
                break;
            case 139:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEMSGSIZE\n") );
                break;
            case 143:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEHOSTUNREACH\n") );
                break;
            case 147:
                FUNC_5( FUNC_4("recvfrom() failed with WSAECONNABORTED\n") );
                break;
            case 146:
                FUNC_5( FUNC_4("recvfrom() failed with WSAECONNRESET\n") );
                break;
            case 149:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEADDRNOTAVAIL\n") );
                break;
            case 148:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEAFNOSUPPORT\n") );
                break;
            case 145:
                FUNC_5( FUNC_4("recvfrom() failed with WSAEDESTADDRREQ\n") );
                break;
            case 136:
                FUNC_5( FUNC_4("recvfrom() failed with WSAENETUNREACH\n") );
                break;
            case 130:
                FUNC_5( FUNC_4("recvfrom() failed with WSAETIMEDOUT\n") );
                break;
            default:
                FUNC_5( FUNC_4("recvfrom() failed with unknown error\n") );
            }

            FUNC_7( VAR_17 );
            return VAR_1;
        }

        VAR_15 = FUNC_11( ((PSHORT)&VAR_11[0])[0] );

        if( VAR_15 == VAR_14 ) VAR_16 = VAR_1;
    }


    FUNC_7( VAR_17 );


    if( VAR_7.debug ) FUNC_1( VAR_11, VAR_13 );


    *VAR_12 = VAR_13;

    return VAR_8;
}
