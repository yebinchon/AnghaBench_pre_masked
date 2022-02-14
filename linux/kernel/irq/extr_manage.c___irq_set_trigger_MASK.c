
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct irq_chip* chip; } ;
struct irq_desc {TYPE_1__ irq_data; } ;
struct irq_chip {int (* irq_set_type ) (TYPE_1__*,unsigned long) ;int flags; scalar_t__ name; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;



 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (struct irq_desc*) ;
 int FUNC_1 (struct irq_desc*) ;
 int FUNC_2 (struct irq_desc*) ;
 int FUNC_3 (struct irq_desc*,unsigned long) ;
 int FUNC_4 (TYPE_1__*,unsigned long) ;
 unsigned long FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,unsigned long) ;
 int FUNC_9 (struct irq_desc*) ;
 int FUNC_10 (char*,int ,char*) ;
 int FUNC_11 (char*,unsigned long,int ,int (*) (TYPE_1__*,unsigned long)) ;
 int FUNC_12 (TYPE_1__*,unsigned long) ;
 int FUNC_13 (struct irq_desc*) ;

int FUNC_14(struct irq_desc *VAR_5, unsigned long VAR_6)
{
 struct irq_chip *VAR_7 = VAR_5->irq_data.chip;
 int VAR_8, VAR_9 = 0;

 if (!VAR_7 || !VAR_7->irq_set_type) {




  FUNC_10("No set_type function for IRQ %d (%s)\n",
    FUNC_0(VAR_5),
    VAR_7 ? (VAR_7->name ? : "unknown") : "unknown");
  return 0;
 }

 if (VAR_7->flags & VAR_0) {
  if (!FUNC_7(&VAR_5->irq_data))
   FUNC_9(VAR_5);
  if (!FUNC_6(&VAR_5->irq_data))
   VAR_9 = 1;
 }


 VAR_6 &= VAR_4;
 VAR_8 = VAR_7->irq_set_type(&VAR_5->irq_data, VAR_6);

 switch (VAR_8) {
 case 130:
 case 129:
  FUNC_4(&VAR_5->irq_data, VAR_2);
  FUNC_8(&VAR_5->irq_data, VAR_6);


 case 128:
  VAR_6 = FUNC_5(&VAR_5->irq_data);
  FUNC_3(VAR_5, VAR_6);
  FUNC_4(&VAR_5->irq_data, VAR_1);
  FUNC_1(VAR_5);
  if (VAR_6 & VAR_3) {
   FUNC_2(VAR_5);
   FUNC_8(&VAR_5->irq_data, VAR_1);
  }

  VAR_8 = 0;
  break;
 default:
  FUNC_11("Setting trigger mode %lu for irq %u failed (%pS)\n",
         VAR_6, FUNC_0(VAR_5), VAR_7->irq_set_type);
 }
 if (VAR_9)
  FUNC_13(VAR_5);
 return VAR_8;
}
