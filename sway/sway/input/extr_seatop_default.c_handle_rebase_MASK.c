
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct wlr_surface {int dummy; } ;
struct sway_seat {struct sway_cursor* cursor; struct seatop_default_event* seatop_data; } ;
struct sway_cursor {TYPE_1__* cursor; } ;
struct seatop_default_event {int previous_node; } ;
struct TYPE_2__ {int y; int x; } ;


 int FUNC_0 (struct sway_cursor*,int ,int ,struct wlr_surface*,double,double) ;
 int FUNC_1 (struct sway_seat*,int ,int ,struct wlr_surface**,double*,double*) ;

__attribute__((used)) static void FUNC_2(struct sway_seat *VAR_0, uint32_t VAR_1) {
 struct seatop_default_event *VAR_2 = VAR_0->seatop_data;
 struct sway_cursor *VAR_3 = VAR_0->cursor;
 struct wlr_surface *VAR_4 = ((void*)0);
 double VAR_5 = 0.0, VAR_6 = 0.0;
 VAR_2->previous_node = FUNC_1(VAR_0,
   VAR_3->cursor->x, VAR_3->cursor->y, &VAR_4, &VAR_5, &VAR_6);
 FUNC_0(VAR_3, VAR_1, VAR_2->previous_node, VAR_4, VAR_5, VAR_6);
}
