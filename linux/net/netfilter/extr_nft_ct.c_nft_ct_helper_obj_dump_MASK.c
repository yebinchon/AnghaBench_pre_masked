
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_ct_helper_obj {int l4proto; struct nf_conntrack_helper* helper4; struct nf_conntrack_helper* helper6; } ;
struct nf_conntrack_helper {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct nft_ct_helper_obj* FUNC_1 (struct nft_object*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6,
      struct nft_object *VAR_7, bool VAR_8)
{
 const struct nft_ct_helper_obj *VAR_9 = FUNC_1(VAR_7);
 const struct nf_conntrack_helper *VAR_10;
 u16 VAR_11;

 if (VAR_9->helper4 && VAR_9->helper6) {
  VAR_11 = VAR_0;
  VAR_10 = VAR_9->helper4;
 } else if (VAR_9->helper6) {
  VAR_11 = VAR_2;
  VAR_10 = VAR_9->helper6;
 } else {
  VAR_11 = VAR_1;
  VAR_10 = VAR_9->helper4;
 }

 if (FUNC_3(VAR_6, VAR_5, VAR_10->name))
  return -1;

 if (FUNC_4(VAR_6, VAR_4, VAR_9->l4proto))
  return -1;

 if (FUNC_2(VAR_6, VAR_3, FUNC_0(VAR_11)))
  return -1;

 return 0;
}
