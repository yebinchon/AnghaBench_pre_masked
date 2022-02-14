
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int f; int e; } ;
typedef TYPE_1__ diy_fp_t ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (double) ;
 TYPE_1__ FUNC_1 (TYPE_1__) ;

__attribute__((used)) static void FUNC_2(double VAR_1, diy_fp_t* VAR_2, diy_fp_t* VAR_3)
{
 diy_fp_t VAR_4 = FUNC_0(VAR_1);
 diy_fp_t VAR_5, VAR_6;
 int VAR_7 = VAR_4.f == VAR_0;
 VAR_5.f = (VAR_4.f << 1) + 1; VAR_5.e = VAR_4.e - 1;
 VAR_5 = FUNC_1(VAR_5);
 if (VAR_7) {
  VAR_6.f = (VAR_4.f << 2) - 1;
  VAR_6.e = VAR_4.e - 2;
 } else {
  VAR_6.f = (VAR_4.f << 1) - 1;
  VAR_6.e = VAR_4.e - 1;
 }
 VAR_6.f <<= VAR_6.e - VAR_5.e;
 VAR_6.e = VAR_5.e;
 *VAR_3 = VAR_5;
 *VAR_2 = VAR_6;
}
