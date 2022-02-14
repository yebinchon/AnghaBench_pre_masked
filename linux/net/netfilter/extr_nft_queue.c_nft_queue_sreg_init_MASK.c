
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_queue {int flags; int sreg_qnum; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct nft_queue* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(const struct nft_ctx *VAR_6,
          const struct nft_expr *VAR_7,
          const struct nlattr * const VAR_8[])
{
 struct nft_queue *VAR_9 = FUNC_0(VAR_7);
 int VAR_10;

 VAR_9->sreg_qnum = FUNC_1(VAR_8[VAR_3]);
 VAR_10 = FUNC_2(VAR_9->sreg_qnum, sizeof(u32));
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_8[VAR_2]) {
  VAR_9->flags = FUNC_4(FUNC_3(VAR_8[VAR_2]));
  if (VAR_9->flags & ~VAR_5)
   return -VAR_0;
  if (VAR_9->flags & VAR_4)
   return -VAR_1;
 }

 return 0;
}
