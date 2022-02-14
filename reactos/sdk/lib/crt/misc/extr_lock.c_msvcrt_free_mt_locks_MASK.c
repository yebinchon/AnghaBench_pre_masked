
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bInit; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2(void)
{
  int VAR_2;

  FUNC_0(": uninitializing all mtlocks\n" );


  for( VAR_2=0; VAR_2 < VAR_0; VAR_2++ )
  {
    if( VAR_1[ VAR_2 ].bInit )
    {
      FUNC_1( VAR_2 );
    }
  }
}
