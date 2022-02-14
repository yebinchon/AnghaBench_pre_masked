
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpip_callback_msg {int dummy; } ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct tcpip_callback_msg*) ;
 int FUNC_1 (int *) ;

err_t
FUNC_2(struct tcpip_callback_msg* VAR_2)
{
  if (!FUNC_1(&VAR_1)) {
    return VAR_0;
  }
  return FUNC_0(&VAR_1, VAR_2);
}
