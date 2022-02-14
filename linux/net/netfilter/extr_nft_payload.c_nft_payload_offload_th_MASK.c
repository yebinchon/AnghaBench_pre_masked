
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_payload {int dummy; } ;
struct TYPE_2__ {int protonum; } ;
struct nft_offload_ctx {TYPE_1__ dep; } ;
struct nft_flow_rule {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_payload const*) ;
 int FUNC_1 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_payload const*) ;

__attribute__((used)) static int FUNC_2(struct nft_offload_ctx *VAR_1,
      struct nft_flow_rule *VAR_2,
      const struct nft_payload *VAR_3)
{
 int VAR_4;

 switch (VAR_1->dep.protonum) {
 case 129:
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return VAR_4;
}
