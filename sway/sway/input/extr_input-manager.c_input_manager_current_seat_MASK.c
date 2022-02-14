
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_seat {int dummy; } ;
struct TYPE_3__ {struct sway_seat* seat; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 TYPE_2__* VAR_0 ;
 struct sway_seat* FUNC_0 () ;

struct sway_seat *FUNC_1(void) {
 struct sway_seat *VAR_1 = VAR_0->handler_context.seat;
 if (!VAR_1) {
  VAR_1 = FUNC_0();
 }
 return VAR_1;
}
