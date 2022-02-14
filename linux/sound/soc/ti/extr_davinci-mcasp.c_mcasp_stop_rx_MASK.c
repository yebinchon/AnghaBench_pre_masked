
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct davinci_mcasp {scalar_t__ fifo_base; scalar_t__ rxnumevt; int streams; int * irq_request; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct davinci_mcasp*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct davinci_mcasp*) ;
 int FUNC_2 (struct davinci_mcasp*,int) ;
 int FUNC_3 (struct davinci_mcasp*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct davinci_mcasp *VAR_7)
{

 FUNC_0(VAR_7, VAR_0,
         VAR_7->irq_request[VAR_6]);





 if (FUNC_1(VAR_7) && !VAR_7->streams) {
  FUNC_2(VAR_7, 0);
  FUNC_3(VAR_7, VAR_2, 0);
 }

 FUNC_3(VAR_7, VAR_1, 0);
 FUNC_3(VAR_7, VAR_3, 0xFFFFFFFF);

 if (VAR_7->rxnumevt) {
  u32 VAR_8 = VAR_7->fifo_base + VAR_5;

  FUNC_0(VAR_7, VAR_8, VAR_4);
 }
}
