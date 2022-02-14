
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_un {char* sun_path; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct TYPE_2__ {void* s_addr; } ;
struct sockaddr_in {void* sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct addrinfo {scalar_t__ ai_family; int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; } ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct addrinfo*) ;
 scalar_t__ FUNC_2 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char const) ;
 int FUNC_7 (struct sockaddr*,int ,int ) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char const*,int) ;

int FUNC_13( const char * VAR_8, struct sockaddr * VAR_9 )
{
    char VAR_10[256];
    char * VAR_11 = VAR_10;
    char * VAR_12;
    struct addrinfo *VAR_13, VAR_14;
    int VAR_15 = 0;
    int VAR_16;

    if ( !VAR_8 )
        return -1;

    while( FUNC_6( *VAR_8 ) )
        ++VAR_8;

    FUNC_12( VAR_10, VAR_8, 256 );

    switch( *VAR_11 )
    {
    case '/':
        VAR_9->sa_family = VAR_2;
        FUNC_12( ((struct sockaddr_un *)VAR_9)->sun_path, VAR_11,
                sizeof(((struct sockaddr_un *)VAR_9)->sun_path) );
        return 0;

    case '[':
        VAR_9->sa_family = VAR_1;
        ++VAR_11;
        VAR_12 = FUNC_10( VAR_11, ']' );
        if ( !VAR_12 )
            return -1;
        *VAR_12++ = 0;

        if ( *VAR_11 == '*' )
        {
            FUNC_11( VAR_10, "::" );
            VAR_11 = VAR_10;
        }
        VAR_15 = 1;
        break;

    default:
        VAR_9->sa_family = VAR_0;
        VAR_12 = FUNC_10( VAR_11, ':' );
        if ( !VAR_12 )
            return -1;
        *VAR_12++ = 0;

        VAR_15 = 0;
        if ( *VAR_11 == '*' )
        {
            ((struct sockaddr_in *)VAR_9)->sin_addr.s_addr = FUNC_3(VAR_3);
        }
        else if (!FUNC_9( VAR_11, "localhost" ) )
            ((struct sockaddr_in *)VAR_9)->sin_addr.s_addr = FUNC_3( VAR_5 );
        else
        {
            ((struct sockaddr_in *)VAR_9)->sin_addr.s_addr = FUNC_5( VAR_11 );
            if ( ((struct sockaddr_in *)VAR_9)->sin_addr.s_addr == VAR_4)
            {
                VAR_15 = 1;
            }
        }
        break;
    }
    if ( *VAR_12 == ':' )
        ++VAR_12;

    VAR_16 = FUNC_0( VAR_12 );
    if (( VAR_16 <= 0 )||( VAR_16 > 65535 ))
        return -1;
    if ( VAR_15 )
    {

        FUNC_8(&VAR_14, 0, sizeof(VAR_14));

        VAR_14.ai_family = VAR_9->sa_family;
        VAR_14.ai_socktype = VAR_7;
        VAR_14.ai_protocol = VAR_6;

        if ( FUNC_2(VAR_11, ((void*)0), &VAR_14, &VAR_13) )
        {
            return -1;
        }

        FUNC_7(VAR_9, VAR_13->ai_addr, VAR_13->ai_addrlen);
        FUNC_1(VAR_13);
    }

    if ( VAR_9->sa_family == VAR_0 )
        ((struct sockaddr_in *)VAR_9)->sin_port = FUNC_4( VAR_16 );
    else
        ((struct sockaddr_in6 *)VAR_9)->sin6_port = FUNC_4( VAR_16 );
    return 0;

}
