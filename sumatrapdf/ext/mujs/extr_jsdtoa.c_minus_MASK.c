
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ e; scalar_t__ f; } ;
typedef TYPE_1__ diy_fp_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static diy_fp_t FUNC_1(diy_fp_t VAR_0, diy_fp_t VAR_1)
{
 diy_fp_t VAR_2;
 FUNC_0(VAR_0.e == VAR_1.e);
 FUNC_0(VAR_0.f >= VAR_1.f);
 VAR_2.f = VAR_0.f - VAR_1.f;
 VAR_2.e = VAR_0.e;
 return VAR_2;
}
