
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_cpu_base {int hres_active; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct hrtimer_cpu_base *VAR_1)
{
 return FUNC_0(VAR_0) ?
  VAR_1->hres_active : 0;
}
