
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int smmu_mem_info_t ;
typedef int ifx_mei_device_private_t ;
struct TYPE_7__ {int mei_cmv_sema; int wait_queue_modemready; int wait_queue_arcmsgav; scalar_t__ arcmsgav; scalar_t__ modem_ready; int * adsl_mem_info; } ;
struct TYPE_6__ {int * nIrq; scalar_t__ nInUse; scalar_t__ base_address; int * pPriv; } ;
typedef TYPE_1__ DSL_DEV_Device_t ;


 TYPE_4__* FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__* VAR_10 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (int *,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,char*,TYPE_1__*) ;
 int * VAR_11 ;

__attribute__((used)) static int
FUNC_9 (int VAR_12)
{
 DSL_DEV_Device_t *VAR_13;
        u32 VAR_14;
 VAR_13 = &VAR_10[VAR_12];
 if (VAR_13 == ((void*)0))
  return -VAR_0;
 VAR_13->pPriv = &VAR_11[VAR_12];
 FUNC_7 (VAR_13->pPriv, 0, sizeof (ifx_mei_device_private_t));

 FUNC_7 (&FUNC_0(VAR_13)->
  adsl_mem_info[0], 0,
  sizeof (smmu_mem_info_t) * VAR_9);

 if (VAR_12 == 0) {
  VAR_13->nIrq[VAR_1] = VAR_7;
  VAR_13->nIrq[VAR_2] = VAR_6;
  VAR_13->base_address = VAR_4 + VAR_5;






  VAR_14 = FUNC_5(VAR_8);
  VAR_14 &= 0xffff7dbe;
  FUNC_6(VAR_14, VAR_8);
 }
 VAR_13->nInUse = 0;
 FUNC_0(VAR_13)->modem_ready = 0;
 FUNC_0(VAR_13)->arcmsgav = 0;

 FUNC_2 ("arcq", FUNC_0(VAR_13)->wait_queue_arcmsgav);
 FUNC_2 ("arcr", FUNC_0(VAR_13)->wait_queue_modemready);

 FUNC_4 (FUNC_0(VAR_13)->mei_cmv_sema, 1);




 if (FUNC_8 (VAR_13->nIrq[VAR_1], VAR_3, 0, "DFEIR", VAR_13) != 0) {
  FUNC_1 ("request_irq %d failed!\n", VAR_13->nIrq[VAR_1]);
  return -1;
 }





 return 0;
}
