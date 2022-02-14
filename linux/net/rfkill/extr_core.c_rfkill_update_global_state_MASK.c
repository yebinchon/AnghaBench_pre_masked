
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;
struct TYPE_2__ {int cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_0(enum rfkill_type VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_3 != VAR_1) {
  VAR_2[VAR_3].cur = VAR_4;
  return;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2[VAR_5].cur = VAR_4;
}
