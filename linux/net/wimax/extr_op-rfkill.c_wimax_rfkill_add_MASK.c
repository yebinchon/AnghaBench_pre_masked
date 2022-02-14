
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {struct rfkill* rfkill; int rf_sw; int * op_rfkill_sw_toggle; int name; } ;
struct rfkill {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct device*,char*,struct wimax_dev*,...) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*) ;
 int FUNC_2 (int,struct device*,char*,struct rfkill*) ;
 struct rfkill* FUNC_3 (int ,struct device*,int ,int *,struct wimax_dev*) ;
 int FUNC_4 (struct rfkill*) ;
 int FUNC_5 (struct rfkill*,int) ;
 int FUNC_6 (struct rfkill*) ;
 struct device* FUNC_7 (struct wimax_dev*) ;
 int VAR_3 ;

int FUNC_8(struct wimax_dev *VAR_4)
{
 int VAR_5;
 struct rfkill *VAR_6;
 struct device *VAR_7 = FUNC_7(VAR_4);

 FUNC_1(3, VAR_7, "(wimax_dev %p)\n", VAR_4);

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_3(VAR_4->name, VAR_7, VAR_1,
         &VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  goto error_rfkill_allocate;

 FUNC_2(1, VAR_7, "rfkill %p\n", VAR_6);

 VAR_4->rfkill = VAR_6;

 FUNC_5(VAR_6, 1);
 VAR_5 = FUNC_6(VAR_4->rfkill);
 if (VAR_5 < 0)
  goto error_rfkill_register;


 if (VAR_4->op_rfkill_sw_toggle == ((void*)0))
  VAR_4->rf_sw = VAR_2;

 FUNC_0(3, VAR_7, "(wimax_dev %p) = 0\n", VAR_4);
 return 0;

error_rfkill_register:
 FUNC_4(VAR_4->rfkill);
error_rfkill_allocate:
 FUNC_0(3, VAR_7, "(wimax_dev %p) = %d\n", VAR_4, VAR_5);
 return VAR_5;
}
