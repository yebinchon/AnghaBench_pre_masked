
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {int dsp_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcxhr_mgr*,int ,int ) ;

int FUNC_1(struct pcxhr_mgr *VAR_2, int VAR_3)
{
 if (VAR_3)
  VAR_2->dsp_reset |= VAR_1;
 else
  VAR_2->dsp_reset &= ~VAR_1;

 FUNC_0(VAR_2, VAR_0, VAR_2->dsp_reset);
 return 0;
}
