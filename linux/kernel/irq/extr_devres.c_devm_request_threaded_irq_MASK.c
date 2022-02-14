
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_devres {unsigned int irq; void* dev_id; } ;
struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct device*) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,struct irq_devres*) ;
 struct irq_devres* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct irq_devres*) ;
 int FUNC_4 (unsigned int,int ,int ,unsigned long,char const*,void*) ;

int FUNC_5(struct device *VAR_3, unsigned int VAR_4,
         irq_handler_t VAR_5, irq_handler_t VAR_6,
         unsigned long VAR_7, const char *VAR_8,
         void *VAR_9)
{
 struct irq_devres *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(VAR_2, sizeof(struct irq_devres),
     VAR_1);
 if (!VAR_10)
  return -VAR_0;

 if (!VAR_8)
  VAR_8 = FUNC_0(VAR_3);

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
      VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_10);
  return VAR_11;
 }

 VAR_10->irq = VAR_4;
 VAR_10->dev_id = VAR_9;
 FUNC_1(VAR_3, VAR_10);

 return 0;
}
