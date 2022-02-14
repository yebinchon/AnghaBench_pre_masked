
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {unsigned int num_tx_queues; } ;
struct Qdisc {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static unsigned long FUNC_3(struct Qdisc *VAR_1, u32 VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4 = FUNC_0(VAR_2);





 if (VAR_4 < VAR_0)
  return (VAR_4 <= VAR_3->num_tx_queues) ? VAR_4 : 0;





 return ((VAR_4 - VAR_0) < FUNC_1(VAR_3)) ? VAR_4 : 0;
}
