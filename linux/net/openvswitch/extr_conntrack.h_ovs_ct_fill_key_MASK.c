
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int labels; scalar_t__ mark; } ;
struct sw_flow_key {scalar_t__ ct_orig_proto; TYPE_1__ ct; scalar_t__ ct_zone; scalar_t__ ct_state; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static inline void FUNC_1(const struct sk_buff *VAR_0,
       struct sw_flow_key *VAR_1)
{
 VAR_1->ct_state = 0;
 VAR_1->ct_zone = 0;
 VAR_1->ct.mark = 0;
 FUNC_0(&VAR_1->ct.labels, 0, sizeof(VAR_1->ct.labels));



 VAR_1->ct_orig_proto = 0;
}
