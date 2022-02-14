
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cs_etm_packet {scalar_t__ sample_type; scalar_t__ last_instr_size; scalar_t__ end_addr; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline
u64 FUNC_0(const struct cs_etm_packet *VAR_1)
{

 if (VAR_1->sample_type == VAR_0)
  return 0;

 return VAR_1->end_addr - VAR_1->last_instr_size;
}
