
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_object {int dummy; } ;
struct nft_ctx {int family; int net; } ;
struct nft_ct_helper_obj {scalar_t__ helper6; scalar_t__ helper4; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 struct nft_ct_helper_obj* FUNC_2 (struct nft_object*) ;

__attribute__((used)) static void FUNC_3(const struct nft_ctx *VAR_0,
          struct nft_object *VAR_1)
{
 struct nft_ct_helper_obj *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->helper4)
  FUNC_0(VAR_2->helper4);
 if (VAR_2->helper6)
  FUNC_0(VAR_2->helper6);

 FUNC_1(VAR_0->net, VAR_0->family);
}
