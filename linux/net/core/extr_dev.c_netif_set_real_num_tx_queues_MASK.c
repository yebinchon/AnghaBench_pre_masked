
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int real_num_tx_queues; unsigned int num_tx_queues; scalar_t__ reg_state; scalar_t__ num_tc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_2 (struct net_device*,unsigned int) ;
 int FUNC_3 (struct net_device*,unsigned int) ;
 int FUNC_4 (struct net_device*,unsigned int) ;
 int FUNC_5 () ;

int FUNC_6(struct net_device *VAR_3, unsigned int VAR_4)
{
 bool VAR_5;
 int VAR_6;

 VAR_5 = VAR_4 < VAR_3->real_num_tx_queues;

 if (VAR_4 < 1 || VAR_4 > VAR_3->num_tx_queues)
  return -VAR_0;

 if (VAR_3->reg_state == VAR_1 ||
     VAR_3->reg_state == VAR_2) {
  FUNC_0();

  VAR_6 = FUNC_1(VAR_3, VAR_3->real_num_tx_queues,
        VAR_4);
  if (VAR_6)
   return VAR_6;

  if (VAR_3->num_tc)
   FUNC_3(VAR_3, VAR_4);

  VAR_3->real_num_tx_queues = VAR_4;

  if (VAR_5) {
   FUNC_5();
   FUNC_4(VAR_3, VAR_4);



  }
 } else {
  VAR_3->real_num_tx_queues = VAR_4;
 }

 return 0;
}
