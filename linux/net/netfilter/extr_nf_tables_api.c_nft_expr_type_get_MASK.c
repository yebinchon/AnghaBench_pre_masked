
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nlattr {int dummy; } ;
struct nft_expr_type {int owner; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nft_expr_type const* FUNC_0 (int ) ;
 struct nft_expr_type* FUNC_1 (int ,struct nlattr*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct net*,int ,struct nlattr*) ;
 int FUNC_4 (struct net*,char*,int ,char*) ;
 scalar_t__ FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static const struct nft_expr_type *FUNC_8(struct net *VAR_3,
           u8 VAR_4,
           struct nlattr *VAR_5)
{
 const struct nft_expr_type *VAR_6;

 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_1);

 VAR_6 = FUNC_1(VAR_4, VAR_5);
 if (VAR_6 != ((void*)0) && FUNC_7(VAR_6->owner))
  return VAR_6;

 FUNC_2();
 return FUNC_0(-VAR_2);
}
