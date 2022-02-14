
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct atalk_iface* atalk_ptr; } ;
struct TYPE_2__ {int s_node; } ;
struct atalk_iface {int status; TYPE_1__ address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct atalk_iface *FUNC_0(int VAR_3, struct net_device *VAR_4)
{
 struct atalk_iface *VAR_5 = VAR_4->atalk_ptr;

 if (!VAR_5 || VAR_5->status & VAR_2)
  goto out_err;

 if (VAR_3 != VAR_1 &&
     VAR_5->address.s_node != VAR_3 &&
     VAR_3 != VAR_0)
  goto out_err;
out:
 return VAR_5;
out_err:
 VAR_5 = ((void*)0);
 goto out;
}
