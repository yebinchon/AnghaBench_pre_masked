
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_2__ {scalar_t__ dwAppID; scalar_t__ bWaitForConnectionSettings; } ;
typedef int BOOL ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

BOOL FUNC_2(void)
{
  UINT VAR_4;
  BOOL VAR_5 = VAR_0;

  FUNC_0();

  for( VAR_4=0; VAR_4 < VAR_3; VAR_4++ )
  {
    if( ( VAR_2[ VAR_4 ].dwAppID != 0 ) &&
        ( VAR_2[ VAR_4 ].bWaitForConnectionSettings )
      )
    {
      VAR_5 = VAR_1;
      break;
    }
  }

  FUNC_1();

  return VAR_5;
}
