
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int e; int member_0; int member_1; unsigned char f; } ;
typedef TYPE_1__ diy_fp_t ;



__attribute__((used)) static int
FUNC_0(diy_fp_t VAR_0, diy_fp_t VAR_1, char* VAR_2, int* VAR_3)
{
 int VAR_4;
 diy_fp_t VAR_5 = {(uint64_t) 1 << -VAR_0.e, VAR_0.e};
 unsigned char VAR_6 = VAR_0.f >> -VAR_5.e;
 uint64_t VAR_7 = VAR_0.f & (VAR_5.f - 1);
 unsigned char VAR_8 = 10;
 uint64_t VAR_9 = VAR_5.f - 1;
 int VAR_10 = 0;
 for (VAR_4 = 2; VAR_4 > 0; --VAR_4)
 {
  unsigned char VAR_11 = VAR_6 / VAR_8;
  if (VAR_11 || VAR_10)
   VAR_2[VAR_10++] = '0' + VAR_11;
  VAR_6 %= VAR_8; VAR_8 /= 10;
  if ((((uint64_t) VAR_6) << -VAR_5.e) + VAR_7 <= VAR_1.f)
  {
   *VAR_3 += VAR_4 - 1;
   return VAR_10;
  }
 }
 do
 {
  VAR_7 *= 10;
  VAR_2[VAR_10++] = '0' + (VAR_7 >> -VAR_5.e);
  VAR_7 &= VAR_9;
  VAR_4--;
  VAR_1.f *= 10;
 }
 while (VAR_7 > VAR_1.f);
 *VAR_3 += VAR_4;
 return VAR_10;
}
