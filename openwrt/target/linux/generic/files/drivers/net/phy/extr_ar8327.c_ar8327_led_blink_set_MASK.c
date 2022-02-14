
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct ar8327_led {int enable_hw_mode; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar8327_led*,int ) ;
 struct ar8327_led* FUNC_1 (struct led_classdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct led_classdev *VAR_2,
       unsigned long *VAR_3,
       unsigned long *VAR_4)
{
 struct ar8327_led *VAR_5 = FUNC_1(VAR_2);

 if (*VAR_3 == 0 && *VAR_4 == 0) {
  *VAR_3 = 125;
  *VAR_4 = 125;
 }

 if (*VAR_3 != 125 || *VAR_4 != 125) {




  return -VAR_1;
 }

 FUNC_2(&VAR_5->lock);

 VAR_5->enable_hw_mode = 0;
 FUNC_0(VAR_5, VAR_0);

 FUNC_3(&VAR_5->lock);

 return 0;
}
