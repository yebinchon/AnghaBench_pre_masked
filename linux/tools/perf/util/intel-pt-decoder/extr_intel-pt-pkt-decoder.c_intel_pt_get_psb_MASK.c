
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const unsigned char *VAR_3, size_t VAR_4,
       struct intel_pt_pkt *VAR_5)
{
 int VAR_6;

 if (VAR_4 < 16)
  return VAR_1;

 for (VAR_6 = 2; VAR_6 < 16; VAR_6 += 2) {
  if (VAR_3[VAR_6] != 2 || VAR_3[VAR_6 + 1] != 0x82)
   return VAR_0;
 }

 VAR_5->type = VAR_2;
 return 16;
}
