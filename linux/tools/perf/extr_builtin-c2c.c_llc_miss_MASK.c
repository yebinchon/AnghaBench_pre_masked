
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct c2c_stats {scalar_t__ rmt_hit; scalar_t__ rmt_hitm; scalar_t__ rmt_dram; scalar_t__ lcl_dram; } ;



__attribute__((used)) static uint64_t FUNC_0(struct c2c_stats *VAR_0)
{
 uint64_t VAR_1;

 VAR_1 = VAR_0->lcl_dram +
    VAR_0->rmt_dram +
    VAR_0->rmt_hitm +
    VAR_0->rmt_hit;

 return VAR_1;
}
