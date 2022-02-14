
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_data {int verdict; } ;
typedef enum nft_data_types { ____Placeholder_nft_data_types } nft_data_types ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct nft_data const*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,int ,int *) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int) ;

int FUNC_5(struct sk_buff *VAR_2, int VAR_3, const struct nft_data *VAR_4,
    enum nft_data_types VAR_5, unsigned int VAR_6)
{
 struct nlattr *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 if (VAR_7 == ((void*)0))
  return -1;

 switch (VAR_5) {
 case 129:
  VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_6);
  break;
 case 128:
  VAR_8 = FUNC_2(VAR_2, VAR_1, &VAR_4->verdict);
  break;
 default:
  VAR_8 = -VAR_0;
  FUNC_0(1);
 }

 FUNC_3(VAR_2, VAR_7);
 return VAR_8;
}
