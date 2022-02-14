
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_pdata {struct sst_byt* dsp; } ;
struct sst_byt {int ipc; int dsp; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device *VAR_0, struct sst_pdata *VAR_1)
{
 struct sst_byt *VAR_2 = VAR_1->dsp;

 FUNC_1(VAR_2->dsp);
 FUNC_2(VAR_2->dsp);
 FUNC_0(VAR_2->dsp);
 FUNC_3(&VAR_2->ipc);
}
