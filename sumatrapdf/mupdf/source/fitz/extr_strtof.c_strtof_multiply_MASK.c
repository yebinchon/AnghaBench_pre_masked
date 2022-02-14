
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int f; scalar_t__ e; } ;
typedef TYPE_1__ strtof_fp_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static strtof_fp_t
FUNC_1(strtof_fp_t VAR_0, strtof_fp_t VAR_1)
{
 uint64_t VAR_2;
 strtof_fp_t VAR_3;

 FUNC_0(VAR_0.f & VAR_1.f & 0x80000000);

 VAR_3.e = VAR_0.e + VAR_1.e + 32;
 VAR_2 = (uint64_t) VAR_0.f * VAR_1.f;

 if ((VAR_2 < ((uint64_t) 1 << 63)))
 {
  VAR_2 <<= 1;
  --VAR_3.e;
 }

 VAR_3.f = VAR_2 >> 32;



 if (VAR_2 & 0xffffffff)
  VAR_3.f |= 1;
 return VAR_3;
}
