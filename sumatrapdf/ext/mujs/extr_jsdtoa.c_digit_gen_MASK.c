
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int f; int e; } ;
typedef TYPE_1__ diy_fp_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(diy_fp_t VAR_1, diy_fp_t VAR_2, char* VAR_3, int* VAR_4, int* VAR_5)
{
 uint32_t VAR_6, VAR_7;
 uint64_t VAR_8;
 int VAR_9,VAR_10;
 diy_fp_t VAR_11;
 VAR_11.f = ((uint64_t) 1) << -VAR_1.e; VAR_11.e = VAR_1.e;
 VAR_7 = VAR_1.f >> -VAR_11.e;
 VAR_8 = VAR_1.f & (VAR_11.f - 1);
 *VAR_4 = 0; VAR_10 = 3; VAR_6 = VAR_0;
 while (VAR_10 > 0) {
  VAR_9 = VAR_7 / VAR_6;
  if (VAR_9 || *VAR_4) VAR_3[(*VAR_4)++] = '0' + VAR_9;
  VAR_7 %= VAR_6; VAR_10--; VAR_6 /= 10;
  if ((((uint64_t)VAR_7)<<-VAR_11.e)+VAR_8 <= VAR_2.f) {
   *VAR_5 += VAR_10; return;
  }
 }
 do {
  VAR_8 *= 10;
  VAR_9 = VAR_8 >> -VAR_11.e;
  if (VAR_9 || *VAR_4) VAR_3[(*VAR_4)++] = '0' + VAR_9;
  VAR_8 &= VAR_11.f - 1; VAR_10--; VAR_2.f *= 10;
 } while (VAR_8 > VAR_2.f);
 *VAR_5 += VAR_10;
}
