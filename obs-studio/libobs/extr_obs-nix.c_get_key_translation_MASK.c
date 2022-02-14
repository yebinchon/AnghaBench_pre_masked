
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ xcb_keycode_t ;
typedef int xcb_connection_t ;
struct dstr {int dummy; } ;
struct TYPE_7__ {int root; int window; scalar_t__ keycode; int display; int type; int member_0; } ;
typedef TYPE_2__ XKeyEvent ;
struct TYPE_6__ {TYPE_3__* platform_context; } ;
struct TYPE_9__ {TYPE_1__ hotkeys; } ;
struct TYPE_8__ {int display; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*,int,int *,int *) ;
 int FUNC_2 (struct dstr*,char*,int) ;
 int FUNC_3 (struct dstr*) ;
 TYPE_4__* VAR_1 ;
 int FUNC_4 (TYPE_3__*,int *) ;

__attribute__((used)) static bool FUNC_5(struct dstr *VAR_2, xcb_keycode_t VAR_3)
{
 xcb_connection_t *VAR_4;
 char VAR_5[128];

 VAR_4 = FUNC_0(VAR_1->hotkeys.platform_context->display);

 XKeyEvent VAR_6 = {0};
 VAR_6.type = VAR_0;
 VAR_6.display = VAR_1->hotkeys.platform_context->display;
 VAR_6.keycode = VAR_3;
 VAR_6.root = FUNC_4(VAR_1->hotkeys.platform_context, VAR_4);
 VAR_6.window = VAR_6.root;

 if (VAR_3) {
  int VAR_7 = FUNC_1(&VAR_6, VAR_5, 128, ((void*)0), ((void*)0));
  if (VAR_7) {
   FUNC_2(VAR_2, VAR_5, VAR_7);
   FUNC_3(VAR_2);
   return 1;
  }
 }

 return 0;
}
