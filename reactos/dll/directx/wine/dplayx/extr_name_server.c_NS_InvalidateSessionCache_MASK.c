
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* lpNSCache ;
struct TYPE_2__ {int bNsIsLocal; int * present; int first; } ;
typedef int LPVOID ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2( LPVOID VAR_4 )
{
  lpNSCache VAR_5 = (lpNSCache)VAR_4;

  if( VAR_5 == ((void*)0) )
  {
    FUNC_1( ": invalidate nonexistent cache\n" );
    return;
  }

  FUNC_0( VAR_5->first, VAR_3, VAR_2, VAR_1 );


  VAR_5->present = ((void*)0);

  VAR_5->bNsIsLocal = VAR_0;

}
