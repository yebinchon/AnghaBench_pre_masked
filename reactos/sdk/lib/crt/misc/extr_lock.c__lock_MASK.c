
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bInit; int crit; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int) ;

void FUNC_4( int VAR_3 )
{
  FUNC_1( "(%d)\n", VAR_3 );


  if( VAR_2[ VAR_3 ].bInit == VAR_0 )
  {

    FUNC_4( VAR_1 );


    if( VAR_2[ VAR_3 ].bInit == VAR_0 )
    {
      FUNC_1( ": creating lock #%d\n", VAR_3 );
      FUNC_3( VAR_3 );
    }


    FUNC_2( VAR_1 );
  }

  FUNC_0( &(VAR_2[ VAR_3 ].crit) );
}
