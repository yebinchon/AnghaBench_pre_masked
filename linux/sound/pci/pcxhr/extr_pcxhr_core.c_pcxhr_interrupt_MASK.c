
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {int timer_toggle; unsigned int src_it_dsp; TYPE_1__* pci; int dsp_time_last; int dsp_time_err; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (struct pcxhr_mgr*,int ) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct pcxhr_mgr*,int ,unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,...) ;

irqreturn_t FUNC_3(int VAR_11, void *VAR_12)
{
 struct pcxhr_mgr *VAR_13 = VAR_12;
 unsigned int VAR_14;
 bool VAR_15 = 0;

 VAR_14 = FUNC_0(VAR_13, VAR_9);
 if (! (VAR_14 & VAR_5)) {

  return VAR_1;
 }


 VAR_14 = FUNC_0(VAR_13, VAR_10);
 FUNC_1(VAR_13, VAR_10, VAR_14);


 if (VAR_14 & VAR_8) {
  int VAR_16 = VAR_14 & VAR_8;
  if (VAR_16 == VAR_13->timer_toggle) {
   FUNC_2(&VAR_13->pci->dev, "ERROR TIMER TOGGLE\n");
   VAR_13->dsp_time_err++;
  }

  VAR_13->timer_toggle = VAR_16;
  VAR_13->src_it_dsp = VAR_14;
  VAR_15 = 1;
 }


 if (VAR_14 & VAR_7) {
  if (VAR_14 & VAR_6) {




   VAR_13->dsp_time_last = VAR_3;
  }
  VAR_13->src_it_dsp = VAR_14;
  VAR_15 = 1;
 }





 return VAR_15 ? VAR_2 : VAR_0;
}
