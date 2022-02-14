
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_runtime {int dummy; } ;
typedef enum notify_type { ____Placeholder_notify_type } notify_type ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct gpio_runtime *VAR_9,
     enum notify_type VAR_10)
{
 int VAR_11, VAR_12, VAR_13;

 switch (VAR_10) {
 case 130:
  VAR_11 = VAR_3;
  VAR_13 = VAR_4;
  break;
 case 129:
  VAR_11 = VAR_5;
  VAR_13 = VAR_6;
  break;
 case 128:
  VAR_11 = VAR_7;
  VAR_13 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_11 == -1)
  return -VAR_1;

 VAR_12 = FUNC_0(VAR_2, ((void*)0), VAR_11, 0);
 if (VAR_12 < 0)
  return VAR_12;
 return ((VAR_12 >> 1) & 1) == VAR_13;
}
