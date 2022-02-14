
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sway_shortcut_state {size_t npressed; scalar_t__* pressed_keycodes; scalar_t__ current_key; scalar_t__* pressed_keys; } ;



__attribute__((used)) static bool FUNC_0(struct sway_shortcut_state *VAR_0,
  uint32_t VAR_1) {
 bool VAR_2 = 0;
 size_t VAR_3 = 0;
 for (size_t VAR_4 = 0; VAR_4 < VAR_0->npressed; ++VAR_4) {
  if (VAR_4 > VAR_3) {
   VAR_0->pressed_keys[VAR_3] = VAR_0->pressed_keys[VAR_4];
   VAR_0->pressed_keycodes[VAR_3] = VAR_0->pressed_keycodes[VAR_4];
  }
  if (VAR_0->pressed_keycodes[VAR_4] != VAR_1) {
   ++VAR_3;
  } else {
   VAR_2 = 1;
  }
 }
 while(VAR_0->npressed > VAR_3) {
  --VAR_0->npressed;
  VAR_0->pressed_keys[VAR_0->npressed] = 0;
  VAR_0->pressed_keycodes[VAR_0->npressed] = 0;
 }
 VAR_0->current_key = 0;
 return VAR_2;
}
