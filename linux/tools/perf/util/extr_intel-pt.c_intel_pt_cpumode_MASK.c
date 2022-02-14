
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u8 ;
struct intel_pt {scalar_t__ kernel_start; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u8 FUNC_0(struct intel_pt *VAR_2, uint64_t VAR_3)
{
 return VAR_3 >= VAR_2->kernel_start ?
        VAR_0 :
        VAR_1;
}
