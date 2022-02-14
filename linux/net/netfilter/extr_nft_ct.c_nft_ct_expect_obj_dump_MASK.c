
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_ct_expect_obj {int size; int timeout; int dport; int l4proto; int l3num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct nft_ct_expect_obj* FUNC_1 (struct nft_object*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5,
      struct nft_object *VAR_6, bool VAR_7)
{
 const struct nft_ct_expect_obj *VAR_8 = FUNC_1(VAR_6);

 if (FUNC_2(VAR_5, VAR_1, FUNC_0(VAR_8->l3num)) ||
     FUNC_4(VAR_5, VAR_2, VAR_8->l4proto) ||
     FUNC_2(VAR_5, VAR_0, VAR_8->dport) ||
     FUNC_3(VAR_5, VAR_4, VAR_8->timeout) ||
     FUNC_4(VAR_5, VAR_3, VAR_8->size))
  return -1;

 return 0;
}
