
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar934x_nfc {int irq_status; int spurious_irq_expected; int parent; int irq_waitq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar934x_nfc*,int ) ;
 int FUNC_1 (struct ar934x_nfc*,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ar934x_nfc*,char*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_3, void *VAR_4)
{
 struct ar934x_nfc *VAR_5 = VAR_4;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);

 FUNC_1(VAR_5, VAR_1, 0);

 FUNC_0(VAR_5, VAR_1);

 VAR_6 &= FUNC_0(VAR_5, VAR_0);
 if (VAR_6) {
  FUNC_3(VAR_5, "got IRQ, status:%08x\n", VAR_6);

  VAR_5->irq_status = VAR_6;
  VAR_5->spurious_irq_expected = 1;
  FUNC_4(&VAR_5->irq_waitq);
 } else {
  if (VAR_5->spurious_irq_expected) {
   VAR_5->spurious_irq_expected = 0;
  } else {
   FUNC_2(VAR_5->parent, "spurious interrupt\n");
  }
 }

 return VAR_2;
}
