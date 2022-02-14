
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i3bar_block {scalar_t__ ref_count; struct i3bar_block* color; struct i3bar_block* instance; struct i3bar_block* name; struct i3bar_block* min_width_str; struct i3bar_block* align; struct i3bar_block* short_text; struct i3bar_block* full_text; } ;


 int FUNC_0 (struct i3bar_block*) ;

void FUNC_1(struct i3bar_block *VAR_0) {
 if (VAR_0 == ((void*)0)) {
  return;
 }

 if (--VAR_0->ref_count == 0) {
  FUNC_0(VAR_0->full_text);
  FUNC_0(VAR_0->short_text);
  FUNC_0(VAR_0->align);
  FUNC_0(VAR_0->min_width_str);
  FUNC_0(VAR_0->name);
  FUNC_0(VAR_0->instance);
  FUNC_0(VAR_0->color);
  FUNC_0(VAR_0);
 }
}
