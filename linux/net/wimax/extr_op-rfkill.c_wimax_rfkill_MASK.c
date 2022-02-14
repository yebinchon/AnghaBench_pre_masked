
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int rf_sw; int rf_hw; int mutex; int rfkill; } ;
struct device {int dummy; } ;
typedef enum wimax_rf_state { ____Placeholder_wimax_rf_state } wimax_rf_state ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct wimax_dev*,int) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct wimax_dev*) ;
 struct device* FUNC_7 (struct wimax_dev*) ;

int FUNC_8(struct wimax_dev *VAR_2, enum wimax_rf_state VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = FUNC_7(VAR_2);

 FUNC_2(3, VAR_5, "(wimax_dev %p state %u)\n", VAR_2, VAR_3);
 FUNC_3(&VAR_2->mutex);
 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4 < 0) {




  if (VAR_4 == -VAR_1 && VAR_3 == 128)
   VAR_4 = 130 << 1 | 130;
  goto error_not_ready;
 }
 switch (VAR_3) {
 case 129:
 case 130:
  VAR_4 = FUNC_0(VAR_2, VAR_3);
  if (VAR_4 < 0)
   goto error;
  FUNC_5(VAR_2->rfkill, VAR_3 == 130);
  break;
 case 128:
  break;
 default:
  VAR_4 = -VAR_0;
  goto error;
 }
 VAR_4 = VAR_2->rf_sw << 1 | VAR_2->rf_hw;
error:
error_not_ready:
 FUNC_4(&VAR_2->mutex);
 FUNC_1(3, VAR_5, "(wimax_dev %p state %u) = %d\n",
  VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
