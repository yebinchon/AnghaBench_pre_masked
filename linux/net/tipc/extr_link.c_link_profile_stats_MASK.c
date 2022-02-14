
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_msg {int dummy; } ;
struct TYPE_2__ {int msg_lengths_total; int * msg_length_profile; int msg_length_counts; int queue_sz_counts; int accu_queue_sz; } ;
struct tipc_link {TYPE_1__ stats; int transmq; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct tipc_msg*) ;
 int FUNC_2 (struct tipc_msg*) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 struct sk_buff* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tipc_link *VAR_2)
{
 struct sk_buff *VAR_3;
 struct tipc_msg *VAR_4;
 int VAR_5;


 VAR_2->stats.accu_queue_sz += FUNC_6(&VAR_2->transmq);
 VAR_2->stats.queue_sz_counts++;

 VAR_3 = FUNC_5(&VAR_2->transmq);
 if (!VAR_3)
  return;
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_2(VAR_4);

 if (FUNC_4(VAR_4) == VAR_1) {
  if (FUNC_3(VAR_4) != VAR_0)
   return;
  VAR_5 = FUNC_2(FUNC_1(VAR_4));
 }
 VAR_2->stats.msg_lengths_total += VAR_5;
 VAR_2->stats.msg_length_counts++;
 if (VAR_5 <= 64)
  VAR_2->stats.msg_length_profile[0]++;
 else if (VAR_5 <= 256)
  VAR_2->stats.msg_length_profile[1]++;
 else if (VAR_5 <= 1024)
  VAR_2->stats.msg_length_profile[2]++;
 else if (VAR_5 <= 4096)
  VAR_2->stats.msg_length_profile[3]++;
 else if (VAR_5 <= 16384)
  VAR_2->stats.msg_length_profile[4]++;
 else if (VAR_5 <= 32768)
  VAR_2->stats.msg_length_profile[5]++;
 else
  VAR_2->stats.msg_length_profile[6]++;
}
