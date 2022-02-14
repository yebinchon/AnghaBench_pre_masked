
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int reg_lock; } ;
struct dsp_scb_descriptor {int parent_scb_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,struct dsp_scb_descriptor*) ;
 int FUNC_1 (struct snd_cs46xx*,struct dsp_scb_descriptor*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct snd_cs46xx *VAR_1, struct dsp_scb_descriptor * VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_2(!VAR_2->parent_scb_ptr))
  return -VAR_0;


 FUNC_1 (VAR_1,VAR_2,0,0);

 FUNC_3(&VAR_1->reg_lock, VAR_3);
 FUNC_0 (VAR_1,VAR_2);
 FUNC_4(&VAR_1->reg_lock, VAR_3);

 return 0;
}
