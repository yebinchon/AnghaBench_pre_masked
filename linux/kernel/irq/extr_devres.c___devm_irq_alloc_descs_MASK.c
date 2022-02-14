
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct irq_desc_devres {int from; unsigned int cnt; } ;
struct irq_affinity_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int,unsigned int,int,struct module*,struct irq_affinity_desc const*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct irq_desc_devres*) ;
 struct irq_desc_devres* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct irq_desc_devres*) ;

int FUNC_4(struct device *VAR_3, int VAR_4, unsigned int VAR_5,
      unsigned int VAR_6, int VAR_7, struct module *VAR_8,
      const struct irq_affinity_desc *VAR_9)
{
 struct irq_desc_devres *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_2, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_11 < 0) {
  FUNC_3(VAR_10);
  return VAR_11;
 }

 VAR_10->from = VAR_11;
 VAR_10->cnt = VAR_6;
 FUNC_1(VAR_3, VAR_10);

 return VAR_11;
}
