
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {scalar_t__ dwAppID; } ;
typedef TYPE_1__* LPDPLAYX_LOBBYDATA ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static BOOL FUNC_2( DWORD VAR_4, LPDPLAYX_LOBBYDATA* VAR_5 )
{
  UINT VAR_6;

  *VAR_5 = ((void*)0);

  if( VAR_4 == 0 )
  {
    VAR_4 = FUNC_0();
    FUNC_1( "Translated dwAppID == 0 into 0x%08x\n", VAR_4 );
  }

  for( VAR_6=0; VAR_6 < VAR_3; VAR_6++ )
  {
    if( VAR_2[ VAR_6 ].dwAppID == VAR_4 )
    {

      FUNC_1( "Found 0x%08x @ %u\n", VAR_4, VAR_6 );
      *VAR_5 = &VAR_2[ VAR_6 ];
      return VAR_1;
    }
  }

  return VAR_0;
}
