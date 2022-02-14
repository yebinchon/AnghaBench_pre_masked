
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STREAM ;
typedef int RD_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

RD_BOOL
FUNC_2(STREAM VAR_2, int *VAR_3, int *VAR_4)
{
 FUNC_1(VAR_2, *VAR_3);
 FUNC_1(VAR_2, *VAR_4);

 if (*VAR_4 < 0x80)
  return VAR_1;
 else if (*VAR_4 == 0x81)
 {
  FUNC_1(VAR_2, *VAR_4);
  return VAR_1;
 }
 else if (*VAR_4 == 0x82)
 {
  FUNC_0(VAR_2, *VAR_4);
  return VAR_1;
 }

 return VAR_0;
}
