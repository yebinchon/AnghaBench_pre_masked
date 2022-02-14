
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int f; scalar_t__ e; } ;
typedef TYPE_1__ strtof_fp_t ;



__attribute__((used)) static strtof_fp_t
FUNC_0(strtof_fp_t VAR_0, strtof_fp_t VAR_1)
{
 uint64_t VAR_2, VAR_3;
 uint32_t VAR_4;
 strtof_fp_t VAR_5;

 VAR_5.e = VAR_0.e - VAR_1.e - 32;
 VAR_2 = (uint64_t) VAR_0.f << 32;
 VAR_3 = VAR_2 / VAR_1.f;
 VAR_4 = VAR_2 % VAR_1.f;

 if (VAR_3 <= 0xffffffff)
  VAR_5.f = VAR_3;
 else
 {
  ++VAR_5.e;

  VAR_5.f = VAR_3 >> 1;
 }
 if (VAR_4)
  VAR_5.f |= 1;
 return VAR_5;
}
