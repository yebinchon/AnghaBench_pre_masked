
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hsr_port {size_t type; } ;
struct hsr_node {int* time_in_stale; int * time_in; int * seq_out; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

void FUNC_1(struct hsr_node *VAR_1, struct hsr_port *VAR_2,
      u16 VAR_3)
{




 if (FUNC_0(VAR_3, VAR_1->seq_out[VAR_2->type]))
  return;

 VAR_1->time_in[VAR_2->type] = VAR_0;
 VAR_1->time_in_stale[VAR_2->type] = 0;
}
