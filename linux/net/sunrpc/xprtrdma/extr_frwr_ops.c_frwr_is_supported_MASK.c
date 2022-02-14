
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device_attr {int device_cap_flags; scalar_t__ max_fast_reg_page_list_len; } ;
struct ib_device {int name; struct ib_device_attr attrs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

bool FUNC_1(struct ib_device *VAR_1)
{
 struct ib_device_attr *VAR_2 = &VAR_1->attrs;

 if (!(VAR_2->device_cap_flags & VAR_0))
  goto out_not_supported;
 if (VAR_2->max_fast_reg_page_list_len == 0)
  goto out_not_supported;
 return 1;

out_not_supported:
 FUNC_0("rpcrdma: 'frwr' mode is not supported by device %s\n",
  VAR_1->name);
 return 0;
}
