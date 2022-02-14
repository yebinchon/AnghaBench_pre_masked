
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_domain {int dummy; } ;
struct irq_data {TYPE_1__* common; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {unsigned int ipi_offset; int affinity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct irq_domain*,int,unsigned int,int ,void*,int,int *) ;
 int VAR_5 ;
 int FUNC_1 (int ,struct cpumask const*) ;
 unsigned int FUNC_2 (struct cpumask const*) ;
 unsigned int FUNC_3 (unsigned int,struct cpumask const*) ;
 unsigned int FUNC_4 (unsigned int,struct cpumask const*) ;
 int FUNC_5 (struct cpumask const*,int ) ;
 unsigned int FUNC_6 (struct cpumask const*) ;
 int FUNC_7 (int,unsigned int,int ,int ,int *) ;
 int FUNC_8 (struct irq_domain*) ;
 scalar_t__ FUNC_9 (struct irq_domain*) ;
 int FUNC_10 (int,unsigned int) ;
 struct irq_data* FUNC_11 (int) ;
 int FUNC_12 (int,int ) ;
 unsigned int VAR_6 ;
 int FUNC_13 (char*) ;

int FUNC_14(struct irq_domain *VAR_7,
        const struct cpumask *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 struct irq_data *VAR_11;
 int VAR_12, VAR_13;

 if (!VAR_7 ||!FUNC_8(VAR_7)) {
  FUNC_13("Reservation on a non IPI domain\n");
  return -VAR_1;
 }

 if (!FUNC_5(VAR_8, VAR_5)) {
  FUNC_13("Reservation is not in possible_cpu_mask\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_6(VAR_8);
 if (!VAR_9) {
  FUNC_13("Reservation for empty destination mask\n");
  return -VAR_1;
 }

 if (FUNC_9(VAR_7)) {






  VAR_9 = 1;
  VAR_10 = 0;
 } else {
  unsigned int VAR_14;







  VAR_10 = FUNC_2(VAR_8);




  VAR_14 = FUNC_4(VAR_10, VAR_8);
  if (VAR_14 < VAR_6)
   VAR_14 = FUNC_3(VAR_14, VAR_8);
  if (VAR_14 < VAR_6) {
   FUNC_13("Destination mask has holes\n");
   return -VAR_1;
  }
 }

 VAR_12 = FUNC_7(-1, VAR_9, 0, VAR_4, ((void*)0));
 if (VAR_12 <= 0) {
  FUNC_13("Can't reserve IPI, failed to alloc descs\n");
  return -VAR_2;
 }

 VAR_12 = FUNC_0(VAR_7, VAR_12, VAR_9, VAR_4,
           (void *) VAR_8, 1, ((void*)0));

 if (VAR_12 <= 0) {
  FUNC_13("Can't reserve IPI, failed to alloc hw irqs\n");
  goto free_descs;
 }

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_11 = FUNC_11(VAR_12 + VAR_13);
  FUNC_1(VAR_11->common->affinity, VAR_8);
  VAR_11->common->ipi_offset = VAR_10;
  FUNC_12(VAR_12 + VAR_13, VAR_3);
 }
 return VAR_12;

free_descs:
 FUNC_10(VAR_12, VAR_9);
 return -VAR_0;
}
