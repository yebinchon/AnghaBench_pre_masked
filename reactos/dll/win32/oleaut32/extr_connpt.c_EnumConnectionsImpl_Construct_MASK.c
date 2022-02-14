
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int pUnk; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; int nConns; TYPE_3__* pCD; scalar_t__ nCur; int * pUnk; TYPE_1__ IEnumConnections_iface; } ;
typedef int IUnknown ;
typedef TYPE_2__ EnumConnectionsImpl ;
typedef int DWORD ;
typedef TYPE_3__ CONNECTDATA ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static EnumConnectionsImpl *FUNC_3(IUnknown *VAR_1,
         DWORD VAR_2,
         CONNECTDATA *VAR_3)
{
  EnumConnectionsImpl *VAR_4 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_4));
  DWORD VAR_5;

  VAR_4->IEnumConnections_iface.lpVtbl = &VAR_0;
  VAR_4->ref = 1;
  VAR_4->pUnk = VAR_1;
  VAR_4->pCD = FUNC_1(FUNC_0(), 0, VAR_2 * sizeof(CONNECTDATA));
  VAR_4->nConns = VAR_2;
  VAR_4->nCur = 0;

  for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
    VAR_4->pCD[VAR_5] = VAR_3[VAR_5];
    FUNC_2(VAR_4->pCD[VAR_5].pUnk);
  }
  return VAR_4;
}
