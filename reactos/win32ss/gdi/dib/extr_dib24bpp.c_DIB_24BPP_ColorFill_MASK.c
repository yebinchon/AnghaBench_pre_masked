
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_7__ {int top; int left; int right; int bottom; } ;
struct TYPE_6__ {int lDelta; scalar_t__ pvScan0; } ;
typedef TYPE_1__ SURFOBJ ;
typedef TYPE_2__ RECTL ;
typedef int* PUSHORT ;
typedef int* PBYTE ;
typedef int LONG ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_1__*,int,int,int,int) ;
 int VAR_0 ;

BOOLEAN
FUNC_1(SURFOBJ* VAR_1, RECTL* VAR_2, ULONG VAR_3)
{
  LONG VAR_4;
  for (VAR_4 = VAR_2->top; VAR_4< VAR_2->bottom; VAR_4++)
  {
    FUNC_0(VAR_1, VAR_2->left, VAR_2->right, VAR_4, VAR_3);
  }

  return VAR_0;
}
