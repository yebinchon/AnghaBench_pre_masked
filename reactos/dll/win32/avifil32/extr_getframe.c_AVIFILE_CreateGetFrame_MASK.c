
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int lCurrentFrame; TYPE_1__ IGetFrame_iface; int * pStream; } ;
typedef TYPE_1__* PGETFRAME ;
typedef int * PAVISTREAM ;
typedef TYPE_2__ IGetFrameImpl ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

PGETFRAME FUNC_3(PAVISTREAM VAR_2)
{
  IGetFrameImpl *VAR_3;


  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_3 = FUNC_1(FUNC_0(), VAR_0, sizeof(IGetFrameImpl));
  if (VAR_3 != ((void*)0)) {
    VAR_3->IGetFrame_iface.lpVtbl = &VAR_1;
    VAR_3->ref = 1;
    VAR_3->lCurrentFrame = -1;
    VAR_3->pStream = VAR_2;
    FUNC_2(VAR_2);
  }

  return &VAR_3->IGetFrame_iface;
}
