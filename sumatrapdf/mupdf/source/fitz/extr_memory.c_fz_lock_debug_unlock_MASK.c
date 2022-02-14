
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
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__** VAR_1 ;
 int ** VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;

void FUNC_3(fz_context *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->locks.lock != VAR_0)
  return;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0)
  return;

 if (VAR_3[VAR_7][VAR_6] == 0)
 {
  FUNC_1(VAR_4, "Attempt to release lock %d when not held!\n", VAR_6);
 }
 VAR_3[VAR_7][VAR_6] = 0;



}
