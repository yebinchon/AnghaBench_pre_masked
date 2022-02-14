
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_tunnel_opts {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct ip_tunnel_info {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct nlattr*,struct nft_tunnel_opts*) ;
 int FUNC_1 (struct nlattr*,struct nft_tunnel_opts*) ;
 int VAR_4 ;
 int FUNC_2 (struct nlattr**,int ,struct nlattr const*,int ,int *) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_5,
        const struct nlattr *VAR_6,
        struct ip_tunnel_info *VAR_7,
        struct nft_tunnel_opts *VAR_8)
{
 struct nlattr *VAR_9[VAR_2 + 1];
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9, VAR_2, VAR_6,
       VAR_4, ((void*)0));
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9[VAR_3]) {
  VAR_10 = FUNC_1(VAR_9[VAR_3],
      VAR_8);
 } else if (VAR_9[VAR_1]) {
  VAR_10 = FUNC_0(VAR_9[VAR_1],
       VAR_8);
 } else {
  return -VAR_0;
 }

 return VAR_10;
}
