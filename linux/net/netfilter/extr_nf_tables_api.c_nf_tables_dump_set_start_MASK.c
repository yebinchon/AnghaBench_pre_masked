
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_set_dump_ctx {int dummy; } ;
struct netlink_callback {struct nft_set_dump_ctx* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nft_set_dump_ctx* FUNC_0 (struct nft_set_dump_ctx*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct netlink_callback *VAR_2)
{
 struct nft_set_dump_ctx *VAR_3 = VAR_2->data;

 VAR_2->data = FUNC_0(VAR_3, sizeof(*VAR_3), VAR_1);

 return VAR_2->data ? 0 : -VAR_0;
}
