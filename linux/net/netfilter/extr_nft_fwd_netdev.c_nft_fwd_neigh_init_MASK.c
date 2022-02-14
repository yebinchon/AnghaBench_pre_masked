
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_fwd_neigh {int nfproto; void* sreg_addr; void* sreg_dev; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct nft_fwd_neigh* FUNC_0 (struct nft_expr const*) ;
 void* FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (void*,unsigned int) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_5,
         const struct nft_expr *VAR_6,
         const struct nlattr * const VAR_7[])
{
 struct nft_fwd_neigh *VAR_8 = FUNC_0(VAR_6);
 unsigned int VAR_9;
 int VAR_10;

 if (!VAR_7[VAR_4] ||
     !VAR_7[VAR_3] ||
     !VAR_7[VAR_2])
  return -VAR_0;

 VAR_8->sreg_dev = FUNC_1(VAR_7[VAR_4]);
 VAR_8->sreg_addr = FUNC_1(VAR_7[VAR_3]);
 VAR_8->nfproto = FUNC_4(FUNC_3(VAR_7[VAR_2]));

 switch (VAR_8->nfproto) {
 case 129:
  VAR_9 = sizeof(struct in_addr);
  break;
 case 128:
  VAR_9 = sizeof(struct in6_addr);
  break;
 default:
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_8->sreg_dev, sizeof(int));
 if (VAR_10 < 0)
  return VAR_10;

 return FUNC_2(VAR_8->sreg_addr, VAR_9);
}
