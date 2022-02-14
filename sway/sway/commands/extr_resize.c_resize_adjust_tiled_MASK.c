
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sway_container {double width_fraction; double height_fraction; scalar_t__ height; scalar_t__ width; } ;
struct resize_amount {scalar_t__ unit; float amount; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cmd_results* FUNC_0 (int ,char*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (struct sway_container*,int ,float) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct cmd_results *FUNC_3(uint32_t VAR_5,
  struct resize_amount *VAR_6) {
 struct sway_container *VAR_7 = VAR_4->handler_context.container;

 if (VAR_6->unit == VAR_2) {
  VAR_6->unit = VAR_3;
 }
 if (VAR_6->unit == VAR_3) {
  float VAR_8 = VAR_6->amount / 100.0f;

  if (FUNC_2(VAR_5)) {
   VAR_6->amount = (float)VAR_7->width * VAR_8;
  } else {
   VAR_6->amount = (float)VAR_7->height * VAR_8;
  }
 }

 double VAR_9 = VAR_7->width_fraction;
 double VAR_10 = VAR_7->height_fraction;
 FUNC_1(VAR_7, VAR_5, VAR_6->amount);
 if (VAR_7->width_fraction == VAR_9 &&
   VAR_7->height_fraction == VAR_10) {
  return FUNC_0(VAR_0, "Cannot resize any further");
 }
 return FUNC_0(VAR_1, ((void*)0));
}
