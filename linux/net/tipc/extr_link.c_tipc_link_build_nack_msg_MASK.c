
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int deferred_recv; } ;
struct tipc_link {int net; int deferdq; TYPE_1__ stats; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tipc_link*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tipc_link*,int ,int ,int ,int ,int ,int ,struct sk_buff_head*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct tipc_link *VAR_2,
        struct sk_buff_head *VAR_3)
{
 u32 VAR_4 = ++VAR_2->stats.deferred_recv;
 u32 VAR_5 = FUNC_1(&VAR_2->deferdq);
 int VAR_6, VAR_7;

 if (FUNC_0(VAR_2)) {
  VAR_6 = VAR_4 & 0xf;
  VAR_7 = FUNC_3(VAR_2->net) & 0xf;
  if (VAR_6 == VAR_7)
   return VAR_1;
  return 0;
 }

 if (VAR_5 >= 3 && !((VAR_5 - 3) % 16))
  FUNC_2(VAR_2, VAR_0, 0, 0, 0, 0, 0, VAR_3);
 return 0;
}
