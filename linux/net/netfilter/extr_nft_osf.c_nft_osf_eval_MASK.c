
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcphdr {int syn; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {void* code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_osf {size_t dreg; int flags; int ttl; } ;
struct nft_expr {int dummy; } ;
struct nf_osf_data {char* genre; char* version; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,struct nf_osf_data*) ;
 int VAR_3 ;
 struct nft_osf* FUNC_2 (struct nft_expr const*) ;
 struct tcphdr* FUNC_3 (struct sk_buff*,int ,int,struct tcphdr*) ;
 int FUNC_4 (char*,int ,char*,char*,char*) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_7(const struct nft_expr *VAR_4, struct nft_regs *VAR_5,
    const struct nft_pktinfo *VAR_6)
{
 struct nft_osf *VAR_7 = FUNC_2(VAR_4);
 u32 *VAR_8 = &VAR_5->data[VAR_7->dreg];
 struct sk_buff *VAR_9 = VAR_6->skb;
 char VAR_10[VAR_2 + 1];
 const struct tcphdr *VAR_11;
 struct nf_osf_data VAR_12;
 struct tcphdr VAR_13;

 VAR_11 = FUNC_3(VAR_9, FUNC_0(VAR_9),
     sizeof(struct tcphdr), &VAR_13);
 if (!VAR_11) {
  VAR_5->verdict.code = VAR_0;
  return;
 }
 if (!VAR_11->syn) {
  VAR_5->verdict.code = VAR_0;
  return;
 }

 if (!FUNC_1(VAR_9, VAR_3, VAR_7->ttl, &VAR_12)) {
  FUNC_6((char *)VAR_8, "unknown", VAR_2);
 } else {
  if (VAR_7->flags & VAR_1)
   FUNC_4(VAR_10, VAR_2, "%s:%s",
     VAR_12.genre, VAR_12.version);
  else
   FUNC_5(VAR_10, VAR_12.genre, VAR_2);

  FUNC_6((char *)VAR_8, VAR_10, VAR_2);
 }
}
