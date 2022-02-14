
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_rmh {int * cmd; } ;
struct pcxhr_mgr {TYPE_1__* pci; int granularity; int dsp_time_last; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pcxhr_rmh*,int ) ;
 int FUNC_2 (struct pcxhr_mgr*,struct pcxhr_rmh*) ;

__attribute__((used)) static int FUNC_3(struct pcxhr_mgr *VAR_2, int VAR_3)
{
 struct pcxhr_rmh VAR_4;
 int VAR_5;

 FUNC_1(&VAR_4, VAR_0);
 if (VAR_3) {

  VAR_2->dsp_time_last = VAR_1;
  VAR_4.cmd[0] |= VAR_2->granularity;
 }
 VAR_5 = FUNC_2(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  FUNC_0(&VAR_2->pci->dev, "error pcxhr_hardware_timer err(%x)\n",
      VAR_5);
 return VAR_5;
}
