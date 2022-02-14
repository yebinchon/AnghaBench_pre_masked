
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int f; scalar_t__ e; } ;
typedef TYPE_1__ diy_fp_t ;



__attribute__((used)) static diy_fp_t FUNC_0(diy_fp_t VAR_0, diy_fp_t VAR_1)
{
 uint64_t VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
 diy_fp_t VAR_11;
 uint64_t VAR_12 = 0xFFFFFFFF;
 VAR_2 = VAR_0.f >> 32; VAR_3 = VAR_0.f & VAR_12;
 VAR_4 = VAR_1.f >> 32; VAR_5 = VAR_1.f & VAR_12;
 VAR_6 = VAR_2*VAR_4; VAR_7 = VAR_3*VAR_4; VAR_8 = VAR_2*VAR_5; VAR_9 = VAR_3*VAR_5;
 VAR_10 = (VAR_9>>32) + (VAR_8&VAR_12) + (VAR_7&VAR_12);
 VAR_10 += 1U << 31;
 VAR_11.f = VAR_6+(VAR_8>>32)+(VAR_7>>32)+(VAR_10 >>32);
 VAR_11.e = VAR_0.e + VAR_1.e + 64;
 return VAR_11;
}
