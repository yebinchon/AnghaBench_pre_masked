
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lock; } ;
struct TYPE_6__ {TYPE_1__ locks; } ;
typedef TYPE_2__ fz_context ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ VAR_0 ;
 int ** VAR_1 ;
 int** VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;

void FUNC_3(fz_context *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_4->locks.lock != VAR_0)
  return;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0)
  return;

 if (VAR_2[VAR_7][VAR_5] != 0)
 {
  FUNC_1(VAR_3, "Attempt to take lock %d when held already!\n", VAR_5);
 }
 for (VAR_6 = VAR_5-1; VAR_6 >= 0; VAR_6--)
 {
  if (VAR_2[VAR_7][VAR_6] != 0)
  {
   FUNC_1(VAR_3, "Lock ordering violation: Attempt to take lock %d when %d held already!\n", VAR_5, VAR_6);
  }
 }
 VAR_2[VAR_7][VAR_5] = 1;



}
