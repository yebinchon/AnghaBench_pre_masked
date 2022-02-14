
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_chip_generic {int irqs_per_chip; int num_chips; unsigned int irq_flags_to_set; unsigned int irq_flags_to_clear; int gc_flags; struct irq_chip_generic** gc; } ;
struct irq_domain {struct irq_domain_chip_generic* gc; int revmap_size; } ;
struct irq_chip_type {int dummy; } ;
struct irq_chip_generic {int list; int * reg_writel; int * reg_readl; struct irq_domain* domain; } ;
typedef int irq_flow_handler_t ;
typedef int gc ;
typedef enum irq_gc_flags { ____Placeholder_irq_gc_flags } irq_gc_flags ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct irq_chip_generic*,char const*,int,int,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct irq_domain_chip_generic* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct irq_domain *VAR_9, int VAR_10,
         int VAR_11, const char *VAR_12,
         irq_flow_handler_t VAR_13,
         unsigned int VAR_14, unsigned int VAR_15,
         enum irq_gc_flags VAR_16)
{
 struct irq_domain_chip_generic *VAR_17;
 struct irq_chip_generic *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22;
 void *VAR_23;

 if (VAR_9->gc)
  return -VAR_0;

 VAR_19 = FUNC_0(VAR_9->revmap_size, VAR_10);
 if (!VAR_19)
  return -VAR_1;


 VAR_20 = sizeof(*VAR_17) + VAR_19 * sizeof(VAR_18);
 VAR_20 += VAR_19 * (sizeof(*VAR_18) + VAR_11 * sizeof(struct irq_chip_type));

 VAR_23 = VAR_17 = FUNC_2(VAR_20, VAR_3);
 if (!VAR_17)
  return -VAR_2;
 VAR_17->irqs_per_chip = VAR_10;
 VAR_17->num_chips = VAR_19;
 VAR_17->irq_flags_to_set = VAR_15;
 VAR_17->irq_flags_to_clear = VAR_14;
 VAR_17->gc_flags = VAR_16;
 VAR_9->gc = VAR_17;


 VAR_23 += sizeof(*VAR_17) + VAR_19 * sizeof(VAR_18);
 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {

  VAR_17->gc[VAR_21] = VAR_18 = VAR_23;
  FUNC_1(VAR_18, VAR_12, VAR_11, VAR_21 * VAR_10,
          ((void*)0), VAR_13);

  VAR_18->domain = VAR_9;
  if (VAR_16 & VAR_4) {
   VAR_18->reg_readl = &VAR_7;
   VAR_18->reg_writel = &VAR_8;
  }

  FUNC_4(&VAR_6, VAR_22);
  FUNC_3(&VAR_18->list, &VAR_5);
  FUNC_5(&VAR_6, VAR_22);

  VAR_23 += sizeof(*VAR_18) + VAR_11 * sizeof(struct irq_chip_type);
 }
 return 0;
}
