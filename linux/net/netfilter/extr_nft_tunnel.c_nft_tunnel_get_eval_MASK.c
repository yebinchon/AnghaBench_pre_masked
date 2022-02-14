
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nft_tunnel {size_t dreg; int key; int mode; } ;
struct TYPE_4__ {void* code; } ;
struct nft_regs {TYPE_2__ verdict; int * data; } ;
struct nft_pktinfo {int skb; } ;
struct nft_expr {int dummy; } ;
struct TYPE_3__ {int tun_id; } ;
struct ip_tunnel_info {int mode; TYPE_1__ key; } ;


 int VAR_0 ;
 void* VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int) ;
 struct nft_tunnel* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 struct ip_tunnel_info* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(const struct nft_expr *VAR_5,
    struct nft_regs *VAR_6,
    const struct nft_pktinfo *VAR_7)
{
 const struct nft_tunnel *VAR_8 = FUNC_1(VAR_5);
 u32 *VAR_9 = &VAR_6->data[VAR_8->dreg];
 struct ip_tunnel_info *VAR_10;

 VAR_10 = FUNC_4(VAR_7->skb);

 switch (VAR_8->key) {
 case 128:
  if (!VAR_10) {
   FUNC_2(VAR_9, 0);
   return;
  }
  if (VAR_8->mode == VAR_2 ||
      (VAR_8->mode == VAR_3 &&
       !(VAR_10->mode & VAR_0)) ||
      (VAR_8->mode == VAR_4 &&
       (VAR_10->mode & VAR_0)))
   FUNC_2(VAR_9, 1);
  else
   FUNC_2(VAR_9, 0);
  break;
 case 129:
  if (!VAR_10) {
   VAR_6->verdict.code = VAR_1;
   return;
  }
  if (VAR_8->mode == VAR_2 ||
      (VAR_8->mode == VAR_3 &&
       !(VAR_10->mode & VAR_0)) ||
      (VAR_8->mode == VAR_4 &&
       (VAR_10->mode & VAR_0)))
   *VAR_9 = FUNC_3(FUNC_5(VAR_10->key.tun_id));
  else
   VAR_6->verdict.code = VAR_1;
  break;
 default:
  FUNC_0(1);
  VAR_6->verdict.code = VAR_1;
 }
}
