
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int * chip; struct irq_data* parent_data; } ;
struct irq_desc {int depth; char const* name; int * action; scalar_t__ handle_irq; struct irq_data irq_data; } ;
typedef scalar_t__ irq_flow_handler_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct irq_desc*,unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct irq_desc*,int ) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct irq_desc*) ;
 unsigned int FUNC_7 (struct irq_data*) ;
 int FUNC_8 (struct irq_desc*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9(struct irq_desc *VAR_5, irq_flow_handler_t VAR_6,
       int VAR_7, const char *VAR_8)
{
 if (!VAR_6) {
  VAR_6 = VAR_3;
 } else {
  struct irq_data *VAR_9 = &VAR_5->irq_data;
  if (FUNC_0(!VAR_9 || VAR_9->chip == &VAR_4))
   return;
 }


 if (VAR_6 == VAR_3) {
  if (VAR_5->irq_data.chip != &VAR_4)
   FUNC_8(VAR_5);
  FUNC_6(VAR_5);
  if (VAR_7)
   VAR_5->action = ((void*)0);
  VAR_5->depth = 1;
 }
 VAR_5->handle_irq = VAR_6;
 VAR_5->name = VAR_8;

 if (VAR_6 != VAR_3 && VAR_7) {
  unsigned int VAR_10 = FUNC_7(&VAR_5->irq_data);
  if (VAR_10 != VAR_1) {
   FUNC_1(VAR_5, VAR_10);
   VAR_5->handle_irq = VAR_6;
  }

  FUNC_3(VAR_5);
  FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  VAR_5->action = &VAR_2;
  FUNC_2(VAR_5, VAR_0);
 }
}
