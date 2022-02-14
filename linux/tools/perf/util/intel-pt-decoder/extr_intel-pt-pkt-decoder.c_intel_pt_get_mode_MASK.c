
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {int payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const unsigned char *VAR_4, size_t VAR_5,
        struct intel_pt_pkt *VAR_6)
{
 if (VAR_5 < 2)
  return VAR_3;

 switch (VAR_4[1] >> 5) {
 case 0:
  VAR_6->type = VAR_1;
  switch (VAR_4[1] & 3) {
  case 0:
   VAR_6->payload = 16;
   break;
  case 1:
   VAR_6->payload = 64;
   break;
  case 2:
   VAR_6->payload = 32;
   break;
  default:
   return VAR_0;
  }
  break;
 case 1:
  VAR_6->type = VAR_2;
  if ((VAR_4[1] & 3) == 3)
   return VAR_0;
  VAR_6->payload = VAR_4[1] & 3;
  break;
 default:
  return VAR_0;
 }

 return 2;
}
