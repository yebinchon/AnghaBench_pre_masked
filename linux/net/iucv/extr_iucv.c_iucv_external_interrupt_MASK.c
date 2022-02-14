
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iucv_irq_list {int list; int data; } ;
struct iucv_irq_data {scalar_t__ ippathid; int iptype; } ;
struct ext_code {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 struct iucv_irq_data** VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct iucv_irq_list* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,struct iucv_irq_data*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 size_t FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ext_code VAR_10,
        unsigned int VAR_11, unsigned long VAR_12)
{
 struct iucv_irq_data *VAR_13;
 struct iucv_irq_list *VAR_14;

 FUNC_2(VAR_1);
 VAR_13 = VAR_3[FUNC_9()];
 if (VAR_13->ippathid >= VAR_4) {
  FUNC_1(VAR_13->ippathid >= VAR_4);
  FUNC_3(VAR_13->ippathid, VAR_2);
  return;
 }
 FUNC_0(VAR_13->iptype < 0x01 || VAR_13->iptype > 0x09);
 VAR_14 = FUNC_4(sizeof(struct iucv_irq_list), VAR_0);
 if (!VAR_14) {
  FUNC_7("iucv_external_interrupt: out of memory\n");
  return;
 }
 FUNC_6(&VAR_14->data, VAR_13, sizeof(VAR_14->data));
 FUNC_10(&VAR_5);
 if (VAR_13->iptype == 0x01) {

  FUNC_5(&VAR_14->list, &VAR_9);
  FUNC_8(&VAR_8);
 } else {

  FUNC_5(&VAR_14->list, &VAR_6);
  FUNC_12(&VAR_7);
 }
 FUNC_11(&VAR_5);
}
