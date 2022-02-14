
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_rule {int dummy; } ;
struct nft_ctx {TYPE_1__* chain; int net; } ;
struct TYPE_2__ {int use; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nft_rule*) ;
 scalar_t__ FUNC_1 (int ,struct nft_rule*) ;

__attribute__((used)) static int
FUNC_2(struct nft_ctx *VAR_1, struct nft_rule *VAR_2)
{

 if (FUNC_1(VAR_1->net, VAR_2)) {
  FUNC_0(VAR_1->net, VAR_2);
  VAR_1->chain->use--;
  return 0;
 }
 return -VAR_0;
}
