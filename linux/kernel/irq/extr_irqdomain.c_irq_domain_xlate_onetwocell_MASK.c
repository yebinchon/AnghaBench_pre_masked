
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct irq_domain {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long const VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct irq_domain *VAR_3,
    struct device_node *VAR_4,
    const u32 *VAR_5, unsigned int VAR_6,
    unsigned long *VAR_7, unsigned int *VAR_8)
{
 if (FUNC_0(VAR_6 < 1))
  return -VAR_0;
 *VAR_7 = VAR_5[0];
 if (VAR_6 > 1)
  *VAR_8 = VAR_5[1] & VAR_2;
 else
  *VAR_8 = VAR_1;
 return 0;
}
