
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_pkt {int count; int payload; int type; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_1,
      struct intel_pt_pkt *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 6; VAR_3; VAR_3--) {
  if (VAR_1 & FUNC_0(7))
   break;
  VAR_1 <<= 1;
 }

 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3;
 VAR_2->payload = (uint64_t)VAR_1 << 57;

 return 1;
}
