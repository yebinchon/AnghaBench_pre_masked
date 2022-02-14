
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* cstate; unsigned long* pstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,unsigned long*,unsigned long*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_1(int VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   VAR_6 = VAR_8 * VAR_1 + VAR_9;
   FUNC_0(VAR_4, &VAR_6, &VAR_7);
   VAR_3[VAR_8].cstate[VAR_9] = VAR_7;
  }

  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   VAR_6 = VAR_8 * VAR_2 + VAR_9;
   FUNC_0(VAR_5, &VAR_6, &VAR_7);
   VAR_3[VAR_8].pstate[VAR_9] = VAR_7;
  }
 }
}
