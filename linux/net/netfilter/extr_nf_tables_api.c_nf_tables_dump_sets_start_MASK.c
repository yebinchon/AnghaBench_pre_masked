
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_ctx {int dummy; } ;
struct netlink_callback {struct nft_ctx* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_ctx* FUNC_0 (struct nft_ctx*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct netlink_callback *VAR_2)
{
 struct nft_ctx *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(VAR_2->data, sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_2->data = VAR_3;
 return 0;
}
