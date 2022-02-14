
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link_group {struct smc_link* lnk; } ;
struct smc_link {int smcibdev; } ;
struct smc_buf_desc {int order; scalar_t__ pages; int * sgt; scalar_t__* mr_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct smc_buf_desc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct smc_buf_desc*,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct smc_link_group *VAR_3, bool VAR_4,
     struct smc_buf_desc *VAR_5)
{
 struct smc_link *VAR_6 = &VAR_3->lnk[VAR_2];

 if (VAR_4) {
  if (VAR_5->mr_rx[VAR_2])
   FUNC_4(
     VAR_5->mr_rx[VAR_2]);
  FUNC_3(VAR_6->smcibdev, VAR_5,
        VAR_0);
 } else {
  FUNC_3(VAR_6->smcibdev, VAR_5,
        VAR_1);
 }
 FUNC_2(&VAR_5->sgt[VAR_2]);
 if (VAR_5->pages)
  FUNC_0(VAR_5->pages, VAR_5->order);
 FUNC_1(VAR_5);
}
