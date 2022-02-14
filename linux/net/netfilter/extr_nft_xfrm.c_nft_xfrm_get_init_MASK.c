
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct nft_xfrm {int key; int dir; int dreg; scalar_t__ spnum; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int family; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;






 scalar_t__ VAR_8 ;


 struct nft_xfrm* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 int FUNC_2 (struct nft_ctx const*,int ,int *,int ,unsigned int) ;
 int FUNC_3 (struct nlattr const* const) ;
 int FUNC_4 (struct nlattr const* const) ;
 int FUNC_5 (struct nlattr const* const) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(const struct nft_ctx *VAR_9,
        const struct nft_expr *VAR_10,
        const struct nlattr * const VAR_11[])
{
 struct nft_xfrm *VAR_12 = FUNC_0(VAR_10);
 unsigned int VAR_13 = 0;
 u32 VAR_14 = 0;
 u8 VAR_15;

 if (!VAR_11[VAR_5] || !VAR_11[VAR_3] || !VAR_11[VAR_4])
  return -VAR_0;

 switch (VAR_9->family) {
 case 137:
 case 136:
 case 138:
  break;
 default:
  return -VAR_1;
 }

 VAR_12->key = FUNC_6(FUNC_4(VAR_11[VAR_5]));
 switch (VAR_12->key) {
 case 133:
 case 130:
  VAR_13 = sizeof(u32);
  break;
 case 135:
 case 132:
  VAR_13 = sizeof(struct in_addr);
  break;
 case 134:
 case 131:
  VAR_13 = sizeof(struct in6_addr);
  break;
 default:
  return -VAR_0;
 }

 VAR_15 = FUNC_5(VAR_11[VAR_3]);
 switch (VAR_15) {
 case 129:
 case 128:
  VAR_12->dir = VAR_15;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_11[VAR_6])
  VAR_14 = FUNC_6(FUNC_3(VAR_11[VAR_6]));

 if (VAR_14 >= VAR_8)
  return -VAR_2;

 VAR_12->spnum = VAR_14;

 VAR_12->dreg = FUNC_1(VAR_11[VAR_4]);
 return FUNC_2(VAR_9, VAR_12->dreg, ((void*)0),
        VAR_7, VAR_13);
}
