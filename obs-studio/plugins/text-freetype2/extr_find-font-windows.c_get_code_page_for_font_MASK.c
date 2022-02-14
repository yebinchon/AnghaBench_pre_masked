
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;




 unsigned int FUNC_0 (int,int) ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 int VAR_3 ;
 unsigned int* VAR_4 ;

__attribute__((used)) static unsigned int FUNC_1(uint16_t VAR_5,
        uint16_t VAR_6,
        uint16_t VAR_7)
{
 unsigned int VAR_8;

 switch (VAR_5) {
 case 131:
  return 1201;
 case 129:
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  if (!VAR_8)
   VAR_8 = FUNC_0(VAR_6, VAR_0);
  return VAR_8;
 case 130:
  if (VAR_6 < VAR_1)
   return VAR_2[VAR_6];
  break;
 case 128:
  if (VAR_6 < VAR_3)
   return VAR_4[VAR_6];
  break;
 }

 return 0;
}
