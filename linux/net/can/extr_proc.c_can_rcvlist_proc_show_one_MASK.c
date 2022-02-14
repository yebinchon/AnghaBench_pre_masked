
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct net_device {int dummy; } ;
struct can_dev_rcv_lists {int * rx; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct seq_file*,int *,struct net_device*) ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct seq_file*,char*,int ) ;

__attribute__((used)) static inline void FUNC_5(struct seq_file *VAR_0, int VAR_1,
          struct net_device *VAR_2,
          struct can_dev_rcv_lists *VAR_3)
{
 if (!FUNC_3(&VAR_3->rx[VAR_1])) {
  FUNC_2(VAR_0);
  FUNC_1(VAR_0, &VAR_3->rx[VAR_1], VAR_2);
 } else
  FUNC_4(VAR_0, "  (%s: no entry)\n", FUNC_0(VAR_2));

}
