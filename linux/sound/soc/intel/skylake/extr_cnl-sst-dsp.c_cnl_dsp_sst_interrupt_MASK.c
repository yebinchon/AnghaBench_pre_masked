
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_dsp {int intr_status; int spinlock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sst_dsp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sst_dsp*,int ) ;

irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct sst_dsp *VAR_6 = VAR_5;
 u32 VAR_7;
 irqreturn_t VAR_8 = VAR_2;

 FUNC_1(&VAR_6->spinlock);

 VAR_7 = FUNC_3(VAR_6, VAR_1);
 VAR_6->intr_status = VAR_7;

 if (VAR_7 == 0xffffffff) {
  FUNC_2(&VAR_6->spinlock);
  return VAR_2;
 }

 if (VAR_7 & VAR_0) {
  FUNC_0(VAR_6);
  VAR_8 = VAR_3;
 }

 FUNC_2(&VAR_6->spinlock);

 return VAR_8;
}
