
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wlr_box {int y; int x; } ;
struct sway_output {int damage; TYPE_1__* wlr_output; scalar_t__ ly; scalar_t__ lx; } ;
struct TYPE_2__ {int scale; } ;


 int FUNC_0 (struct wlr_box*,struct wlr_box*,int) ;
 int FUNC_1 (struct wlr_box*,int ) ;
 int FUNC_2 (int ,struct wlr_box*) ;

void FUNC_3(struct sway_output *VAR_0, struct wlr_box *VAR_1) {
 struct wlr_box VAR_2;
 FUNC_0(&VAR_2, VAR_1, sizeof(struct wlr_box));
 VAR_2.x -= VAR_0->lx;
 VAR_2.y -= VAR_0->ly;
 FUNC_1(&VAR_2, VAR_0->wlr_output->scale);
 FUNC_2(VAR_0->damage, &VAR_2);
}
