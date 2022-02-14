
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sway_container {scalar_t__ width; scalar_t__ height; } ;
struct resize_amount {scalar_t__ unit; scalar_t__ amount; int member_0; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char const*) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_2 (struct sway_container*) ;
 int FUNC_3 (int,char**,struct resize_amount*) ;
 struct cmd_results* FUNC_4 (struct sway_container*,struct resize_amount*,struct resize_amount*) ;
 struct cmd_results* FUNC_5 (struct sway_container*,struct resize_amount*,struct resize_amount*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static struct cmd_results *FUNC_7(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6;
 if ((VAR_6 = FUNC_0(VAR_4, "resize", VAR_1, 1))) {
  return VAR_6;
 }
 const char VAR_7[] = "Expected 'resize set [width] <width> [px|ppt]' or "
  "'resize set height <height> [px|ppt]' or "
  "'resize set [width] <width> [px|ppt] [height] <height> [px|ppt]'";


 struct resize_amount VAR_8 = {0};
 if (VAR_4 >= 2 && !FUNC_6(VAR_5[0], "width") && FUNC_6(VAR_5[1], "height")) {
  VAR_4--; VAR_5++;
 }
 if (FUNC_6(VAR_5[0], "height")) {
  int VAR_9 = FUNC_3(VAR_4, VAR_5, &VAR_8);
  VAR_4 -= VAR_9;
  VAR_5 += VAR_9;
  if (VAR_8.unit == VAR_2) {
   return FUNC_1(VAR_0, VAR_7);
  }
 }


 struct resize_amount VAR_10 = {0};
 if (VAR_4) {
  if (VAR_4 >= 2 && !FUNC_6(VAR_5[0], "height")) {
   VAR_4--; VAR_5++;
  }
  int VAR_11 = FUNC_3(VAR_4, VAR_5, &VAR_10);
  if (VAR_4 > VAR_11) {
   return FUNC_1(VAR_0, VAR_7);
  }
  if (VAR_8.unit == VAR_2) {
   return FUNC_1(VAR_0, VAR_7);
  }
 }


 struct sway_container *VAR_12 = VAR_3->handler_context.container;
 if (VAR_8.amount <= 0) {
  VAR_8.amount = VAR_12->width;
 }
 if (VAR_10.amount <= 0) {
  VAR_10.amount = VAR_12->height;
 }

 if (FUNC_2(VAR_12)) {
  return FUNC_4(VAR_12, &VAR_8, &VAR_10);
 }
 return FUNC_5(VAR_12, &VAR_8, &VAR_10);
}
