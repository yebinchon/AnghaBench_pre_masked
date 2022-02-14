
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct module {int dummy; } ;
struct irq_desc {struct module* owner; } ;
struct irq_affinity_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int) ;
 struct irq_desc* FUNC_1 (unsigned int) ;

__attribute__((used)) static inline int FUNC_2(unsigned int VAR_1, unsigned int VAR_2, int VAR_3,
         const struct irq_affinity_desc *VAR_4,
         struct module *VAR_5)
{
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct irq_desc *VAR_7 = FUNC_1(VAR_1 + VAR_6);

  VAR_7->owner = VAR_5;
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_1;
}
