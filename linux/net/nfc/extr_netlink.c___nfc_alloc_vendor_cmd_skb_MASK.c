
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {scalar_t__ cb; } ;
struct nfc_dev {int idx; } ;
typedef int gfp_t ;
typedef enum nfc_attrs { ____Placeholder_nfc_attrs } nfc_attrs ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (struct sk_buff*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_3 (int,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct nfc_dev *VAR_4, int VAR_5,
      u32 VAR_6, u32 VAR_7,
      enum nfc_attrs VAR_8,
      u32 VAR_9, u32 VAR_10, gfp_t VAR_11)
{
 struct sk_buff *VAR_12;
 void *VAR_13;

 VAR_12 = FUNC_3(VAR_5 + 100, VAR_11);
 if (!VAR_12)
  return ((void*)0);

 VAR_13 = FUNC_1(VAR_12, VAR_6, VAR_7, 0, VAR_3);
 if (!VAR_13) {
  FUNC_0(VAR_12);
  return ((void*)0);
 }

 if (FUNC_2(VAR_12, VAR_0, VAR_4->idx))
  goto nla_put_failure;
 if (FUNC_2(VAR_12, VAR_1, VAR_9))
  goto nla_put_failure;
 if (FUNC_2(VAR_12, VAR_2, VAR_10))
  goto nla_put_failure;

 ((void **)VAR_12->cb)[0] = VAR_4;
 ((void **)VAR_12->cb)[1] = VAR_13;

 return VAR_12;

nla_put_failure:
 FUNC_0(VAR_12);
 return ((void*)0);
}
