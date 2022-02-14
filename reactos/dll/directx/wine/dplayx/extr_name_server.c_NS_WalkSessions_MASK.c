
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_3__* lpNSCache ;
struct TYPE_6__ {TYPE_2__* present; } ;
struct TYPE_4__ {TYPE_2__* lpQNext; } ;
struct TYPE_5__ {TYPE_1__ next; int * data; } ;
typedef int LPVOID ;
typedef int * LPDPSESSIONDESC2 ;



LPDPSESSIONDESC2 FUNC_0( LPVOID VAR_0 )
{
  LPDPSESSIONDESC2 VAR_1;
  lpNSCache VAR_2 = (lpNSCache)VAR_0;




  if( VAR_2->present == ((void*)0) )
  {
    return ((void*)0);
  }

  VAR_1 = VAR_2->present->data;


  VAR_2->present = VAR_2->present->next.lpQNext;

  return VAR_1;
}
