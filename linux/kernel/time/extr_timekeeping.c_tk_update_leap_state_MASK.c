
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timekeeper {scalar_t__ next_leap_ktime; int offs_real; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct timekeeper *VAR_1)
{
 VAR_1->next_leap_ktime = FUNC_1();
 if (VAR_1->next_leap_ktime != VAR_0)

  VAR_1->next_leap_ktime = FUNC_0(VAR_1->next_leap_ktime, VAR_1->offs_real);
}
