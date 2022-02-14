
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t maxCons; int * delegate; TYPE_1__* connections; scalar_t__* remote_connections; } ;
struct TYPE_4__ {int advf; int * pAdvSink; } ;
typedef int IDataAdviseHolder ;
typedef TYPE_2__ DataAdviseHolder ;
typedef size_t DWORD ;


 int FUNC_0 (int *,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int *) ;

void FUNC_2(IDataAdviseHolder *VAR_1)
{
  DataAdviseHolder *VAR_2 = FUNC_1(VAR_1);
  DWORD VAR_3;

  for(VAR_3 = 0; VAR_3 < VAR_2->maxCons; VAR_3++)
  {
    if((VAR_2->connections[VAR_3].pAdvSink != ((void*)0)) &&
       (VAR_2->connections[VAR_3].advf & VAR_0))
    {
      FUNC_0(VAR_2->delegate, VAR_2->remote_connections[VAR_3]);
      VAR_2->remote_connections[VAR_3] = 0;
      VAR_2->connections[VAR_3].advf &= ~VAR_0;
    }
  }
  VAR_2->delegate = ((void*)0);
}
