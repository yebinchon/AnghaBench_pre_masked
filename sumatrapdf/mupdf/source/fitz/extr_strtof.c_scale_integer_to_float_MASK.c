
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int strtof_fp_t ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int ,int ) ;
 float FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static float
FUNC_5(uint32_t VAR_3, int VAR_4, int VAR_5)
{
 strtof_fp_t VAR_6, VAR_7, VAR_8;

 if (VAR_3 == 0)
  return VAR_5 ? -0.f : 0.f;
 if (VAR_4 > 38)
 {

  VAR_2 = VAR_0;
  return VAR_5 ? -VAR_1 : VAR_1;
 }
 if (VAR_4 < -54)
 {

  VAR_2 = VAR_0;
  return VAR_5 ? -0.f : 0.f;
 }


 while (VAR_4 > 13 && VAR_3 <= 0xffffffff / 10)
 {
  VAR_3 *= 10;
  --VAR_4;
 }

 while (VAR_4 < -13 && VAR_3 % 10 == 0)
 {
  VAR_3 /= 10;
  ++VAR_4;
 }

 VAR_7 = FUNC_4 (VAR_3);
 if (VAR_4 >= 0)
 {
  VAR_8 = FUNC_2(VAR_4);
  VAR_6 = FUNC_3(VAR_7, VAR_8);
 }
 else
 {
  VAR_8 = FUNC_2(-VAR_4);
  VAR_6 = FUNC_0(VAR_7, VAR_8);
 }

 return FUNC_1(VAR_6, VAR_5);
}
