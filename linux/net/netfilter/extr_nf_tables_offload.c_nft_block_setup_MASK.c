
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_base_chain {int dummy; } ;
struct flow_block_offload {int dummy; } ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct flow_block_offload*,struct nft_base_chain*) ;
 int FUNC_2 (struct flow_block_offload*,struct nft_base_chain*) ;

__attribute__((used)) static int FUNC_3(struct nft_base_chain *VAR_1,
      struct flow_block_offload *VAR_2,
      enum flow_block_command VAR_3)
{
 int VAR_4;

 switch (VAR_3) {
 case 129:
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_2, VAR_1);
  break;
 default:
  FUNC_0(1);
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
