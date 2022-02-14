
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct nf_hook_state {int sk; int net; int (* okfn ) (int ,int ,struct sk_buff*) ;} ;
struct nf_bridge_info {int in_prerouting; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct nf_bridge_info* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_4(void *VAR_2,
       struct sk_buff *VAR_3,
       const struct nf_hook_state *VAR_4)
{
 struct nf_bridge_info *VAR_5 = FUNC_2(VAR_3);

 if (VAR_5 && !VAR_5->in_prerouting &&
     !FUNC_0(VAR_3->dev) &&
     !FUNC_1(VAR_3->dev)) {
  VAR_4->okfn(VAR_4->net, VAR_4->sk, VAR_3);
  return VAR_1;
 }

 return VAR_0;
}
