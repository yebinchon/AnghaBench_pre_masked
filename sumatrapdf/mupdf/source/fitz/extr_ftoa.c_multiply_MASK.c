
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int f; scalar_t__ e; } ;
typedef TYPE_1__ diy_fp_t ;


 int VAR_0 ;

__attribute__((used)) static diy_fp_t
FUNC_0(diy_fp_t VAR_1, diy_fp_t VAR_2)
{
 uint64_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = VAR_0 / 2;
 diy_fp_t VAR_13; uint64_t VAR_14 = ((uint64_t) 1 << VAR_12) - 1;
 VAR_3 = VAR_1.f >> VAR_12; VAR_4 = VAR_1.f & VAR_14;
 VAR_5 = VAR_2.f >> VAR_12; VAR_6 = VAR_2.f & VAR_14;
 VAR_7 = VAR_3 * VAR_5; VAR_8 = VAR_4 * VAR_5; VAR_9 = VAR_3 * VAR_6; VAR_10 = VAR_4 * VAR_6;
 VAR_11 = (VAR_10 >> VAR_12) + (VAR_9 & VAR_14) + (VAR_8 & VAR_14);
 VAR_11 += ((uint64_t)1U) << (VAR_12 - 1);
 VAR_13.f = VAR_7 + (VAR_9 >> VAR_12) + (VAR_8 >> VAR_12) + (VAR_11 >> VAR_12);
 VAR_13.e = VAR_1.e + VAR_2.e + VAR_12 * 2;
 return VAR_13;
}
