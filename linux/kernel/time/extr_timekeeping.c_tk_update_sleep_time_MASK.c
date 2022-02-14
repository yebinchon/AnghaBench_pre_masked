
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timekeeper {int offs_boot; int monotonic_to_boot; } ;
typedef int ktime_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct timekeeper *VAR_0, ktime_t VAR_1)
{
 VAR_0->offs_boot = FUNC_0(VAR_0->offs_boot, VAR_1);




 VAR_0->monotonic_to_boot = FUNC_1(VAR_0->offs_boot);
}
