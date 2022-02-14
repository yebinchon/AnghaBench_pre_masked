
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net_device {int dummy; } ;
struct bpf_redirect_info {int flags; scalar_t__ tgt_index; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ) ;
 int VAR_1 ;
 struct net_device* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct bpf_redirect_info* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sk_buff *VAR_2)
{
 struct bpf_redirect_info *VAR_3 = FUNC_4(&VAR_1);
 struct net_device *VAR_4;

 VAR_4 = FUNC_1(FUNC_2(VAR_2->dev), VAR_3->tgt_index);
 VAR_3->tgt_index = 0;
 if (FUNC_5(!VAR_4)) {
  FUNC_3(VAR_2);
  return -VAR_0;
 }

 return FUNC_0(VAR_2, VAR_4, VAR_3->flags);
}
