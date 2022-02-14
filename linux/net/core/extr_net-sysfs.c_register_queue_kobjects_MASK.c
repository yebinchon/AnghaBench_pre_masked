
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct net_device {int real_num_rx_queues; int real_num_tx_queues; int queues_kset; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 VAR_6 = VAR_1->real_num_tx_queues;

 VAR_2 = FUNC_2(VAR_1, 0, VAR_5);
 if (VAR_2)
  goto error;
 VAR_4 = VAR_5;

 VAR_2 = FUNC_3(VAR_1, 0, VAR_6);
 if (VAR_2)
  goto error;
 VAR_3 = VAR_6;

 return 0;

error:
 FUNC_3(VAR_1, VAR_3, 0);
 FUNC_2(VAR_1, VAR_4, 0);



 return VAR_2;
}
