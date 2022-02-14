
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpumask {int dummy; } ;


 int VAR_0 ;
 struct cpumask* VAR_1 ;
 scalar_t__ FUNC_0 (struct cpumask const*) ;
 int FUNC_1 (struct cpumask const*,int ,int *,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline bool FUNC_3(const struct cpumask *VAR_2, bool VAR_3)
{
 if (FUNC_2(!VAR_2))
  VAR_2 = VAR_1;

 if (FUNC_0(VAR_2))
  return 0;

 FUNC_1(VAR_2, VAR_0, ((void*)0), VAR_3);
 return 1;
}
