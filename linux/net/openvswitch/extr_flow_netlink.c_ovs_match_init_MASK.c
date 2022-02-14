
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sw_flow_match {struct sw_flow_mask* mask; struct sw_flow_match* key; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;
struct sw_flow_mask {TYPE_1__ range; struct sw_flow_match key; } ;
struct sw_flow_key {struct sw_flow_mask* mask; struct sw_flow_key* key; } ;


 int FUNC_0 (struct sw_flow_match*,int ,int) ;

void FUNC_1(struct sw_flow_match *VAR_0,
      struct sw_flow_key *VAR_1,
      bool VAR_2,
      struct sw_flow_mask *VAR_3)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->key = VAR_1;
 VAR_0->mask = VAR_3;

 if (VAR_2)
  FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 if (VAR_3) {
  FUNC_0(&VAR_3->key, 0, sizeof(VAR_3->key));
  VAR_3->range.start = VAR_3->range.end = 0;
 }
}
