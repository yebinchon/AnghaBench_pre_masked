
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct menu {TYPE_1__* prompt; struct menu* next; struct menu* list; int flags; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct menu *VAR_2)
{
 struct menu *VAR_3;
 static int VAR_4 = 0;

 VAR_2->flags |= VAR_0;
 for (VAR_3 = VAR_2->list; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->prompt && VAR_3->prompt->type == VAR_1) {
   VAR_4++;
   FUNC_0(VAR_3);
   VAR_4--;
  } else if (!VAR_4)
   FUNC_0(VAR_3);
 }
}
