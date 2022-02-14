
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {scalar_t__ top; scalar_t__ bottom; int right; int left; } ;
typedef int SURFOBJ ;
typedef TYPE_1__ RECTL ;
typedef scalar_t__ LONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int *,int ,int ,scalar_t__,int ) ;
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
