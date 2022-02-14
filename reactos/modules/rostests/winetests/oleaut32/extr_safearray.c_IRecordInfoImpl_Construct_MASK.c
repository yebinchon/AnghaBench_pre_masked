
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {scalar_t__ sizeCalled; scalar_t__ clearCalled; int ref; TYPE_1__ IRecordInfo_iface; } ;
typedef TYPE_2__ IRecordInfoImpl ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static IRecordInfoImpl *FUNC_2(void)
{
  IRecordInfoImpl *VAR_2;

  VAR_2 = FUNC_1(FUNC_0(), 0, sizeof(IRecordInfoImpl));
  VAR_2->IRecordInfo_iface.lpVtbl = &VAR_0;
  VAR_2->ref = VAR_1;
  VAR_2->clearCalled = 0;
  VAR_2->sizeCalled = 0;
  return VAR_2;
}
