
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int miux; int rw; int lto; TYPE_1__* dev; } ;
struct TYPE_2__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_7,
    struct nfc_llcp_local *VAR_8,
    u32 VAR_9, u32 VAR_10)
{
 void *VAR_11;

 VAR_11 = FUNC_3(VAR_7, VAR_9, VAR_10, &VAR_6, 0,
     VAR_5);
 if (!VAR_11)
  return -VAR_0;

 if (FUNC_5(VAR_7, VAR_1, VAR_8->dev->idx) ||
     FUNC_6(VAR_7, VAR_2, VAR_8->lto) ||
     FUNC_6(VAR_7, VAR_4, VAR_8->rw) ||
     FUNC_4(VAR_7, VAR_3, FUNC_0(VAR_8->miux)))
  goto nla_put_failure;

 FUNC_2(VAR_7, VAR_11);
 return 0;

nla_put_failure:
 FUNC_1(VAR_7, VAR_11);
 return -VAR_0;
}
