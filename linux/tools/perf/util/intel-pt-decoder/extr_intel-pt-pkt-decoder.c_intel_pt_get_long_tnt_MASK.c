
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_pkt {int count; int payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_3, size_t VAR_4,
     struct intel_pt_pkt *VAR_5)
{
 uint64_t VAR_6;
 int VAR_7;

 if (VAR_4 < 8)
  return VAR_1;

 VAR_6 = FUNC_0(*(uint64_t *)VAR_3);

 for (VAR_7 = 47; VAR_7; VAR_7--) {
  if (VAR_6 & VAR_0)
   break;
  VAR_6 <<= 1;
 }

 VAR_5->type = VAR_2;
 VAR_5->count = VAR_7;
 VAR_5->payload = VAR_6 << 1;
 return 8;
}
