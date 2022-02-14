
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2tp_nl_cmd_ops {int dummy; } ;
typedef enum l2tp_pwtype { ____Placeholder_l2tp_pwtype } l2tp_pwtype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct l2tp_nl_cmd_ops const** VAR_3 ;

int FUNC_2(enum l2tp_pwtype VAR_4, const struct l2tp_nl_cmd_ops *VAR_5)
{
 int VAR_6;

 VAR_6 = -VAR_1;
 if (VAR_4 >= VAR_2)
  goto err;

 FUNC_0();
 VAR_6 = -VAR_0;
 if (VAR_3[VAR_4])
  goto out;

 VAR_3[VAR_4] = VAR_5;
 VAR_6 = 0;

out:
 FUNC_1();
err:
 return VAR_6;
}
