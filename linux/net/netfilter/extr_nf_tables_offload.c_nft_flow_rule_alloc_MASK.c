
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int key; int mask; int dissector; } ;
struct nft_flow_rule {TYPE_2__ match; TYPE_3__* rule; } ;
struct TYPE_4__ {int * key; int * mask; int * dissector; } ;
struct TYPE_6__ {TYPE_1__ match; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (struct nft_flow_rule*) ;
 struct nft_flow_rule* FUNC_2 (int,int ) ;

__attribute__((used)) static struct nft_flow_rule *FUNC_3(int VAR_1)
{
 struct nft_flow_rule *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct nft_flow_rule), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->rule = FUNC_0(VAR_1);
 if (!VAR_2->rule) {
  FUNC_1(VAR_2);
  return ((void*)0);
 }

 VAR_2->rule->match.dissector = &VAR_2->match.dissector;
 VAR_2->rule->match.mask = &VAR_2->match.mask;
 VAR_2->rule->match.key = &VAR_2->match.key;

 return VAR_2;
}
