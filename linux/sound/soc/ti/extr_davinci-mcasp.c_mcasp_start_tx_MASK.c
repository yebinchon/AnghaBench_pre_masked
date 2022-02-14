
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcasp {int fifo_base; int * irq_request; scalar_t__ txnumevt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct davinci_mcasp*,int,int ) ;
 int FUNC_1 (struct davinci_mcasp*,int ) ;
 int FUNC_2 (struct davinci_mcasp*,int) ;
 int FUNC_3 (struct davinci_mcasp*,int,int ) ;
 int FUNC_4 (struct davinci_mcasp*,int) ;
 int FUNC_5 (struct davinci_mcasp*,int ,int ) ;
 int FUNC_6 (struct davinci_mcasp*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct davinci_mcasp *VAR_12)
{
 u32 VAR_13;

 if (VAR_12->txnumevt) {
  u32 VAR_14 = VAR_12->fifo_base + VAR_4;

  FUNC_0(VAR_12, VAR_14, VAR_3);
  FUNC_3(VAR_12, VAR_14, VAR_3);
 }


 FUNC_5(VAR_12, VAR_1, VAR_8);
 FUNC_5(VAR_12, VAR_1, VAR_6);
 FUNC_4(VAR_12, 1);


 FUNC_6(VAR_12, VAR_2, 0xFFFFFFFF);
 FUNC_5(VAR_12, VAR_1, VAR_9);


 VAR_13 = 0;
 while ((FUNC_1(VAR_12, VAR_2) & VAR_11) &&
        (VAR_13 < 100000))
  VAR_13++;

 FUNC_2(VAR_12, 1);


 FUNC_5(VAR_12, VAR_1, VAR_10);

 FUNC_5(VAR_12, VAR_1, VAR_7);


 FUNC_3(VAR_12, VAR_0,
         VAR_12->irq_request[VAR_5]);
}
