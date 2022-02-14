
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int have_last_ip; int last_ip; int packet; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct intel_pt_decoder *VAR_0)
{
 VAR_0->last_ip = FUNC_0(&VAR_0->packet, VAR_0->last_ip);
 VAR_0->have_last_ip = 1;
}
