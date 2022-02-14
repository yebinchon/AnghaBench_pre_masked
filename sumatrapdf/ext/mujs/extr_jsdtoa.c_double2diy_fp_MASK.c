
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int f; scalar_t__ e; } ;
typedef TYPE_1__ diy_fp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (double) ;

__attribute__((used)) static diy_fp_t FUNC_1(double VAR_6)
{
 uint64_t VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = (VAR_7 & VAR_1) >> VAR_5;
 uint64_t VAR_9 = (VAR_7 & VAR_4);
 diy_fp_t VAR_10;
 if (VAR_8 != 0) {
  VAR_10.f = VAR_9 + VAR_2;
  VAR_10.e = VAR_8 - VAR_0;
 } else {
  VAR_10.f = VAR_9;
  VAR_10.e = VAR_3 + 1;
 }
 return VAR_10;
}
