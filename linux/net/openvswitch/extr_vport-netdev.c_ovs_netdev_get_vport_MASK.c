
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct net_device {int rx_handler_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;

struct vport *FUNC_3(struct net_device *VAR_0)
{
 if (FUNC_0(FUNC_1(VAR_0)))
  return (struct vport *)
   FUNC_2(VAR_0->rx_handler_data);
 else
  return ((void*)0);
}
