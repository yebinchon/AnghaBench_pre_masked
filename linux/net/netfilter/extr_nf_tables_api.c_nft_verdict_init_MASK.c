
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct nlattr {int dummy; } ;
struct nft_data_desc {int len; int type; } ;
struct TYPE_2__ {int code; struct nft_chain* chain; } ;
struct nft_data {TYPE_1__ verdict; } ;
struct nft_ctx {int table; int net; } ;
struct nft_chain {int use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nft_chain*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;






 int VAR_6 ;
 int FUNC_1 (struct nft_chain*) ;
 struct nft_chain* FUNC_2 (int ,int ,struct nlattr*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nft_chain*) ;
 int VAR_7 ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const struct nft_ctx *VAR_8, struct nft_data *VAR_9,
       struct nft_data_desc *VAR_10, const struct nlattr *VAR_11)
{
 u8 VAR_12 = FUNC_3(VAR_8->net);
 struct nlattr *VAR_13[VAR_4 + 1];
 struct nft_chain *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_6(VAR_13, VAR_4, VAR_11,
       VAR_7, ((void*)0));
 if (VAR_15 < 0)
  return VAR_15;

 if (!VAR_13[VAR_3])
  return -VAR_0;
 VAR_9->verdict.code = FUNC_7(FUNC_5(VAR_13[VAR_3]));

 switch (VAR_9->verdict.code) {
 default:
  switch (VAR_9->verdict.code & VAR_6) {
  case 130:
  case 129:
  case 128:
   break;
  default:
   return -VAR_0;
  }

 case 134:
 case 135:
 case 131:
  break;
 case 132:
 case 133:
  if (!VAR_13[VAR_2])
   return -VAR_0;
  VAR_14 = FUNC_2(VAR_8->net, VAR_8->table,
      VAR_13[VAR_2], VAR_12);
  if (FUNC_0(VAR_14))
   return FUNC_1(VAR_14);
  if (FUNC_4(VAR_14))
   return -VAR_1;

  VAR_14->use++;
  VAR_9->verdict.chain = VAR_14;
  break;
 }

 VAR_10->len = sizeof(VAR_9->verdict);
 VAR_10->type = VAR_5;
 return 0;
}
