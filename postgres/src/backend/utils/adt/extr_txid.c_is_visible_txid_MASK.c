
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32 ;
typedef scalar_t__ txid ;
struct TYPE_3__ {scalar_t__ xmin; scalar_t__ xmax; scalar_t__ nxip; scalar_t__* xip; } ;
typedef TYPE_1__ TxidSnapshot ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(txid VAR_2, const TxidSnapshot *VAR_3)
{
 if (VAR_2 < VAR_3->xmin)
  return 1;
 else if (VAR_2 >= VAR_3->xmax)
  return 0;
 else
 {
  uint32 VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3->nxip; VAR_4++)
  {
   if (VAR_2 == VAR_3->xip[VAR_4])
    return 0;
  }
  return 1;
 }
}
