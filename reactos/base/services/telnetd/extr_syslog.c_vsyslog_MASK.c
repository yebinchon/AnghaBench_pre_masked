
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {int wMonth; int wDay; int wHour; int wMinute; int wSecond; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int SOCKADDR_IN ;
typedef int SOCKADDR ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,scalar_t__,int ,int ,int *,int) ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__,char*,int,char*,int,int,int,int,char*,char*,int ) ;
 int VAR_8 ;
 char* FUNC_6 (scalar_t__,char) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_9 ;
 char* VAR_10 ;
 int FUNC_8 (scalar_t__,scalar_t__,char*,int ) ;

void FUNC_9( int VAR_11, char* VAR_12, va_list VAR_13 )
{
    static char *VAR_14[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    SYSTEMTIME VAR_15;
    int VAR_16;
    char *VAR_17;

    if( !(FUNC_1( FUNC_2( VAR_11 )) & VAR_5) )
        return;

    FUNC_3( ((void*)0), 0, VAR_11 & VAR_0 );
    if( !VAR_3 )
        return;

    if( !(VAR_11 & VAR_0) )
        VAR_11 |= VAR_9;

    FUNC_0( &VAR_15 );
    VAR_16 = FUNC_5( VAR_1, "<%d>%s %2d %02d:%02d:%02d %s %s%s: ",
                   VAR_11,
                   VAR_14[ VAR_15.wMonth - 1 ], VAR_15.wDay, VAR_15.wHour, VAR_15.wMinute, VAR_15.wSecond,
                   VAR_4, VAR_10? VAR_10 : "", VAR_8 );
    FUNC_8( VAR_1 + VAR_16, VAR_2 - VAR_16, VAR_12, VAR_13 );
    VAR_17 = FUNC_6( VAR_1, '\n' );
    if( VAR_17 )
        *VAR_17 = 0;
    VAR_17 = FUNC_6( VAR_1, '\r' );
    if( VAR_17 )
        *VAR_17 = 0;

    FUNC_4( VAR_7, VAR_1, FUNC_7(VAR_1), 0, (SOCKADDR*) &VAR_6, sizeof(SOCKADDR_IN) );
}
