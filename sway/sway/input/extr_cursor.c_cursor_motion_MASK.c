
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct wlr_surface {int dummy; } ;
struct wlr_input_device {int dummy; } ;
struct sway_cursor {TYPE_4__* seat; TYPE_2__* cursor; int confine; TYPE_1__* active_constraint; } ;
struct TYPE_9__ {int wlr_seat; } ;
struct TYPE_8__ {int relative_pointer_manager; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_6__ {struct wlr_surface* surface; } ;


 int FUNC_0 (struct sway_cursor*) ;
 int FUNC_1 (TYPE_4__*,int ,int ,struct wlr_surface**,double*,double*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,double,double) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (TYPE_2__*,struct wlr_input_device*,double,double) ;
 int FUNC_4 (int *,double,double,double,double,double*,double*) ;
 int FUNC_5 (int ,int ,int,double,double,double,double) ;

__attribute__((used)) static void FUNC_6(struct sway_cursor *VAR_1, uint32_t VAR_2,
  struct wlr_input_device *VAR_3, double VAR_4, double VAR_5,
  double VAR_6, double VAR_7) {
 FUNC_0(VAR_1);

 FUNC_5(
  VAR_0.relative_pointer_manager,
  VAR_1->seat->wlr_seat, (uint64_t)VAR_2 * 1000,
  VAR_4, VAR_5, VAR_6, VAR_7);

 struct wlr_surface *VAR_8 = ((void*)0);
 double VAR_9, VAR_10;
 if (VAR_1->active_constraint) {
  FUNC_1(VAR_1->seat,
   VAR_1->cursor->x, VAR_1->cursor->y, &VAR_8, &VAR_9, &VAR_10);

  if (VAR_1->active_constraint->surface != VAR_8) {
   return;
  }

  double VAR_11, VAR_12;
  if (!FUNC_4(&VAR_1->confine, VAR_9, VAR_10, VAR_9 + VAR_4, VAR_10 + VAR_5,
    &VAR_11, &VAR_12)) {
   return;
  }

  VAR_4 = VAR_11 - VAR_9;
  VAR_5 = VAR_12 - VAR_10;
 }

 FUNC_3(VAR_1->cursor, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_1->seat, VAR_2, VAR_4, VAR_5);
}
