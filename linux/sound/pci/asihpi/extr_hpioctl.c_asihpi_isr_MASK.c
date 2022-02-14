
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpi_adapter {int (* interrupt_callback ) (struct hpi_adapter*) ;TYPE_1__* adapter; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* irq_query_and_clear ) (TYPE_1__*,int ) ;int index; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct hpi_adapter*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct hpi_adapter *VAR_5 = VAR_4;
 int VAR_6;

 if (!VAR_5->adapter->irq_query_and_clear) {
  FUNC_0("asihpi_isr ASI%04X:%d no handler\n", VAR_5->adapter->type,
   VAR_5->adapter->index);
  return VAR_1;
 }

 VAR_6 = VAR_5->adapter->irq_query_and_clear(VAR_5->adapter, 0);

 if (!VAR_6)
  return VAR_1;

 VAR_2++;



 if (VAR_5->interrupt_callback)
  VAR_5->interrupt_callback(VAR_5);

 return VAR_0;
}
