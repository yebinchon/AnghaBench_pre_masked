
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_notification {scalar_t__ notify; void* data; int mutex; } ;
struct gpio_runtime {struct gpio_notification line_out_notify; struct gpio_notification line_in_notify; struct gpio_notification headphone_notify; } ;
typedef scalar_t__ notify_func_t ;
typedef enum notify_type { ____Placeholder_notify_type } notify_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct gpio_notification*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int ,char*,struct gpio_notification*) ;

__attribute__((used)) static int FUNC_4(struct gpio_runtime *VAR_7,
     enum notify_type VAR_8,
     notify_func_t VAR_9,
     void *VAR_10)
{
 struct gpio_notification *VAR_11;
 notify_func_t VAR_12;
 int VAR_13;
 char *VAR_14;
 int VAR_15 = -VAR_0;

 switch (VAR_8) {
 case 130:
  VAR_11 = &VAR_7->headphone_notify;
  VAR_14 = "headphone-detect";
  VAR_13 = VAR_4;
  break;
 case 129:
  VAR_11 = &VAR_7->line_in_notify;
  VAR_14 = "linein-detect";
  VAR_13 = VAR_5;
  break;
 case 128:
  VAR_11 = &VAR_7->line_out_notify;
  VAR_14 = "lineout-detect";
  VAR_13 = VAR_6;
  break;
 default:
  return -VAR_1;
 }

 if (!VAR_13)
  return -VAR_2;

 FUNC_1(&VAR_11->mutex);

 VAR_12 = VAR_11->notify;

 if (!VAR_12 && !VAR_9) {
  VAR_15 = 0;
  goto out_unlock;
 }

 if (VAR_12 && VAR_9) {
  if (VAR_12 == VAR_9 && VAR_11->data == VAR_10)
   VAR_15 = 0;
  goto out_unlock;
 }

 if (VAR_12 && !VAR_9)
  FUNC_0(VAR_13, VAR_11);

 if (!VAR_12 && VAR_9) {
  VAR_15 = FUNC_3(VAR_13, VAR_3, 0, VAR_14, VAR_11);
  if (VAR_15)
   goto out_unlock;
 }

 VAR_11->notify = VAR_9;
 VAR_11->data = VAR_10;

 VAR_15 = 0;
 out_unlock:
 FUNC_2(&VAR_11->mutex);
 return VAR_15;
}
