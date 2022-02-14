
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
 int VAR_4 ;
 int FUNC_0 (struct sst_dsp*) ;
 int FUNC_1 (struct sst_dsp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sst_dsp*,int ) ;

irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct sst_dsp *VAR_7 = VAR_6;
 u32 VAR_8;
 irqreturn_t VAR_9 = VAR_0;

 FUNC_2(&VAR_7->spinlock);

 VAR_8 = FUNC_4(VAR_7, VAR_4);
 VAR_7->intr_status = VAR_8;

 if (VAR_8 == 0xffffffff) {
  FUNC_3(&VAR_7->spinlock);
  return VAR_0;
 }

 if (VAR_8 & VAR_3) {
  FUNC_1(VAR_7);
  VAR_9 = VAR_1;
 }

 if (VAR_8 & VAR_2) {
  FUNC_0(VAR_7);
  VAR_9 = VAR_1;
 }

 FUNC_3(&VAR_7->spinlock);

 return VAR_9;
}
