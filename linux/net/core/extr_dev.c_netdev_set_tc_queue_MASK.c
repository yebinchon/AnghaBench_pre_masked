
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef void* u16 ;
struct net_device {size_t num_tc; TYPE_1__* tc_to_txq; } ;
struct TYPE_2__ {void* offset; void* count; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,void*,void*) ;

int FUNC_1(struct net_device *VAR_1, u8 VAR_2, u16 VAR_3, u16 VAR_4)
{
 if (VAR_2 >= VAR_1->num_tc)
  return -VAR_0;




 VAR_1->tc_to_txq[VAR_2].count = VAR_3;
 VAR_1->tc_to_txq[VAR_2].offset = VAR_4;
 return 0;
}
