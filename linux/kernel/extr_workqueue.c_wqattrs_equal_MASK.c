
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_attrs {scalar_t__ nice; int cpumask; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct workqueue_attrs *VAR_0,
     const struct workqueue_attrs *VAR_1)
{
 if (VAR_0->nice != VAR_1->nice)
  return 0;
 if (!FUNC_0(VAR_0->cpumask, VAR_1->cpumask))
  return 0;
 return 1;
}
