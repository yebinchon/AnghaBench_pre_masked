
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int f; scalar_t__ e; } ;
typedef TYPE_1__ diy_fp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static diy_fp_t FUNC_0(diy_fp_t VAR_3)
{
 diy_fp_t VAR_4 = VAR_3;


 while (! (VAR_4.f & (VAR_1 << 1))) {
  VAR_4.f <<= 1;
  VAR_4.e--;
 }

 VAR_4.f <<= (VAR_0 - VAR_2 - 2);
 VAR_4.e = VAR_4.e - (VAR_0 - VAR_2 - 2);
 return VAR_4;
}
