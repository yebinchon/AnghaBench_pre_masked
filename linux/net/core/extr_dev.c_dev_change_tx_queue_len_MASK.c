
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int tx_queue_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct net_device *VAR_2, unsigned long VAR_3)
{
 unsigned int VAR_4 = VAR_2->tx_queue_len;
 int VAR_5;

 if (VAR_3 != (unsigned int)VAR_3)
  return -VAR_0;

 if (VAR_3 != VAR_4) {
  VAR_2->tx_queue_len = VAR_3;
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  VAR_5 = FUNC_3(VAR_5);
  if (VAR_5)
   goto err_rollback;
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5)
   goto err_rollback;
 }

 return 0;

err_rollback:
 FUNC_2(VAR_2, "refused to change device tx_queue_len\n");
 VAR_2->tx_queue_len = VAR_4;
 return VAR_5;
}
