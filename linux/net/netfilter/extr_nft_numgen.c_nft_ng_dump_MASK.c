
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
typedef enum nft_registers { ____Placeholder_nft_registers } nft_registers ;
typedef enum nft_ng_types { ____Placeholder_nft_ng_types } nft_ng_types ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4, enum nft_registers VAR_5,
         u32 VAR_6, enum nft_ng_types VAR_7, u32 VAR_8)
{
 if (FUNC_1(VAR_4, VAR_0, VAR_5))
  goto nla_put_failure;
 if (FUNC_2(VAR_4, VAR_1, FUNC_0(VAR_6)))
  goto nla_put_failure;
 if (FUNC_2(VAR_4, VAR_3, FUNC_0(VAR_7)))
  goto nla_put_failure;
 if (FUNC_2(VAR_4, VAR_2, FUNC_0(VAR_8)))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
