
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hostent {int h_length; int h_addr; } ;
typedef int host ;
struct TYPE_5__ {int S_addr; } ;
struct TYPE_6__ {TYPE_1__ S_un; int s_addr; } ;
struct TYPE_7__ {void* sin_port; TYPE_2__ sin_addr; int sin_family; } ;
typedef int SOCKADDR_IN ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 struct hostent* FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (unsigned short) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;
 scalar_t__ FUNC_13 (char*,int *,int ) ;
 char* VAR_5 ;

__attribute__((used)) static void FUNC_14()
{
    char VAR_6[ VAR_1 ];
    char *VAR_7;
    FILE *VAR_8;
    char VAR_9[256];
    struct hostent * VAR_10;

    FUNC_7( &VAR_4, 0, sizeof(SOCKADDR_IN) );
    VAR_4.sin_family = VAR_0;

    if( '\\' == VAR_5[0] || '/' == VAR_5[0] || ':' == VAR_5[1] )
    {

        FUNC_10( VAR_6, VAR_5 );
    }
    else
    {

        char *VAR_11;

        FUNC_10( VAR_6, VAR_3[0] );
        VAR_7 = FUNC_12( VAR_6, '\\' ) + 1;
        VAR_11 = FUNC_12( VAR_6, '/' ) + 1;
        if( VAR_7 < VAR_11 )
            *VAR_11 = 0;
        else if( VAR_7 > VAR_11 )
            *VAR_7 = 0;
        else
            VAR_6[0] = 0;
        FUNC_8( VAR_6, VAR_5 );
    }
    VAR_7 = &VAR_6[ FUNC_11( VAR_6 ) - 1 ];
    if( '\\' != *VAR_7 && '/' != *VAR_7 )
    {
        VAR_7++; *VAR_7 = '/';
    }
    FUNC_10( ++VAR_7, "syslog.host" );


    VAR_8 = FUNC_2( VAR_6, "r" );
    if( !VAR_8 )
        goto use_default;

    if( ((void*)0) == FUNC_1( VAR_9, sizeof(VAR_9), VAR_8 ) )
        VAR_9[0] = 0;
    else
    {
        VAR_7 = FUNC_9( VAR_9, '\n' );
        if( VAR_7 )
            *VAR_7 = 0;
        VAR_7 = FUNC_9( VAR_9, '\r' );
        if( VAR_7 )
            *VAR_7 = 0;
    }
    FUNC_0( VAR_8 );

    VAR_7 = FUNC_9( VAR_9, ':' );
    if( VAR_7 )
        *VAR_7++ = 0;

    VAR_10 = FUNC_3( VAR_9 );
    if( !VAR_10 )
        goto use_default;

    FUNC_6( &VAR_4.sin_addr.s_addr, VAR_10->h_addr, VAR_10->h_length );

    if( VAR_7 )
        VAR_4.sin_port = FUNC_5( (unsigned short) FUNC_13( VAR_7, ((void*)0), 0 ) );
    else
        VAR_4.sin_port = FUNC_5( VAR_2 );
    return;

use_default:
    VAR_4.sin_addr.S_un.S_addr = FUNC_4( 0x7F000001 );
    VAR_4.sin_port = FUNC_5( VAR_2 );
}
