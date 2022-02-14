
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sway_binding {scalar_t__ type; scalar_t__ flags; scalar_t__ group; int modifiers; TYPE_1__* keys; int input; } ;
struct TYPE_2__ {int length; scalar_t__* items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct sway_binding *VAR_5,
  struct sway_binding *VAR_6) {
 if (FUNC_0(VAR_5->input, VAR_6->input) != 0) {
  return 0;
 }

 if (VAR_5->type != VAR_6->type) {
  return 0;
 }

 uint32_t VAR_7 = VAR_3 | VAR_0
   | VAR_1 | VAR_4 | VAR_2;
 if ((VAR_5->flags & VAR_7) !=
   (VAR_6->flags & VAR_7)) {
  return 0;
 }

 if (VAR_5->group != VAR_6->group) {
  return 0;
 }

 if (VAR_5->modifiers ^ VAR_6->modifiers) {
  return 0;
 }

 if (VAR_5->keys->length != VAR_6->keys->length) {
  return 0;
 }


 int VAR_8 = VAR_5->keys->length;
 for (int VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
  uint32_t VAR_10 = *(uint32_t *)VAR_5->keys->items[VAR_9];
  uint32_t VAR_11 = *(uint32_t *)VAR_6->keys->items[VAR_9];
  if (VAR_10 != VAR_11) {
   return 0;
  }
 }

 return 1;
}
