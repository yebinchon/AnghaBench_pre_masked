
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct nft_osf {int ttl; int dreg; scalar_t__ flags; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct nft_osf* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,int ) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (struct nlattr const* const) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(const struct nft_ctx *VAR_7,
   const struct nft_expr *VAR_8,
   const struct nlattr * const VAR_9[])
{
 struct nft_osf *VAR_10 = FUNC_0(VAR_8);
 u32 VAR_11;
 int VAR_12;
 u8 VAR_13;

 if (VAR_9[VAR_3]) {
  VAR_13 = FUNC_4(VAR_9[VAR_3]);
  if (VAR_13 > 2)
   return -VAR_0;
  VAR_10->ttl = VAR_13;
 }

 if (VAR_9[VAR_2]) {
  VAR_11 = FUNC_5(FUNC_3(VAR_9[VAR_2]));
  if (VAR_11 != VAR_5)
   return -VAR_0;
  VAR_10->flags = VAR_11;
 }

 VAR_10->dreg = FUNC_1(VAR_9[VAR_1]);
 VAR_12 = FUNC_2(VAR_7, VAR_10->dreg, ((void*)0),
       VAR_4, VAR_6);
 if (VAR_12 < 0)
  return VAR_12;

 return 0;
}
