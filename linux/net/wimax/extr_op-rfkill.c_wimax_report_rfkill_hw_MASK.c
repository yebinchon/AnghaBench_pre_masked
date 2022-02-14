
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int rf_hw; int rf_sw; int mutex; int rfkill; } ;
struct device {int dummy; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;
typedef enum wimax_rf_state { ____Placeholder_wimax_rf_state } wimax_rf_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct wimax_dev*,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_3 (int,struct device*,char*,struct wimax_dev*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct wimax_dev*) ;
 struct device* FUNC_8 (struct wimax_dev*) ;

void FUNC_9(struct wimax_dev *VAR_5,
       enum wimax_rf_state VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = FUNC_8(VAR_5);
 enum wimax_st VAR_9;

 FUNC_3(3, VAR_8, "(wimax_dev %p state %u)\n", VAR_5, VAR_6);
 FUNC_0(VAR_6 == VAR_2);
 FUNC_0(VAR_6 != VAR_1 && VAR_6 != VAR_0);

 FUNC_4(&VAR_5->mutex);
 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7 < 0)
  goto error_not_ready;

 if (VAR_6 != VAR_5->rf_hw) {
  VAR_5->rf_hw = VAR_6;
  if (VAR_5->rf_hw == VAR_1 &&
      VAR_5->rf_sw == VAR_1)
   VAR_9 = VAR_4;
  else
   VAR_9 = VAR_3;

  VAR_7 = FUNC_6(VAR_5->rfkill,
          VAR_6 == VAR_0);

  FUNC_1(VAR_5, VAR_9);
 }
error_not_ready:
 FUNC_5(&VAR_5->mutex);
 FUNC_2(3, VAR_8, "(wimax_dev %p state %u) = void [%d]\n",
  VAR_5, VAR_6, VAR_7);
}
