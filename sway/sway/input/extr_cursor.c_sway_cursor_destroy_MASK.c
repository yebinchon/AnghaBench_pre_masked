
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int link; } ;
struct TYPE_14__ {int link; } ;
struct TYPE_13__ {int link; } ;
struct TYPE_24__ {int link; } ;
struct TYPE_23__ {int link; } ;
struct TYPE_22__ {int link; } ;
struct TYPE_21__ {int link; } ;
struct TYPE_20__ {int link; } ;
struct TYPE_19__ {int link; } ;
struct TYPE_18__ {int link; } ;
struct TYPE_17__ {int link; } ;
struct TYPE_16__ {int link; } ;
struct sway_cursor {int cursor; int xcursor_manager; TYPE_12__ request_set_cursor; TYPE_11__ tool_button; TYPE_10__ tool_tip; TYPE_9__ tool_axis; TYPE_8__ touch_motion; TYPE_7__ touch_up; TYPE_6__ touch_down; TYPE_5__ frame; TYPE_4__ axis; TYPE_3__ button; TYPE_2__ motion_absolute; TYPE_1__ motion; int hide_source; } ;


 int FUNC_0 (struct sway_cursor*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct sway_cursor *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_1(VAR_0->hide_source);

 FUNC_2(&VAR_0->motion.link);
 FUNC_2(&VAR_0->motion_absolute.link);
 FUNC_2(&VAR_0->button.link);
 FUNC_2(&VAR_0->axis.link);
 FUNC_2(&VAR_0->frame.link);
 FUNC_2(&VAR_0->touch_down.link);
 FUNC_2(&VAR_0->touch_up.link);
 FUNC_2(&VAR_0->touch_motion.link);
 FUNC_2(&VAR_0->tool_axis.link);
 FUNC_2(&VAR_0->tool_tip.link);
 FUNC_2(&VAR_0->tool_button.link);
 FUNC_2(&VAR_0->request_set_cursor.link);

 FUNC_4(VAR_0->xcursor_manager);
 FUNC_3(VAR_0->cursor);
 FUNC_0(VAR_0);
}
