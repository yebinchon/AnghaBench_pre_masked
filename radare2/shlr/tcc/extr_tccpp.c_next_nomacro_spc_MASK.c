
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int line_num; } ;
struct TYPE_4__ {int i; } ;


 int FUNC_0 (scalar_t__*,scalar_t__**,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
 if (VAR_2) {
redo:
  VAR_3 = *VAR_2;
  if (VAR_3) {
   FUNC_0 (&VAR_3, &VAR_2, &VAR_4);
   if (VAR_3 == VAR_0) {
    VAR_1->line_num = VAR_4.i;
    goto redo;
   }
  }
 } else {
  FUNC_1 ();
 }
}
