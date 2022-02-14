
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sst_dsp*,int ) ;
 int FUNC_3 (struct sst_dsp*,int ,int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct sst_dsp *VAR_10 = (struct sst_dsp *) VAR_9;
 u32 VAR_11;
 int VAR_12 = VAR_0;

 FUNC_0(&VAR_10->spinlock);


 VAR_11 = FUNC_2(VAR_10, VAR_5);
 if (VAR_11 & VAR_7) {
  FUNC_5(VAR_11,
   FUNC_2(VAR_10, VAR_2));


  FUNC_3(VAR_10, VAR_2,
   VAR_4, VAR_4);
  VAR_12 = VAR_1;
 }

 if (VAR_11 & VAR_6) {
  FUNC_4(VAR_11,
   FUNC_2(VAR_10, VAR_2));


  FUNC_3(VAR_10, VAR_2,
   VAR_3, VAR_3);
  VAR_12 = VAR_1;
 }

 FUNC_1(&VAR_10->spinlock);
 return VAR_12;
}
