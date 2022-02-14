
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_clock {int dummy; } ;
typedef int clockid_t ;


 int const FUNC_0 (struct k_clock const**) ;
 int const VAR_0 ;
 int const VAR_1 ;
 size_t FUNC_1 (int,int const) ;
 struct k_clock const VAR_2 ;
 struct k_clock const VAR_3 ;
 struct k_clock const** VAR_4 ;

__attribute__((used)) static const struct k_clock *FUNC_2(const clockid_t VAR_5)
{
 clockid_t VAR_6 = VAR_5;

 if (VAR_5 < 0) {
  return (VAR_5 & VAR_1) == VAR_0 ?
   &VAR_3 : &VAR_2;
 }

 if (VAR_5 >= FUNC_0(VAR_4))
  return ((void*)0);

 return VAR_4[FUNC_1(VAR_6, FUNC_0(VAR_4))];
}
