
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hsr_port {size_t type; } ;
struct hsr_node {int * seq_out; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

int FUNC_1(struct hsr_port *VAR_0, struct hsr_node *VAR_1,
      u16 VAR_2)
{
 if (FUNC_0(VAR_2, VAR_1->seq_out[VAR_0->type]))
  return 1;

 VAR_1->seq_out[VAR_0->type] = VAR_2;
 return 0;
}
