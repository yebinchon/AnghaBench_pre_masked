
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct intel_pt_insn {scalar_t__ branch; scalar_t__ length; } ;
struct intel_pt_decoder {int flags; scalar_t__ ip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct intel_pt_decoder *VAR_2,
       struct intel_pt_insn *VAR_3,
       uint64_t VAR_4, int VAR_5)
{
 return VAR_2->flags & VAR_1 && !VAR_5 &&
        VAR_3->branch == VAR_0 &&
        VAR_4 == VAR_2->ip + VAR_3->length;
}
