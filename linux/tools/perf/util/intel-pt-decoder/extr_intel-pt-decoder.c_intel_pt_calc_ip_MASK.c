
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_pkt {int count; int payload; } ;



__attribute__((used)) static uint64_t FUNC_0(const struct intel_pt_pkt *VAR_0,
     uint64_t VAR_1)
{
 uint64_t VAR_2;

 switch (VAR_0->count) {
 case 1:
  VAR_2 = (VAR_1 & (uint64_t)0xffffffffffff0000ULL) |
       VAR_0->payload;
  break;
 case 2:
  VAR_2 = (VAR_1 & (uint64_t)0xffffffff00000000ULL) |
       VAR_0->payload;
  break;
 case 3:
  VAR_2 = VAR_0->payload;

  if (VAR_2 & (uint64_t)0x800000000000ULL)
   VAR_2 |= (uint64_t)0xffff000000000000ULL;
  break;
 case 4:
  VAR_2 = (VAR_1 & (uint64_t)0xffff000000000000ULL) |
       VAR_0->payload;
  break;
 case 6:
  VAR_2 = VAR_0->payload;
  break;
 default:
  return 0;
 }

 return VAR_2;
}
