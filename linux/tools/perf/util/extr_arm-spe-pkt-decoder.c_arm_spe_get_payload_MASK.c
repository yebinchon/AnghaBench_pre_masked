
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct arm_spe_pkt {int payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (unsigned char const) ;

__attribute__((used)) static int FUNC_4(const unsigned char *VAR_2, size_t VAR_3,
          struct arm_spe_pkt *VAR_4)
{
 size_t VAR_5 = FUNC_3(VAR_2[0]);

 if (VAR_3 < 1 + VAR_5)
  return VAR_1;

 VAR_2++;

 switch (VAR_5) {
 case 1: VAR_4->payload = *(uint8_t *)VAR_2; break;
 case 2: VAR_4->payload = FUNC_0(*(uint16_t *)VAR_2); break;
 case 4: VAR_4->payload = FUNC_1(*(uint32_t *)VAR_2); break;
 case 8: VAR_4->payload = FUNC_2(*(uint64_t *)VAR_2); break;
 default: return VAR_0;
 }

 return 1 + VAR_5;
}
