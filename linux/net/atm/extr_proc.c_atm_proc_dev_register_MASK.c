
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atm_dev {int proc_name; int proc_entry; int number; int type; TYPE_1__* ops; } ;
struct TYPE_2__ {int proc_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int *,struct atm_dev*) ;

int FUNC_3(struct atm_dev *VAR_4)
{
 int VAR_5;


 if (!VAR_4->ops->proc_read)
  return 0;

 VAR_5 = -VAR_0;
 VAR_4->proc_name = FUNC_0(VAR_1, "%s:%d", VAR_4->type, VAR_4->number);
 if (!VAR_4->proc_name)
  goto err_out;

 VAR_4->proc_entry = FUNC_2(VAR_4->proc_name, 0, VAR_2,
        &VAR_3, VAR_4);
 if (!VAR_4->proc_entry)
  goto err_free_name;
 return 0;

err_free_name:
 FUNC_1(VAR_4->proc_name);
err_out:
 return VAR_5;
}
