
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head lower; struct list_head upper; } ;
struct net_device {TYPE_1__ adj_list; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct net_device *VAR_0,
       struct net_device *VAR_1,
       struct list_head *VAR_2)
{
 return (VAR_2 == &VAR_0->adj_list.upper ||
  VAR_2 == &VAR_0->adj_list.lower) &&
  FUNC_1(FUNC_0(VAR_0), FUNC_0(VAR_1));
}
