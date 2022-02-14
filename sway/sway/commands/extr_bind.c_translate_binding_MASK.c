
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xkb_keysym_t ;
typedef int xkb_keycode_t ;
struct sway_binding {int flags; int type; TYPE_1__* syms; TYPE_1__* keys; } ;
struct keycode_matches {int count; int keycode; } ;
struct TYPE_4__ {int length; int ** items; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 () ;
 struct keycode_matches FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;

bool FUNC_7(struct sway_binding *VAR_4) {
 if ((VAR_4->flags & VAR_0) == 0) {
  return 1;
 }

 switch (VAR_4->type) {

 case 128:
  VAR_4->syms = VAR_4->keys;
  VAR_4->keys = FUNC_0();
  break;

 case 129:
  FUNC_3(VAR_4->keys);
  VAR_4->keys = FUNC_0();
  break;
 default:
  return 1;
 }

 for (int VAR_5 = 0; VAR_5 < VAR_4->syms->length; ++VAR_5) {
  xkb_keysym_t *VAR_6 = VAR_4->syms->items[VAR_5];
  struct keycode_matches VAR_7 = FUNC_1(*VAR_6);

  if (VAR_7.count != 1) {
   FUNC_6(VAR_2, "Unable to convert keysym %d into"
     " a single keycode (found %d matches)",
     *VAR_6, VAR_7.count);
   goto error;
  }

  xkb_keycode_t *VAR_8 = FUNC_5(sizeof(xkb_keycode_t));
  if (!VAR_8) {
   FUNC_6(VAR_1, "Unable to allocate memory for a keycode");
   goto error;
  }

  *VAR_8 = VAR_7.keycode;
  FUNC_2(VAR_4->keys, VAR_8);
 }

 FUNC_4(VAR_4->keys, VAR_3);
 VAR_4->type = 129;
 return 1;

error:
 FUNC_3(VAR_4->keys);
 VAR_4->type = 128;
 VAR_4->keys = VAR_4->syms;
 VAR_4->syms = ((void*)0);
 return 0;
}
