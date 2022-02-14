
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int tsc_to_cyc; int cbr; int max_non_turbo_ratio_fp; scalar_t__ pge; } ;


 int FUNC_0 (struct intel_pt_decoder*) ;

__attribute__((used)) static inline void FUNC_1(struct intel_pt_decoder *VAR_0)
{
 VAR_0->tsc_to_cyc = VAR_0->cbr / VAR_0->max_non_turbo_ratio_fp;

 if (VAR_0->pge)
  FUNC_0(VAR_0);
}
