
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int priority; } ;
struct net_device {scalar_t__ real_num_tx_queues; TYPE_1__* tc_to_txq; scalar_t__ num_tc; } ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ count; } ;


 size_t FUNC_0 (struct net_device const*,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static u16 FUNC_6(const struct net_device *VAR_0,
         const struct net_device *VAR_1,
         struct sk_buff *VAR_2)
{
 u32 VAR_3;
 u16 VAR_4 = 0;
 u16 VAR_5 = VAR_0->real_num_tx_queues;

 if (VAR_0->num_tc) {
  u8 VAR_6 = FUNC_0(VAR_0, VAR_2->priority);

  VAR_4 = VAR_1->tc_to_txq[VAR_6].offset;
  VAR_5 = VAR_1->tc_to_txq[VAR_6].count;
 }

 if (FUNC_4(VAR_2)) {
  VAR_3 = FUNC_3(VAR_2);
  while (FUNC_5(VAR_3 >= VAR_5))
   VAR_3 -= VAR_5;
  return VAR_3 + VAR_4;
 }

 return (u16) FUNC_1(FUNC_2(VAR_2), VAR_5) + VAR_4;
}
