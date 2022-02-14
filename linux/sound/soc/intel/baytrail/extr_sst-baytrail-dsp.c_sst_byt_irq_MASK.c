
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sst_dsp {int spinlock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sst_dsp*,int ) ;
 int FUNC_3 (struct sst_dsp*,int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_9, void *VAR_10)
{
 struct sst_dsp *VAR_11 = (struct sst_dsp *) VAR_10;
 u64 VAR_12;
 irqreturn_t VAR_13 = VAR_0;

 FUNC_0(&VAR_11->spinlock);

 VAR_12 = FUNC_2(VAR_11, VAR_7);
 if (VAR_12 & VAR_8) {

  FUNC_3(VAR_11, VAR_6,
          VAR_3, 0);
  VAR_13 = VAR_1;
 }
 if (VAR_12 & VAR_4) {

  FUNC_3(VAR_11, VAR_5,
          VAR_2,
          VAR_2);
  VAR_13 = VAR_1;
 }

 FUNC_1(&VAR_11->spinlock);

 return VAR_13;
}
