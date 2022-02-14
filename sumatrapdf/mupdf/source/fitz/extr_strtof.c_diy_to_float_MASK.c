
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int f; int e; } ;
typedef TYPE_1__ strtof_fp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;

__attribute__((used)) static float
FUNC_1(strtof_fp_t VAR_4, int VAR_5)
{
 uint32_t VAR_6;
 union
 {
  float f;
  uint32_t n;
 } VAR_7;

 FUNC_0(VAR_4.f & 0x80000000);


 if (VAR_4.e > 96 || (VAR_4.e == 96 && VAR_4.f >= 0xffffff80))
 {

  VAR_3 = VAR_0;
  VAR_6 = 0xff << VAR_2;
 }

 else if (VAR_4.e > -158)
 {

  VAR_6 = (uint32_t) (VAR_4.e + 158) << VAR_2;
  VAR_6 |= (VAR_4.f >> 8) & VAR_1;

  if (VAR_4.f & 0x80)
  {

   if (VAR_4.f & 0x7f)

    ++VAR_6;
   else if (VAR_4.f & 0x100)

    ++VAR_6;
  }
 }
 else if (VAR_4.e == -158 && VAR_4.f >= 0xffffff00)
 {


  VAR_6 = 1U << VAR_2;
 }
 else if (VAR_4.e > -181)
 {

  int VAR_8 = -149 - VAR_4.e;

  VAR_6 = VAR_4.f >> VAR_8;

  if (VAR_4.f & (1U << (VAR_8 - 1)))

  {
   if (VAR_4.f & ((1U << (VAR_8 - 1)) - 1))

    ++VAR_6;
   else if (VAR_4.f & 1U << VAR_8)

    ++VAR_6;
  }
 }
 else if (VAR_4.e == -181 && VAR_4.f > 0x80000000)
 {



  VAR_6 = 1;
 }
 else
 {

  VAR_3 = VAR_0;
  VAR_6 = 0;
 }

 if (VAR_5)
  VAR_6 |= 0x80000000;

 VAR_7.n = VAR_6;
 return VAR_7.f;
}
