
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_pkt {int payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_3, const unsigned char *VAR_4,
       size_t VAR_5, struct intel_pt_pkt *VAR_6)
{
 unsigned int VAR_7 = 1, VAR_8;
 uint64_t VAR_9 = VAR_3 >> 3;

 VAR_3 >>= 2;
 VAR_5 -= 1;
 for (VAR_8 = 5; VAR_3 & 1; VAR_8 += 7) {
  if (VAR_7 > 9)
   return VAR_0;
  if (VAR_5 < VAR_7)
   return VAR_2;
  VAR_3 = VAR_4[VAR_7++];
  VAR_9 |= ((uint64_t)VAR_3 >> 1) << VAR_8;
 }

 VAR_6->type = VAR_1;
 VAR_6->payload = VAR_9;
 return VAR_7;
}
