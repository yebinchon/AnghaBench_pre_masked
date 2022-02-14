
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nft_limit {int burst; int rate; int nsecs; scalar_t__ invert; } ;
typedef enum nft_limit_type { ____Placeholder_nft_limit_type } nft_limit_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8, const struct nft_limit *VAR_9,
     enum nft_limit_type VAR_10)
{
 u32 VAR_11 = VAR_9->invert ? VAR_6 : 0;
 u64 VAR_12 = FUNC_1(VAR_9->nsecs, VAR_7);

 if (FUNC_4(VAR_8, VAR_3, FUNC_0(VAR_9->rate),
    VAR_2) ||
     FUNC_4(VAR_8, VAR_5, FUNC_0(VAR_12),
    VAR_2) ||
     FUNC_3(VAR_8, VAR_0, FUNC_2(VAR_9->burst)) ||
     FUNC_3(VAR_8, VAR_4, FUNC_2(VAR_10)) ||
     FUNC_3(VAR_8, VAR_1, FUNC_2(VAR_11)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}
