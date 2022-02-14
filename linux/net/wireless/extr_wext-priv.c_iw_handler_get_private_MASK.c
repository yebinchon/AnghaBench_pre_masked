
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct net_device {TYPE_2__* wireless_handlers; } ;
struct iw_request_info {int dummy; } ;
struct iw_priv_args {int dummy; } ;
struct TYPE_4__ {scalar_t__ num_private_args; int * private_args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,int) ;

int FUNC_1(struct net_device * VAR_2,
      struct iw_request_info * VAR_3,
      union iwreq_data * VAR_4,
      char * VAR_5)
{

 if ((VAR_2->wireless_handlers->num_private_args == 0) ||
    (VAR_2->wireless_handlers->private_args == ((void*)0)))
  return -VAR_1;


 if (VAR_4->data.length < VAR_2->wireless_handlers->num_private_args) {



  VAR_4->data.length = VAR_2->wireless_handlers->num_private_args;
  return -VAR_0;
 }


 VAR_4->data.length = VAR_2->wireless_handlers->num_private_args;


 FUNC_0(VAR_5, VAR_2->wireless_handlers->private_args,
        sizeof(struct iw_priv_args) * VAR_4->data.length);

 return 0;
}
