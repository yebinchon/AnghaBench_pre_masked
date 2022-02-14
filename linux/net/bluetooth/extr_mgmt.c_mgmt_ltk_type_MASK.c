
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_ltk {int type; int authenticated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





__attribute__((used)) static u8 FUNC_0(struct smp_ltk *VAR_5)
{
 switch (VAR_5->type) {
 case 131:
 case 128:
  if (VAR_5->authenticated)
   return VAR_0;
  return VAR_4;
 case 130:
  if (VAR_5->authenticated)
   return VAR_1;
  return VAR_3;
 case 129:
  return VAR_2;
 }

 return VAR_4;
}
