
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t maxCons; int advf; struct TYPE_7__* connections; struct TYPE_7__* remote_connections; scalar_t__ delegate; int * pAdvSink; } ;
typedef TYPE_1__ DataAdviseHolder ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,TYPE_1__) ;
 int FUNC_3 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(DataAdviseHolder* VAR_1)
{
  DWORD VAR_2;
  FUNC_3("%p\n", VAR_1);

  for (VAR_2 = 0; VAR_2 < VAR_1->maxCons; VAR_2++)
  {
    if (VAR_1->connections[VAR_2].pAdvSink != ((void*)0))
    {
      if (VAR_1->delegate &&
          (VAR_1->connections[VAR_2].advf & VAR_0))
        FUNC_2(VAR_1->delegate,
          VAR_1->remote_connections[VAR_2]);

      FUNC_4(VAR_1->connections + VAR_2);
    }
  }

  FUNC_1(FUNC_0(), 0, VAR_1->remote_connections);
  FUNC_1(FUNC_0(), 0, VAR_1->connections);
  FUNC_1(FUNC_0(), 0, VAR_1);
}
