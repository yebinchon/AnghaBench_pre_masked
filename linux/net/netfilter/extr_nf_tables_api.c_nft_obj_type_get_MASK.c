
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_object_type {int owner; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_object_type const* FUNC_0 (int ) ;
 struct nft_object_type* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct net*,char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static const struct nft_object_type *
FUNC_5(struct net *VAR_2, u32 VAR_3)
{
 const struct nft_object_type *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 != ((void*)0) && FUNC_4(VAR_4->owner))
  return VAR_4;

 FUNC_2();







 return FUNC_0(-VAR_1);
}
