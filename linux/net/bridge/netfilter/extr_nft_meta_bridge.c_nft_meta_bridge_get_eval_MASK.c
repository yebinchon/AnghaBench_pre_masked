
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_meta {size_t dreg; int key; } ;
struct nft_expr {int dummy; } ;
struct net_device {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct net_device const*) ;
 int FUNC_1 (struct net_device const*,int *) ;
 int FUNC_2 (struct net_device const*,int *) ;
 int FUNC_3 (int ) ;
 struct nft_meta* FUNC_4 (struct nft_expr const*) ;
 struct net_device* FUNC_5 (struct nft_pktinfo const*) ;
 struct net_device* FUNC_6 (struct net_device const*) ;
 void FUNC_7 (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo const*) ;
 struct net_device* FUNC_8 (struct nft_pktinfo const*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_11(const struct nft_expr *VAR_2,
         struct nft_regs *VAR_3,
         const struct nft_pktinfo *VAR_4)
{
 const struct nft_meta *VAR_5 = FUNC_4(VAR_2);
 const struct net_device *VAR_6 = FUNC_5(VAR_4), *VAR_7 = FUNC_8(VAR_4);
 u32 *VAR_8 = &VAR_3->data[VAR_5->dreg];
 const struct net_device *VAR_9;

 switch (VAR_5->key) {
 case 131:
  VAR_9 = FUNC_6(VAR_6);
  break;
 case 128:
  VAR_9 = FUNC_6(VAR_7);
  break;
 case 130: {
  u16 VAR_10;

  VAR_9 = FUNC_6(VAR_6);
  if (!VAR_9 || !FUNC_0(VAR_9))
   goto err;

  FUNC_2(VAR_6, &VAR_10);
  FUNC_9(VAR_8, VAR_10);
  return;
 }
 case 129: {
  u16 VAR_11;

  VAR_9 = FUNC_6(VAR_6);
  if (!VAR_9 || !FUNC_0(VAR_9))
   goto err;

  FUNC_1(VAR_9, &VAR_11);
  FUNC_9(VAR_8, FUNC_3(VAR_11));
  return;
 }
 default:
  return FUNC_7(VAR_2, VAR_3, VAR_4);
 }

 FUNC_10((char *)VAR_8, VAR_9 ? VAR_9->name : "", VAR_0);
 return;
err:
 VAR_3->verdict.code = VAR_1;
}
