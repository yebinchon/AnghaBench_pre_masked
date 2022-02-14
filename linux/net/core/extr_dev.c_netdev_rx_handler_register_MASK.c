
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int priv_flags; int rx_handler; int rx_handler_data; } ;
typedef void rx_handler_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,void*) ;

int FUNC_2(struct net_device *VAR_3,
          rx_handler_func_t *VAR_4,
          void *VAR_5)
{
 if (FUNC_0(VAR_3))
  return -VAR_0;

 if (VAR_3->priv_flags & VAR_2)
  return -VAR_1;


 FUNC_1(VAR_3->rx_handler_data, VAR_5);
 FUNC_1(VAR_3->rx_handler, VAR_4);

 return 0;
}
