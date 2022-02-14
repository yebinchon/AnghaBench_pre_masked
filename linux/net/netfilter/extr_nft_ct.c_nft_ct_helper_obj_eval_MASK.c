
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_regs {int dummy; } ;
struct nft_pktinfo {int skb; } ;
struct nft_object {int dummy; } ;
struct nft_ct_helper_obj {scalar_t__ l4proto; struct nf_conntrack_helper* helper6; struct nf_conntrack_helper* helper4; } ;
struct nf_conntrack_helper {int dummy; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int status; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 struct nf_conn_help* FUNC_1 (struct nf_conn*,int ) ;
 scalar_t__ FUNC_2 (struct nf_conn*) ;
 scalar_t__ FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct nf_conn*) ;
 scalar_t__ FUNC_5 (struct nf_conn*) ;
 struct nft_ct_helper_obj* FUNC_6 (struct nft_object*) ;
 int FUNC_7 (int ,struct nf_conntrack_helper*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct nft_object *VAR_2,
       struct nft_regs *VAR_3,
       const struct nft_pktinfo *VAR_4)
{
 const struct nft_ct_helper_obj *VAR_5 = FUNC_6(VAR_2);
 struct nf_conn *VAR_6 = (struct nf_conn *)FUNC_9(VAR_4->skb);
 struct nf_conntrack_helper *VAR_7 = ((void*)0);
 struct nf_conn_help *VAR_8;

 if (!VAR_6 ||
     FUNC_2(VAR_6) ||
     FUNC_3(VAR_6) ||
     VAR_5->l4proto != FUNC_5(VAR_6))
  return;

 switch (FUNC_4(VAR_6)) {
 case 129:
  VAR_7 = VAR_5->helper4;
  break;
 case 128:
  VAR_7 = VAR_5->helper6;
  break;
 default:
  FUNC_0(1);
  return;
 }

 if (!VAR_7)
  return;

 if (FUNC_10(VAR_1, &VAR_6->status))
  return;

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (VAR_8) {
  FUNC_7(VAR_8->helper, VAR_7);
  FUNC_8(VAR_1, &VAR_6->status);
 }
}
