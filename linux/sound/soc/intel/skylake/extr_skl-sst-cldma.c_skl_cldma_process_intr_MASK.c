
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int wait_condition; int wait_queue; int wake_status; } ;
struct sst_dsp {TYPE_1__ cl_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sst_dsp*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sst_dsp *VAR_4)
{
 u8 VAR_5;

 VAR_5 =
  FUNC_0(VAR_4, VAR_0);

 if (!(VAR_5 & VAR_3))
  VAR_4->cl_dev.wake_status = VAR_2;
 else
  VAR_4->cl_dev.wake_status = VAR_1;

 VAR_4->cl_dev.wait_condition = 1;
 FUNC_1(&VAR_4->cl_dev.wait_queue);
}
