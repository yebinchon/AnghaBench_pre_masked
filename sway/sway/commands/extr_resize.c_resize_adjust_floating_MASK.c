
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sway_container {int width; int height; int x; int y; int content_x; int content_y; int content_width; int content_height; } ;
struct resize_amount {int amount; } ;
struct cmd_results {int dummy; } ;
struct TYPE_3__ {struct sway_container* container; } ;
struct TYPE_4__ {TYPE_1__ handler_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sway_container*) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_6 ;
 int FUNC_2 (int*,int*,int*,int*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct cmd_results *FUNC_4(uint32_t VAR_7,
  struct resize_amount *VAR_8) {
 struct sway_container *VAR_9 = VAR_6->handler_context.container;
 int VAR_10 = 0, VAR_11 = 0;

 if (FUNC_3(VAR_7)) {
  VAR_10 = VAR_8->amount;
 } else {
  VAR_11 = VAR_8->amount;
 }


 int VAR_12, VAR_13, VAR_14, VAR_15;
 FUNC_2(&VAR_12, &VAR_13,
   &VAR_14, &VAR_15);
 if (VAR_9->width + VAR_10 < VAR_12) {
  VAR_10 = VAR_12 - VAR_9->width;
 } else if (VAR_9->width + VAR_10 > VAR_13) {
  VAR_10 = VAR_13 - VAR_9->width;
 }
 if (VAR_9->height + VAR_11 < VAR_14) {
  VAR_11 = VAR_14 - VAR_9->height;
 } else if (VAR_9->height + VAR_11 > VAR_15) {
  VAR_11 = VAR_15 - VAR_9->height;
 }
 int VAR_16 = 0, VAR_17 = 0;

 if (VAR_7 == VAR_0) {
  VAR_16 = -VAR_10 / 2;
 } else if (VAR_7 == VAR_1) {
  VAR_17 = -VAR_11 / 2;
 } else if (VAR_7 == VAR_5) {
  VAR_17 = -VAR_11;
 } else if (VAR_7 == VAR_4) {
  VAR_16 = -VAR_10;
 }
 if (VAR_16 == 0 && VAR_17 == 0) {
  return FUNC_1(VAR_2, "Cannot resize any further");
 }
 VAR_9->x += VAR_16;
 VAR_9->y += VAR_17;
 VAR_9->width += VAR_10;
 VAR_9->height += VAR_11;

 VAR_9->content_x += VAR_16;
 VAR_9->content_y += VAR_17;
 VAR_9->content_width += VAR_10;
 VAR_9->content_height += VAR_11;

 FUNC_0(VAR_9);

 return FUNC_1(VAR_3, ((void*)0));
}
