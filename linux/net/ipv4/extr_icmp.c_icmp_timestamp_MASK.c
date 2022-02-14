
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct icmphdr {int dummy; } ;
struct TYPE_6__ {scalar_t__ code; int type; } ;
struct TYPE_4__ {TYPE_3__ icmph; int * times; } ;
struct icmp_bxm {int head_len; scalar_t__ data_len; scalar_t__ offset; struct sk_buff* skb; TYPE_1__ data; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct icmp_bxm*,struct sk_buff*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*,int ,int *,int) ;
 TYPE_2__* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_8(struct sk_buff *VAR_2)
{
 struct icmp_bxm VAR_3;



 if (VAR_2->len < 4)
  goto out_err;




 VAR_3.data.times[1] = FUNC_5();
 VAR_3.data.times[2] = VAR_3.data.times[1];

 FUNC_0(FUNC_6(VAR_2, 0, &VAR_3.data.times[0], 4));

 VAR_3.data.icmph = *FUNC_3(VAR_2);
 VAR_3.data.icmph.type = VAR_1;
 VAR_3.data.icmph.code = 0;
 VAR_3.skb = VAR_2;
 VAR_3.offset = 0;
 VAR_3.data_len = 0;
 VAR_3.head_len = sizeof(struct icmphdr) + 12;
 FUNC_4(&VAR_3, VAR_2);
 return 1;

out_err:
 FUNC_1(FUNC_2(FUNC_7(VAR_2)->dev), VAR_0);
 return 0;
}
