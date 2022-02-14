
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct intel_pt_pkt {unsigned char count; int payload; int type; } ;


 unsigned char const FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const unsigned char *VAR_4, size_t VAR_5,
    struct intel_pt_pkt *VAR_6)
{
 VAR_6->count = (VAR_4[1] >> 5) & 0x3;
 VAR_6->type = VAR_4[1] & FUNC_0(7) ? VAR_3 :
      VAR_2;

 switch (VAR_6->count) {
 case 0:
  if (VAR_5 < 6)
   return VAR_1;
  VAR_6->payload = FUNC_1(*(uint32_t *)(VAR_4 + 2));
  return 6;
 case 1:
  if (VAR_5 < 10)
   return VAR_1;
  VAR_6->payload = FUNC_2(*(uint64_t *)(VAR_4 + 2));
  return 10;
 default:
  return VAR_0;
 }
}
