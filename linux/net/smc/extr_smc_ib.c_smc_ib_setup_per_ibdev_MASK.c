
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_ib_device {int initialized; int * roce_cq_send; int * roce_cq_recv; int ibdev; } ;
struct ib_cq_init_attr {int cqe; int comp_vector; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,int *,struct smc_ib_device*,struct ib_cq_init_attr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smc_ib_device*) ;
 int VAR_3 ;
 int VAR_4 ;

long FUNC_6(struct smc_ib_device *VAR_5)
{
 struct ib_cq_init_attr VAR_6 = {
  .cqe = VAR_2, .comp_vector = 0 };
 int VAR_7, VAR_8;
 long VAR_9;


 VAR_7 = FUNC_2() == 128 ? 7 : 6;
 VAR_8 = VAR_0 - VAR_7 - 1;
 if (VAR_2 + 2 > (0x00000001 << VAR_8) * VAR_1)
  VAR_6.cqe = (0x00000001 << VAR_8) * VAR_1 - 2;
 VAR_5->roce_cq_send = FUNC_3(VAR_5->ibdev,
           VAR_4, ((void*)0),
           VAR_5, &VAR_6);
 VAR_9 = FUNC_1(VAR_5->roce_cq_send);
 if (FUNC_0(VAR_5->roce_cq_send)) {
  VAR_5->roce_cq_send = ((void*)0);
  return VAR_9;
 }
 VAR_5->roce_cq_recv = FUNC_3(VAR_5->ibdev,
           VAR_3, ((void*)0),
           VAR_5, &VAR_6);
 VAR_9 = FUNC_1(VAR_5->roce_cq_recv);
 if (FUNC_0(VAR_5->roce_cq_recv)) {
  VAR_5->roce_cq_recv = ((void*)0);
  goto err;
 }
 FUNC_5(VAR_5);
 VAR_5->initialized = 1;
 return VAR_9;

err:
 FUNC_4(VAR_5->roce_cq_send);
 return VAR_9;
}
