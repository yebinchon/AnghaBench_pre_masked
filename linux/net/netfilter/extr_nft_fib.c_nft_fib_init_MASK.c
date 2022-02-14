
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nlattr {int dummy; } ;
struct nft_fib {int flags; int result; int dreg; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;



 struct nft_fib* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,unsigned int) ;
 int FUNC_3 (struct nlattr const* const) ;
 void* FUNC_4 (int ) ;

int FUNC_5(const struct nft_ctx *VAR_11, const struct nft_expr *VAR_12,
   const struct nlattr * const VAR_13[])
{
 struct nft_fib *VAR_14 = FUNC_0(VAR_12);
 unsigned int VAR_15;
 int VAR_16;

 if (!VAR_13[VAR_2] || !VAR_13[VAR_9] || !VAR_13[VAR_3])
  return -VAR_0;

 VAR_14->flags = FUNC_4(FUNC_3(VAR_13[VAR_3]));

 if (VAR_14->flags == 0 || (VAR_14->flags & ~VAR_4))
  return -VAR_0;

 if ((VAR_14->flags & (VAR_8 | VAR_5)) ==
      (VAR_8 | VAR_5))
  return -VAR_0;
 if ((VAR_14->flags & (VAR_6 | VAR_7)) ==
      (VAR_6 | VAR_7))
  return -VAR_0;
 if ((VAR_14->flags & (VAR_8 | VAR_5)) == 0)
  return -VAR_0;

 VAR_14->result = FUNC_4(FUNC_3(VAR_13[VAR_9]));
 VAR_14->dreg = FUNC_1(VAR_13[VAR_2]);

 switch (VAR_14->result) {
 case 129:
  if (VAR_14->flags & VAR_7)
   return -VAR_0;
  VAR_15 = sizeof(int);
  break;
 case 128:
  if (VAR_14->flags & VAR_7)
   return -VAR_0;
  VAR_15 = VAR_1;
  break;
 case 130:
  VAR_15 = sizeof(u32);
  break;
 default:
  return -VAR_0;
 }

 VAR_16 = FUNC_2(VAR_11, VAR_14->dreg, ((void*)0),
       VAR_10, VAR_15);
 if (VAR_16 < 0)
  return VAR_16;

 return 0;
}
