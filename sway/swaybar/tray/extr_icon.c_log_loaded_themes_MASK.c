
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct icon_theme {char const* name; } ;
struct TYPE_3__ {scalar_t__ length; struct icon_theme** items; } ;
typedef TYPE_1__ list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(list_t *VAR_2) {
 if (VAR_2->length == 0) {
  FUNC_4(VAR_1, "Warning: no icon themes loaded");
  return;
 }

 const char VAR_3[] = ", ";
 size_t VAR_4 = FUNC_3(VAR_3);

 size_t VAR_5 = 0;
 for (int VAR_6 = 0; VAR_6 < VAR_2->length; ++VAR_6) {
  struct icon_theme *VAR_7 = VAR_2->items[VAR_6];
  VAR_5 += FUNC_3(VAR_7->name) + VAR_4;
 }

 char *VAR_8 = FUNC_1(VAR_5 + 1);
 if (!VAR_8) {
  return;
 }
 char *VAR_9 = VAR_8;
 for (int VAR_10 = 0; VAR_10 < VAR_2->length; ++VAR_10) {
  if (VAR_10 > 0) {
   FUNC_2(VAR_9, VAR_3, VAR_4);
   VAR_9 += VAR_4;
  }

  struct icon_theme *VAR_11 = VAR_2->items[VAR_10];
  size_t VAR_12 = FUNC_3(VAR_11->name);
  FUNC_2(VAR_9, VAR_11->name, VAR_12);
  VAR_9 += VAR_12;
 }
 *VAR_9 = '\0';

 FUNC_4(VAR_0, "Loaded icon themes: %s", VAR_8);
 FUNC_0(VAR_8);
}
