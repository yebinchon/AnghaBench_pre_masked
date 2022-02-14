
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_obj_filter {struct nft_obj_filter* table; } ;
struct netlink_callback {struct nft_obj_filter* data; } ;


 int FUNC_0 (struct nft_obj_filter*) ;

__attribute__((used)) static int FUNC_1(struct netlink_callback *VAR_0)
{
 struct nft_obj_filter *VAR_1 = VAR_0->data;

 if (VAR_1) {
  FUNC_0(VAR_1->table);
  FUNC_0(VAR_1);
 }

 return 0;
}
