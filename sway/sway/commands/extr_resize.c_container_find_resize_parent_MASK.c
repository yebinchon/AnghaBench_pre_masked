
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sway_container {struct sway_container* parent; } ;
struct TYPE_3__ {int length; } ;
typedef TYPE_1__ list_t ;
typedef enum sway_container_layout { ____Placeholder_sway_container_layout } sway_container_layout ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*) ;
 int FUNC_2 (struct sway_container*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

struct sway_container *FUNC_4(struct sway_container *VAR_6,
  uint32_t VAR_7) {
 enum sway_container_layout VAR_8 =
  FUNC_3(VAR_7) ? VAR_0 : VAR_1;
 bool VAR_9 = VAR_7 != VAR_5 && VAR_7 != VAR_3;
 bool VAR_10 = VAR_7 != VAR_4 && VAR_7 != VAR_2;

 while (VAR_6) {
  list_t *VAR_11 = FUNC_0(VAR_6);
  int VAR_12 = FUNC_2(VAR_6);
  if (FUNC_1(VAR_6) == VAR_8 &&
    VAR_11->length > 1 && (VAR_9 || VAR_12 > 0) &&
    (VAR_10 || VAR_12 < VAR_11->length - 1)) {
   return VAR_6;
  }
  VAR_6 = VAR_6->parent;
 }

 return ((void*)0);
}
