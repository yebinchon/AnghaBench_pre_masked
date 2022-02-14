
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_link {int wr_rx_tstamp; } ;
struct ib_wc {int status; TYPE_1__* qp; } ;
struct TYPE_2__ {struct smc_link* qp_context; } ;




 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct smc_link*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_wc*) ;
 int FUNC_3 (struct smc_link*) ;

__attribute__((used)) static inline void FUNC_4(struct ib_wc VAR_2[], int VAR_3)
{
 struct smc_link *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4 = VAR_2[VAR_5].qp->qp_context;
  if (VAR_2[VAR_5].status == VAR_0) {
   VAR_4->wr_rx_tstamp = VAR_1;
   FUNC_2(&VAR_2[VAR_5]);
   FUNC_3(VAR_4);
  } else {

   switch (VAR_2[VAR_5].status) {
   case 130:
   case 129:
   case 128:



    FUNC_1(FUNC_0(VAR_4));
    break;
   default:
    FUNC_3(VAR_4);
    break;
   }
  }
 }
}
