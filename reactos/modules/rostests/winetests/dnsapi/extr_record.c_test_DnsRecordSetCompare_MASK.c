
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int IpAddress; } ;
struct TYPE_13__ {TYPE_2__ A; } ;
struct TYPE_11__ {int DW; } ;
struct TYPE_15__ {TYPE_3__ Data; TYPE_1__ Flags; } ;
struct TYPE_14__ {int * pFirstRR; } ;
typedef TYPE_4__ DNS_RRSET ;
typedef int DNS_RECORDW ;


 int FUNC_0 (TYPE_4__,TYPE_5__*) ;
 int FUNC_1 (TYPE_4__) ;
 int FUNC_2 (TYPE_4__) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int **,int **) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int,char*,...) ;
 TYPE_5__ VAR_3 ;
 TYPE_5__ VAR_4 ;

__attribute__((used)) static void FUNC_6( void )
{
    DNS_RECORDW *VAR_5;
    DNS_RECORDW *VAR_6;
    DNS_RRSET VAR_7, VAR_8;

    VAR_3 = 0x2019;
    VAR_4 = 0x2019;
    VAR_4 = 0xffffffff;

    FUNC_1( VAR_7 );
    FUNC_1( VAR_8 );

    FUNC_0( VAR_7, &VAR_3 );
    FUNC_0( VAR_8, &VAR_4 );

    FUNC_2( VAR_7 );
    FUNC_2( VAR_8 );

    FUNC_5( FUNC_4( ((void*)0), ((void*)0), ((void*)0), ((void*)0) ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_5( FUNC_4( VAR_7, ((void*)0), ((void*)0), ((void*)0) ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_5( FUNC_4( ((void*)0), VAR_8, ((void*)0), ((void*)0) ) == VAR_1, "succeeded unexpectedly\n" );

    VAR_5 = ((void*)0);
    VAR_6 = ((void*)0);

    FUNC_5( FUNC_4( ((void*)0), ((void*)0), &VAR_5, &VAR_6 ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_5( VAR_5 == ((void*)0) && VAR_6 == ((void*)0), "unexpected result: %p, %p\n", VAR_5, VAR_6 );

    FUNC_5( FUNC_4( VAR_7, ((void*)0), &VAR_5, &VAR_6 ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_5( VAR_5 != ((void*)0) && VAR_6 == ((void*)0), "unexpected result: %p, %p\n", VAR_5, VAR_6 );
    FUNC_3( VAR_5, VAR_0 );

    FUNC_5( FUNC_4( ((void*)0), VAR_8, &VAR_5, &VAR_6 ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_5( VAR_5 == ((void*)0) && VAR_6 != ((void*)0), "unexpected result: %p, %p\n", VAR_5, VAR_6 );
    FUNC_3( VAR_6, VAR_0 );

    FUNC_5( FUNC_4( VAR_7, VAR_8, ((void*)0), &VAR_6 ) == VAR_2, "failed unexpectedly\n" );
    FUNC_5( VAR_6 == ((void*)0), "unexpected result: %p\n", VAR_6 );

    FUNC_5( FUNC_4( VAR_7, VAR_8, &VAR_5, ((void*)0) ) == VAR_2, "failed unexpectedly\n" );
    FUNC_5( VAR_5 == ((void*)0), "unexpected result: %p\n", VAR_5 );

    FUNC_5( FUNC_4( VAR_7, VAR_8, &VAR_5, &VAR_6 ) == VAR_2, "failed unexpectedly\n" );
    FUNC_5( VAR_5 == ((void*)0) && VAR_6 == ((void*)0), "unexpected result: %p, %p\n", VAR_5, VAR_6 );

    VAR_4 = 0;

    FUNC_5( FUNC_4( VAR_7, VAR_8, ((void*)0), &VAR_6 ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_3( VAR_6, VAR_0 );

    FUNC_5( FUNC_4( VAR_7, VAR_8, &VAR_5, ((void*)0) ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_3( VAR_5, VAR_0 );

    FUNC_5( FUNC_4( VAR_7, VAR_8, &VAR_5, &VAR_6 ) == VAR_1, "succeeded unexpectedly\n" );
    FUNC_3( VAR_5, VAR_0 );
    FUNC_3( VAR_6, VAR_0 );
}
