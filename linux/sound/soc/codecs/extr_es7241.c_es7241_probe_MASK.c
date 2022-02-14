
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct es7241_data {void* m1; void* m0; void* reset; int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 struct es7241_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct device*,struct es7241_data*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct platform_device*,struct es7241_data*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct es7241_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_8, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;
 FUNC_8(VAR_7, VAR_9);

 VAR_9->chip = FUNC_7(VAR_8);
 if (!VAR_9->chip) {
  FUNC_2(VAR_8, "failed to match device\n");
  return -VAR_0;
 }

 FUNC_6(VAR_8, VAR_9);

 VAR_9->reset = FUNC_3(VAR_8, "reset", VAR_4);
 if (FUNC_0(VAR_9->reset)) {
  VAR_10 = FUNC_1(VAR_9->reset);
  if (VAR_10 != -VAR_2)
   FUNC_2(VAR_8, "Failed to get 'reset' gpio: %d", VAR_10);
  return VAR_10;
 }

 VAR_9->m0 = FUNC_3(VAR_8, "m0", VAR_4);
 if (FUNC_0(VAR_9->m0)) {
  VAR_10 = FUNC_1(VAR_9->m0);
  if (VAR_10 != -VAR_2)
   FUNC_2(VAR_8, "Failed to get 'm0' gpio: %d", VAR_10);
  return VAR_10;
 }

 VAR_9->m1 = FUNC_3(VAR_8, "m1", VAR_4);
 if (FUNC_0(VAR_9->m1)) {
  VAR_10 = FUNC_1(VAR_9->m1);
  if (VAR_10 != -VAR_2)
   FUNC_2(VAR_8, "Failed to get 'm1' gpio: %d", VAR_10);
  return VAR_10;
 }

 return FUNC_5(&VAR_7->dev,
          &VAR_5,
          &VAR_6, 1);
}
