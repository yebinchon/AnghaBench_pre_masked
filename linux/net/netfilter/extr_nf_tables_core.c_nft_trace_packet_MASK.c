
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_traceinfo {struct nft_rule const* rule; } ;
struct nft_rule {int dummy; } ;
struct nft_chain {int dummy; } ;
typedef enum nft_trace_types { ____Placeholder_nft_trace_types } nft_trace_types ;


 int FUNC_0 (struct nft_traceinfo*,struct nft_chain const*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct nft_traceinfo *VAR_1,
        const struct nft_chain *VAR_2,
        const struct nft_rule *VAR_3,
        enum nft_trace_types VAR_4)
{
 if (FUNC_1(&VAR_0)) {
  VAR_1->rule = VAR_3;
  FUNC_0(VAR_1, VAR_2, VAR_4);
 }
}
