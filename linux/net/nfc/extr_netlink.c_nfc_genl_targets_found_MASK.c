
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ poll_req_portid; } ;
struct nfc_dev {int idx; TYPE_1__ genl_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (int *,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;

int FUNC_6(struct nfc_dev *VAR_7)
{
 struct sk_buff *VAR_8;
 void *VAR_9;

 VAR_7->genl_data.poll_req_portid = 0;

 VAR_8 = FUNC_5(VAR_5, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_8, 0, 0, &VAR_6, 0,
     VAR_4);
 if (!VAR_9)
  goto free_msg;

 if (FUNC_3(VAR_8, VAR_3, VAR_7->idx))
  goto nla_put_failure;

 FUNC_0(VAR_8, VAR_9);

 return FUNC_1(&VAR_6, VAR_8, 0, 0, VAR_2);

nla_put_failure:
free_msg:
 FUNC_4(VAR_8);
 return -VAR_0;
}
