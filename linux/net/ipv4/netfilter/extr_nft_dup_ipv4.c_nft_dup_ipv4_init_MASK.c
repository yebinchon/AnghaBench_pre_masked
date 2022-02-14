
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_dup_ipv4 {void* sreg_dev; void* sreg_addr; } ;
struct nft_ctx {int dummy; } ;
struct in_addr {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct nft_dup_ipv4* FUNC_0 (struct nft_expr const*) ;
 void* FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (void*,int) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_3,
        const struct nft_expr *VAR_4,
        const struct nlattr * const VAR_5[])
{
 struct nft_dup_ipv4 *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;

 if (VAR_5[VAR_1] == ((void*)0))
  return -VAR_0;

 VAR_6->sreg_addr = FUNC_1(VAR_5[VAR_1]);
 VAR_7 = FUNC_2(VAR_6->sreg_addr, sizeof(struct in_addr));
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_5[VAR_2] != ((void*)0)) {
  VAR_6->sreg_dev = FUNC_1(VAR_5[VAR_2]);
  return FUNC_2(VAR_6->sreg_dev, sizeof(int));
 }
 return 0;
}
