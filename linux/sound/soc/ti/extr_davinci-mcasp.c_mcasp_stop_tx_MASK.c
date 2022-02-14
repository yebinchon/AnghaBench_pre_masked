
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcasp {int fifo_base; scalar_t__ txnumevt; scalar_t__ streams; int * irq_request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct davinci_mcasp*,int,int ) ;
 scalar_t__ FUNC_1 (struct davinci_mcasp*) ;
 int FUNC_2 (struct davinci_mcasp*,int) ;
 int FUNC_3 (struct davinci_mcasp*,int) ;
 int FUNC_4 (struct davinci_mcasp*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct davinci_mcasp *VAR_9)
{
 u32 VAR_10 = 0;


 FUNC_0(VAR_9, VAR_0,
         VAR_9->irq_request[VAR_5]);





 if (FUNC_1(VAR_9) && VAR_9->streams)
  VAR_10 = VAR_8 | VAR_6 | VAR_7;
 else
  FUNC_3(VAR_9, 0);


 FUNC_4(VAR_9, VAR_1, VAR_10);
 FUNC_4(VAR_9, VAR_2, 0xFFFFFFFF);

 if (VAR_9->txnumevt) {
  u32 VAR_11 = VAR_9->fifo_base + VAR_4;

  FUNC_0(VAR_9, VAR_11, VAR_3);
 }

 FUNC_2(VAR_9, 0);
}
