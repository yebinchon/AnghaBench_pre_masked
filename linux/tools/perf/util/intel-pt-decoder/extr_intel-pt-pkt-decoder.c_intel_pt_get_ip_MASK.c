
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct intel_pt_pkt {unsigned int count; int type; int payload; } ;
typedef enum intel_pt_pkt_type { ____Placeholder_intel_pt_pkt_type } intel_pt_pkt_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_4(enum intel_pt_pkt_type VAR_2, unsigned int VAR_3,
      const unsigned char *VAR_4, size_t VAR_5,
      struct intel_pt_pkt *VAR_6)
{
 int VAR_7;

 VAR_6->count = VAR_3 >> 5;

 switch (VAR_6->count) {
 case 0:
  VAR_7 = 0;
  break;
 case 1:
  if (VAR_5 < 3)
   return VAR_1;
  VAR_7 = 2;
  VAR_6->payload = FUNC_0(*(uint16_t *)(VAR_4 + 1));
  break;
 case 2:
  if (VAR_5 < 5)
   return VAR_1;
  VAR_7 = 4;
  VAR_6->payload = FUNC_1(*(uint32_t *)(VAR_4 + 1));
  break;
 case 3:
 case 4:
  if (VAR_5 < 7)
   return VAR_1;
  VAR_7 = 6;
  FUNC_3(&VAR_6->payload, VAR_4 + 1, 6);
  break;
 case 6:
  if (VAR_5 < 9)
   return VAR_1;
  VAR_7 = 8;
  VAR_6->payload = FUNC_2(*(uint64_t *)(VAR_4 + 1));
  break;
 default:
  return VAR_0;
 }

 VAR_6->type = VAR_2;

 return VAR_7 + 1;
}
