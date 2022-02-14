
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ lpe; } ;
struct sst_dsp {int dev; TYPE_2__* pdata; TYPE_1__ addr; } ;
struct TYPE_4__ {int fw_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sst_dsp*) ;
 int FUNC_4 (struct sst_dsp*,int ) ;
 int FUNC_5 (struct sst_dsp*,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct sst_dsp *VAR_4)
{
 int VAR_5 = 10;





 FUNC_1(VAR_4->addr.lpe + VAR_2,
        &VAR_4->pdata->fw_base, sizeof(u32));


 FUNC_5(VAR_4, VAR_3, VAR_1, 0x0);
 while (VAR_5--) {
  if (!(FUNC_4(VAR_4, VAR_3) &
        VAR_0))
   break;
  FUNC_2(100);
 }
 if (VAR_5 < 0) {
  FUNC_0(VAR_4->dev, "unable to start DSP\n");
  FUNC_3(VAR_4);
 }
}
