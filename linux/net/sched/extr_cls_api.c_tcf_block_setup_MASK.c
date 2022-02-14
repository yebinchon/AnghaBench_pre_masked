
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct flow_block_offload {int command; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct tcf_block*,struct flow_block_offload*) ;
 int FUNC_2 (struct tcf_block*,struct flow_block_offload*) ;

__attribute__((used)) static int FUNC_3(struct tcf_block *VAR_1,
      struct flow_block_offload *VAR_2)
{
 int VAR_3;

 switch (VAR_2->command) {
 case 129:
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 case 128:
  VAR_3 = 0;
  FUNC_2(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(1);
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
