
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct touch_slot {scalar_t__ id; int output; } ;
struct swaybar_touch {struct touch_slot* slots; } ;
typedef int ssize_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static struct touch_slot *FUNC_1(struct swaybar_touch *VAR_1, int32_t VAR_2) {
 ssize_t VAR_3 = -1;
 for (size_t VAR_4 = 0; VAR_4 < sizeof(VAR_1->slots) / sizeof(*VAR_1->slots); ++VAR_4) {
  if (VAR_1->slots[VAR_4].id == VAR_2) {
   return &VAR_1->slots[VAR_4];
  }
  if (VAR_3 == -1 && !VAR_1->slots[VAR_4].output) {
   VAR_3 = VAR_4;
  }
 }
 if (VAR_3 == -1) {
  FUNC_0(VAR_0, "Ran out of touch slots");
  return ((void*)0);
 }
 return &VAR_1->slots[VAR_3];
}
