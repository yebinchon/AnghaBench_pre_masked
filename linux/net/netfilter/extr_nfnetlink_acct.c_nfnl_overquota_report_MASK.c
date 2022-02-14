
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_acct {int dummy; } ;
struct net {int nfnl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,int ,struct nf_acct*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net *VAR_4, struct nf_acct *VAR_5)
{
 int VAR_6;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_0);
 if (VAR_7 == ((void*)0))
  return;

 VAR_6 = FUNC_2(VAR_7, 0, 0, VAR_2, 0,
      VAR_5);
 if (VAR_6 <= 0) {
  FUNC_0(VAR_7);
  return;
 }
 FUNC_1(VAR_4->nfnl, VAR_7, 0, VAR_1,
     VAR_0);
}
