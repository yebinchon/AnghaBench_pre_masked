
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_object {int dummy; } ;
struct nft_ctx {int report; int family; int seq; int portid; int table; int net; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct nft_object*,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct nft_ctx *VAR_1,
     struct nft_object *VAR_2, int VAR_3)
{
 FUNC_0(VAR_1->net, VAR_1->table, VAR_2, VAR_1->portid, VAR_1->seq, VAR_3,
         VAR_1->family, VAR_1->report, VAR_0);
}
