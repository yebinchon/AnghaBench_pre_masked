
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* lpNSCache ;
struct TYPE_5__ {int bNsIsLocal; int * present; int first; } ;
typedef TYPE_1__* LPVOID ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int VAR_2 ;

BOOL FUNC_3( LPVOID* VAR_3 )
{
  lpNSCache VAR_4 = FUNC_2( FUNC_1(), VAR_1, sizeof( *VAR_4 ) );

  *VAR_3 = VAR_4;

  if( VAR_4 == ((void*)0) )
  {
    return VAR_0;
  }

  FUNC_0(VAR_4->first);
  VAR_4->present = ((void*)0);

  VAR_4->bNsIsLocal = VAR_0;

  return VAR_2;
}
