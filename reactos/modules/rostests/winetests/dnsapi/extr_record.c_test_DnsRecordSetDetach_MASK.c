
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int pNext; } ;
struct TYPE_12__ {TYPE_2__* pFirstRR; } ;
typedef TYPE_1__ DNS_RRSET ;
typedef TYPE_2__ DNS_RECORDW ;


 int FUNC_0 (TYPE_1__,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,char*,...) ;
 TYPE_2__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_5( void )
{
    DNS_RRSET VAR_3;
    DNS_RECORDW *VAR_4, *VAR_5;

    FUNC_1( VAR_3 );
    FUNC_0( VAR_3, &VAR_0 );
    FUNC_0( VAR_3, &VAR_1 );
    FUNC_0( VAR_3, &VAR_2 );
    FUNC_2( VAR_3 );

    FUNC_4( !FUNC_3( ((void*)0) ), "succeeded unexpectedly\n" );

    VAR_4 = VAR_3.pFirstRR;
    VAR_5 = FUNC_3( VAR_4 );

    FUNC_4( VAR_5 == &VAR_2, "failed unexpectedly: got %p, expected %p\n", VAR_5, &VAR_2 );
    FUNC_4( VAR_4 == &VAR_0, "failed unexpectedly: got %p, expected %p\n", VAR_4, &VAR_0 );
    FUNC_4( !VAR_1, "failed unexpectedly\n" );
}
