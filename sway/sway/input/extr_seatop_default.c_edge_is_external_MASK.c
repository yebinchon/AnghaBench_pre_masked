
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sway_container {struct sway_container* parent; } ;
struct TYPE_4__ {int length; } ;
typedef TYPE_1__ list_t ;
typedef enum wlr_edges { ____Placeholder_wlr_edges } wlr_edges ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 TYPE_1__* FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (TYPE_1__*,struct sway_container*) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static bool FUNC_4(struct sway_container *VAR_3, enum wlr_edges VAR_4) {
 enum sway_container_layout VAR_5 = VAR_1;
 switch (VAR_4) {
 case 128:
 case 132:
  VAR_5 = VAR_2;
  break;
 case 131:
 case 129:
  VAR_5 = VAR_0;
  break;
 case 130:
  FUNC_3(0, "Never reached");
  return 0;
 }



 while (VAR_3) {
  if (FUNC_1(VAR_3) == VAR_5) {
   list_t *VAR_6 = FUNC_0(VAR_3);
   int VAR_7 = FUNC_2(VAR_6, VAR_3);
   if (VAR_7 > 0 && (VAR_4 == 131 || VAR_4 == 128)) {
    return 0;
   }
   if (VAR_7 < VAR_6->length - 1 &&
     (VAR_4 == 129 || VAR_4 == 132)) {
    return 0;
   }
  }
  VAR_3 = VAR_3->parent;
 }
 return 1;
}
