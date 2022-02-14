
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_itimer {scalar_t__ it_overrun_last; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct k_itimer *VAR_1, int VAR_2)
{
 s64 VAR_3 = VAR_1->it_overrun_last + (s64)VAR_2;

 return VAR_3 > (s64)VAR_0 ? VAR_0 : (int)VAR_3;
}
