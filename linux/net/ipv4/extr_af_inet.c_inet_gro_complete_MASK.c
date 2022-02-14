
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ encapsulation; scalar_t__ data; scalar_t__ len; } ;
struct TYPE_2__ {int gro_complete; } ;
struct net_offload {TYPE_1__ callbacks; } ;
struct iphdr {int protocol; int tot_len; int check; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int * VAR_2 ;
 struct net_offload* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_10(struct sk_buff *VAR_5, int VAR_6)
{
 __be16 VAR_7 = FUNC_4(VAR_5->len - VAR_6);
 struct iphdr *VAR_8 = (struct iphdr *)(VAR_5->data + VAR_6);
 const struct net_offload *VAR_9;
 int VAR_10 = VAR_8->protocol;
 int VAR_11 = -VAR_0;

 if (VAR_5->encapsulation) {
  FUNC_9(VAR_5, FUNC_2(VAR_1));
  FUNC_8(VAR_5, VAR_6);
 }

 FUNC_3(&VAR_8->check, VAR_8->tot_len, VAR_7);
 VAR_8->tot_len = VAR_7;

 FUNC_6();
 VAR_9 = FUNC_5(VAR_2[VAR_10]);
 if (FUNC_1(!VAR_9 || !VAR_9->callbacks.gro_complete))
  goto out_unlock;





 VAR_11 = FUNC_0(VAR_9->callbacks.gro_complete,
         VAR_3, VAR_4,
         VAR_5, VAR_6 + sizeof(*VAR_8));

out_unlock:
 FUNC_7();

 return VAR_11;
}
