
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_data_desc {unsigned int len; int type; } ;
struct nft_data {int data; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (int ,struct nlattr const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(const struct nft_ctx *VAR_3,
     struct nft_data *VAR_4, unsigned int VAR_5,
     struct nft_data_desc *VAR_6, const struct nlattr *VAR_7)
{
 unsigned int VAR_8;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 == 0)
  return -VAR_0;
 if (VAR_8 > VAR_5)
  return -VAR_1;

 FUNC_1(VAR_4->data, VAR_7, VAR_8);
 VAR_6->type = VAR_2;
 VAR_6->len = VAR_8;
 return 0;
}
