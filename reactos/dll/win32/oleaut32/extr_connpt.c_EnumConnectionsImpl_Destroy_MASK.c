
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nConns; struct TYPE_4__* pCD; int pUnk; } ;
typedef TYPE_1__ EnumConnectionsImpl ;
typedef size_t DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(EnumConnectionsImpl *VAR_0)
{
  DWORD VAR_1;

  for(VAR_1 = 0; VAR_1 < VAR_0->nConns; VAR_1++)
    FUNC_2(VAR_0->pCD[VAR_1].pUnk);

  FUNC_1(FUNC_0(), 0, VAR_0->pCD);
  FUNC_1(FUNC_0(), 0, VAR_0);
  return;
}
