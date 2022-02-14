
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ IpAddress; } ;
struct TYPE_12__ {TYPE_3__ A; } ;
struct TYPE_9__ {void* CharSet; } ;
struct TYPE_10__ {TYPE_1__ S; } ;
struct TYPE_13__ {TYPE_4__ Data; scalar_t__ dwTtl; TYPE_2__ Flags; int pName; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*,TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 TYPE_5__ VAR_5 ;
 TYPE_5__ VAR_6 ;

__attribute__((used)) static void FUNC_2( void )
{
    FUNC_1( FUNC_0( &VAR_5, &VAR_5 ) == VAR_3, "failed unexpectedly\n" );

    VAR_6 = VAR_4;
    FUNC_1( FUNC_0( &VAR_5, &VAR_6 ) == VAR_3, "failed unexpectedly\n" );

    VAR_6 = VAR_1;
    FUNC_1( FUNC_0( &VAR_5, &VAR_6 ) == VAR_3, "failed unexpectedly\n" );

    VAR_6 = VAR_0;
    FUNC_1( FUNC_0( &VAR_5, &VAR_6 ) == VAR_3, "failed unexpectedly\n" );

    VAR_5 = VAR_0;
    FUNC_1( FUNC_0( &VAR_5, &VAR_6 ) == VAR_3, "failed unexpectedly\n" );

    VAR_5 = 0;
    FUNC_1( FUNC_0( &VAR_5, &VAR_6 ) == VAR_3, "failed unexpectedly\n" );

    VAR_6 = 0;
    FUNC_1( FUNC_0( &VAR_5, &VAR_6 ) == VAR_2, "succeeded unexpectedly\n" );
}
