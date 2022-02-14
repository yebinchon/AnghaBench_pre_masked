
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar934x_nfc {int irq_status; int irq_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ar934x_nfc*,int ) ;
 int FUNC_1 (struct ar934x_nfc*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ar934x_nfc*,char*,int) ;
 long FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct ar934x_nfc *VAR_5)
{
 long VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_5->irq_waitq,
    (VAR_5->irq_status & VAR_1) != 0,
    FUNC_2(VAR_0));

 VAR_7 = 0;
 if (!VAR_6) {
  FUNC_1(VAR_5, VAR_2, 0);
  FUNC_1(VAR_5, VAR_3, 0);

  FUNC_0(VAR_5, VAR_3);

  FUNC_3(VAR_5,
   "timeout waiting for interrupt, status:%08x\n",
   VAR_5->irq_status);
  VAR_7 = -VAR_4;
 }

 VAR_5->irq_status = 0;
 return VAR_7;
}
