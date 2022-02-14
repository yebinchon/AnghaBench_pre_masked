
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* lpNSCacheData ;
typedef TYPE_2__* lpNSCache ;
struct TYPE_9__ {int first; } ;
struct TYPE_8__ {scalar_t__ const dwTime; } ;
typedef TYPE_2__* LPVOID ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 () ;

void FUNC_5( LPVOID VAR_2 )
{
  lpNSCache VAR_3 = VAR_2;

  const DWORD VAR_4 = FUNC_4();
  const DWORD VAR_5 = VAR_0;







  for( ;; )
  {
    lpNSCacheData VAR_6;

    if( FUNC_1(VAR_3->first) )
    {

      break;
    }



    if( (VAR_4 - (FUNC_0(VAR_3->first)->dwTime)) < VAR_5 )
    {

      break;
    }

    VAR_6 = FUNC_0(VAR_3->first);
    FUNC_2( VAR_3->first, FUNC_0(VAR_3->first), VAR_1 );
    FUNC_3( VAR_6 );
  }

}
