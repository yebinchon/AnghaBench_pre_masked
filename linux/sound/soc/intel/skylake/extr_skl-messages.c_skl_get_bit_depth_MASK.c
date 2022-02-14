
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum skl_bitdepth { ____Placeholder_skl_bitdepth } skl_bitdepth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

enum skl_bitdepth FUNC_0(int VAR_5)
{
 switch (VAR_5) {
 case 8:
  return VAR_3;

 case 16:
  return VAR_0;

 case 24:
  return VAR_1;

 case 32:
  return VAR_2;

 default:
  return VAR_4;

 }
}
