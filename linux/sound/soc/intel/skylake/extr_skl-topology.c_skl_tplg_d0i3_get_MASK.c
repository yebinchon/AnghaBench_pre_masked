
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_d0i3_data {int non_streaming; int streaming; int non_d0i3; } ;
struct skl_dev {struct skl_d0i3_data d0i3; } ;
typedef enum d0i3_capability { ____Placeholder_d0i3_capability } d0i3_capability ;






void FUNC_0(struct skl_dev *VAR_0, enum d0i3_capability VAR_1)
{
 struct skl_d0i3_data *VAR_2 = &VAR_0->d0i3;

 switch (VAR_1) {
 case 130:
  VAR_2->non_d0i3++;
  break;

 case 128:
  VAR_2->streaming++;
  break;

 case 129:
  VAR_2->non_streaming++;
  break;
 }
}
