
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,size_t,struct intel_pt_pkt*) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_2, size_t VAR_3,
         struct intel_pt_pkt *VAR_4)
{
 if (VAR_3 < 3)
  return VAR_1;

 switch (VAR_2[2]) {
 case 0x88:
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 default:
  return VAR_0;
 }
}
