
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_dev {int dummy; } ;
struct netlink_callback {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_callback*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct nfc_dev*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct nfc_dev *VAR_4,
    u32 VAR_5, u32 VAR_6,
    struct netlink_callback *VAR_7,
    int VAR_8)
{
 void *VAR_9;

 VAR_9 = FUNC_3(VAR_3, VAR_5, VAR_6, &VAR_2, VAR_8,
     VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (VAR_7)
  FUNC_0(VAR_7, VAR_9);

 if (FUNC_4(VAR_4, VAR_3))
  goto nla_put_failure;

 FUNC_2(VAR_3, VAR_9);
 return 0;

nla_put_failure:
 FUNC_1(VAR_3, VAR_9);
 return -VAR_0;
}
