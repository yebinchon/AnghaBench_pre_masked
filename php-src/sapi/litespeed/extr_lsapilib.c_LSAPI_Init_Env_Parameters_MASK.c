
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {int member_1; int member_0; } ;
typedef int fn_select_t ;
struct TYPE_2__ {int m_fdListen; } ;


 int FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_11 (char const*) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (char const*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int ,struct rlimit*) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 () ;

int FUNC_20( fn_select_t VAR_11 )
{
    const char *VAR_12;
    char VAR_13;
    int VAR_14;
    int VAR_15 = 0;

    VAR_12 = FUNC_12("LSAPI_STDERR_LOG");
    if (VAR_12)
    {
        FUNC_16(VAR_12);
    }
    if (!VAR_10)
        VAR_9 = FUNC_13(VAR_1);

    VAR_12 = FUNC_12( "PHP_LSAPI_MAX_REQUESTS" );
    if ( !VAR_12 )
        VAR_12 = FUNC_12( "LSAPI_MAX_REQS" );
    if ( VAR_12 )
    {
        VAR_14 = FUNC_11( VAR_12 );
        if ( VAR_14 > 0 )
            FUNC_7( VAR_14 );
    }

    VAR_12 = FUNC_12( "LSAPI_KEEP_LISTEN" );
    if ( VAR_12 )
    {
        VAR_14 = FUNC_11( VAR_12 );
        VAR_6 = VAR_14;
    }

    VAR_12 = FUNC_12( "LSAPI_AVOID_FORK" );
    if ( VAR_12 )
    {
        VAR_15 = FUNC_11( VAR_12 );
        if (VAR_15)
        {
            VAR_6 = 2;
            VAR_13 = *(VAR_12 + FUNC_18(VAR_12) - 1);
            if ( VAR_13 == 'G' || VAR_13 == 'g' )
                VAR_15 *= 1024 * 1024 * 1024;
            else if ( VAR_13 == 'M' || VAR_13 == 'm' )
                VAR_15 *= 1024 * 1024;
            if (VAR_15 >= 1024 * 10240)
                VAR_8 = VAR_15 / 4096;
        }
    }

    VAR_12 = FUNC_12( "LSAPI_ACCEPT_NOTIFY" );
    if ( VAR_12 )
    {
        VAR_3 = FUNC_11( VAR_12 );
    }

    VAR_12 = FUNC_12( "LSAPI_SLOW_REQ_MSECS" );
    if ( VAR_12 )
    {
        VAR_14 = FUNC_11( VAR_12 );
        FUNC_10( VAR_14 );
    }
    VAR_12 = FUNC_12( "LSAPI_MAX_IDLE" );
    if ( VAR_12 )
    {
        VAR_14 = FUNC_11( VAR_12 );
        FUNC_4( VAR_14 );
    }

    if ( FUNC_1() )
    {
        VAR_14 = 0;
        VAR_12 = FUNC_12( "PHP_LSAPI_CHILDREN" );
        if ( !VAR_12 )
            VAR_12 = FUNC_12( "LSAPI_CHILDREN" );
        if ( VAR_12 )
            VAR_14 = FUNC_11( VAR_12 );
        if ( VAR_14 > 1 )
        {
            FUNC_0( VAR_14, VAR_11, VAR_15 != 0 );
            FUNC_9( VAR_2.m_fdListen );
        }

        VAR_12 = FUNC_12( "LSAPI_EXTRA_CHILDREN" );
        if ( VAR_12 )
            FUNC_3( FUNC_11( VAR_12 ) );

        VAR_12 = FUNC_12( "LSAPI_MAX_IDLE_CHILDREN" );
        if ( VAR_12 )
            FUNC_5( FUNC_11( VAR_12 ) );

        VAR_12 = FUNC_12( "LSAPI_PGRP_MAX_IDLE" );
        if ( VAR_12 )
        {
            FUNC_8( FUNC_11( VAR_12 ) );
        }

        VAR_12 = FUNC_12( "LSAPI_MAX_PROCESS_TIME" );
        if ( VAR_12 )
            FUNC_6( FUNC_11( VAR_12 ) );

        if ( FUNC_12( "LSAPI_PPID_NO_CHECK" ) )
        {
            FUNC_2();
        }

        VAR_12 = FUNC_12("LSAPI_MAX_BUSY_WORKER");
        if (VAR_12)
        {
            VAR_14 = FUNC_11(VAR_12);
            VAR_7 = VAR_14;
            if (VAR_14 >= 0)
                FUNC_2();
        }


        VAR_12 = FUNC_12( "LSAPI_DUMP_DEBUG_INFO" );
        if ( VAR_12 )
            VAR_4 = FUNC_11( VAR_12 );

        if ( FUNC_15() == -1 )
            return -1;

        FUNC_14();

    }
    FUNC_19();
    return 0;
}
