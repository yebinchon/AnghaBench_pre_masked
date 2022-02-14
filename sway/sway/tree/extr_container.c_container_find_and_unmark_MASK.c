
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_container {TYPE_1__* marks; } ;
struct TYPE_2__ {int length; char** items; } ;


 int FUNC_0 (struct sway_container*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sway_container*,char*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 struct sway_container* FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

bool FUNC_6(char *VAR_1) {
 struct sway_container *VAR_2 = FUNC_4(
  VAR_0, VAR_1);
 if (!VAR_2) {
  return 0;
 }

 for (int VAR_3 = 0; VAR_3 < VAR_2->marks->length; ++VAR_3) {
  char *VAR_4 = VAR_2->marks->items[VAR_3];
  if (FUNC_5(VAR_4, VAR_1) == 0) {
   FUNC_1(VAR_4);
   FUNC_3(VAR_2->marks, VAR_3);
   FUNC_0(VAR_2);
   FUNC_2(VAR_2, "mark");
   return 1;
  }
 }
 return 0;
}
