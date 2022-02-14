
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_hook_state {int sk; int net; } ;
struct dst_entry {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct dst_entry*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_3(struct sk_buff *VAR_1,
          const struct nf_hook_state *VAR_2,
          struct dst_entry *VAR_3)
{
 FUNC_2(VAR_1);
 FUNC_1(VAR_1, VAR_3);
 FUNC_0(VAR_2->net, VAR_2->sk, VAR_1);
 return VAR_0;
}
