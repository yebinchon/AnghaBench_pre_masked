
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpumask const*,int ) ;
 scalar_t__ FUNC_1 (struct cpumask const*,unsigned int) ;
 scalar_t__ FUNC_2 (struct cpumask const*) ;
 int FUNC_3 (struct cpumask const*) ;
 int FUNC_4 (unsigned int,struct cpumask const*) ;
 struct cpumask* FUNC_5 (struct irq_data*) ;
 struct cpumask* FUNC_6 (struct irq_data*) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char*,int ,int ,unsigned int) ;
 unsigned int FUNC_8 () ;

__attribute__((used)) static inline bool FUNC_9(struct irq_data *VAR_2)
{
 const struct cpumask *VAR_3 = FUNC_6(VAR_2);
 unsigned int VAR_4 = FUNC_8();
 return FUNC_4(VAR_4, VAR_3);
}
