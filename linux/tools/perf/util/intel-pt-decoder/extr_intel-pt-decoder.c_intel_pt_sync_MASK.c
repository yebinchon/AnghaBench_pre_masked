
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct intel_pt_decoder {int pge; int continuous_period; int have_last_ip; int pkt_state; TYPE_1__ state; scalar_t__ ip; int stack; scalar_t__ last_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (struct intel_pt_decoder*) ;
 int FUNC_3 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_4(struct intel_pt_decoder *VAR_2)
{
 int VAR_3;

 VAR_2->pge = 0;
 VAR_2->continuous_period = 0;
 VAR_2->have_last_ip = 0;
 VAR_2->last_ip = 0;
 VAR_2->ip = 0;
 FUNC_0(&VAR_2->stack);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->have_last_ip = 1;
 VAR_2->pkt_state = VAR_1;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->ip) {
  VAR_2->state.type = 0;
  VAR_2->pkt_state = VAR_0;
 } else {
  return FUNC_2(VAR_2);
 }

 return 0;
}
