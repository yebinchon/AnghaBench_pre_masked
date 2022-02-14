
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct davinci_mcasp {int * irq_request; scalar_t__ fifo_base; scalar_t__ rxnumevt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct davinci_mcasp*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct davinci_mcasp*) ;
 int FUNC_2 (struct davinci_mcasp*,scalar_t__,int ) ;
 int FUNC_3 (struct davinci_mcasp*,int) ;
 int FUNC_4 (struct davinci_mcasp*,int ,int ) ;
 int FUNC_5 (struct davinci_mcasp*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct davinci_mcasp *VAR_15)
{
 if (VAR_15->rxnumevt) {
  u32 VAR_16 = VAR_15->fifo_base + VAR_5;

  FUNC_0(VAR_15, VAR_16, VAR_4);
  FUNC_2(VAR_15, VAR_16, VAR_4);
 }


 FUNC_4(VAR_15, VAR_1, VAR_8);
 FUNC_4(VAR_15, VAR_1, VAR_6);





 if (FUNC_1(VAR_15)) {
  FUNC_4(VAR_15, VAR_2, VAR_14);
  FUNC_4(VAR_15, VAR_2, VAR_12);
  FUNC_3(VAR_15, 1);
 }


 FUNC_5(VAR_15, VAR_3, 0xFFFFFFFF);
 FUNC_4(VAR_15, VAR_1, VAR_9);

 FUNC_4(VAR_15, VAR_1, VAR_10);

 FUNC_4(VAR_15, VAR_1, VAR_7);
 if (FUNC_1(VAR_15))
  FUNC_4(VAR_15, VAR_2, VAR_13);


 FUNC_2(VAR_15, VAR_0,
         VAR_15->irq_request[VAR_11]);
}
