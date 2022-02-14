
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cs_etm_packet {scalar_t__ sample_type; int start_addr; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(struct cs_etm_packet *VAR_1)
{

 if (VAR_1->sample_type == VAR_0)
  return 0;

 return VAR_1->start_addr;
}
