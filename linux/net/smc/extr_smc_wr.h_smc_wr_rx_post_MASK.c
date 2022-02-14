
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct smc_link {TYPE_1__* wr_rx_ibs; int roce_qp; int wr_rx_cnt; scalar_t__ wr_rx_id; } ;
struct TYPE_2__ {scalar_t__ wr_id; } ;


 size_t FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int *) ;

__attribute__((used)) static inline int FUNC_2(struct smc_link *VAR_0)
{
 int VAR_1;
 u64 VAR_2, VAR_3;
 u32 VAR_4;

 VAR_2 = ++VAR_0->wr_rx_id;
 VAR_3 = VAR_2;
 VAR_4 = FUNC_0(VAR_3, VAR_0->wr_rx_cnt);
 VAR_0->wr_rx_ibs[VAR_4].wr_id = VAR_2;
 VAR_1 = FUNC_1(VAR_0->roce_qp, &VAR_0->wr_rx_ibs[VAR_4], ((void*)0));
 return VAR_1;
}
