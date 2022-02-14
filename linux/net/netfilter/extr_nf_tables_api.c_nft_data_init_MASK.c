
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_data_desc {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nft_ctx const*,struct nft_data*,unsigned int,struct nft_data_desc*,struct nlattr*) ;
 int FUNC_1 (struct nft_ctx const*,struct nft_data*,struct nft_data_desc*,struct nlattr*) ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;

int FUNC_3(const struct nft_ctx *VAR_5,
    struct nft_data *VAR_6, unsigned int VAR_7,
    struct nft_data_desc *VAR_8, const struct nlattr *VAR_9)
{
 struct nlattr *VAR_10[VAR_1 + 1];
 int VAR_11;

 VAR_11 = FUNC_2(VAR_10, VAR_1, VAR_9,
       VAR_4, ((void*)0));
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_10[VAR_2])
  return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8,
          VAR_10[VAR_2]);
 if (VAR_10[VAR_3] && VAR_5 != ((void*)0))
  return FUNC_1(VAR_5, VAR_6, VAR_8, VAR_10[VAR_3]);
 return -VAR_0;
}
