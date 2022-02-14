
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {char* formatted_title; scalar_t__ view; } ;
struct TYPE_3__ {int length; struct sway_container** items; } ;
typedef TYPE_1__ list_t ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;







 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;

size_t FUNC_4(enum sway_container_layout VAR_0,
  list_t *VAR_1, char *VAR_2) {
 size_t VAR_3 = 2;
 switch (VAR_0) {
 case 128:
  FUNC_0(VAR_2, "V[");
  break;
 case 132:
  FUNC_0(VAR_2, "H[");
  break;
 case 129:
  FUNC_0(VAR_2, "T[");
  break;
 case 130:
  FUNC_0(VAR_2, "S[");
  break;
 case 131:
  FUNC_0(VAR_2, "D[");
  break;
 }
 for (int VAR_4 = 0; VAR_4 < VAR_1->length; ++VAR_4) {
  if (VAR_4 != 0) {
   ++VAR_3;
   FUNC_0(VAR_2, " ");
  }
  struct sway_container *VAR_5 = VAR_1->items[VAR_4];
  const char *VAR_6 = ((void*)0);
  if (VAR_5->view) {
   VAR_6 = FUNC_3(VAR_5->view);
   if (!VAR_6) {
    VAR_6 = FUNC_2(VAR_5->view);
   }
  } else {
   VAR_6 = VAR_5->formatted_title;
  }
  if (VAR_6) {
   VAR_3 += FUNC_1(VAR_6);
   FUNC_0(VAR_2, VAR_6);
  } else {
   VAR_3 += 6;
   FUNC_0(VAR_2, "(null)");
  }
 }
 ++VAR_3;
 FUNC_0(VAR_2, "]");
 return VAR_3;
}
