
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
 int FUNC_4 (unsigned int,int ,unsigned long,char const*,void*) ;

int FUNC_5(struct device *VAR_3, unsigned int VAR_4,
         irq_handler_t VAR_5, unsigned long VAR_6,
         const char *VAR_7, void *VAR_8)
{
 struct irq_devres *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_2, sizeof(struct irq_devres),
     VAR_1);
 if (!VAR_9)
  return -VAR_0;

 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_3);

 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_10 < 0) {
  FUNC_3(VAR_9);
  return VAR_10;
 }

 VAR_9->irq = VAR_4;
 VAR_9->dev_id = VAR_8;
 FUNC_1(VAR_3, VAR_9);

 return VAR_10;
}
