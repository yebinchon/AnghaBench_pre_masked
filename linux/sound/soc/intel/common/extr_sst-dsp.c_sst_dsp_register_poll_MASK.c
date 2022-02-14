
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sst_dsp {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,char*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct sst_dsp*,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct sst_dsp *VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, u32 VAR_6, char *VAR_7)
{
 u32 VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0, VAR_11 = 500;
 VAR_9 = VAR_1 + FUNC_1(VAR_6);
 while ((((VAR_8 = FUNC_2(VAR_2, VAR_3)) & VAR_4) != VAR_5)
  && FUNC_3(VAR_1, VAR_9)) {
  VAR_10++;
  if (VAR_10 > 10)
   VAR_11 = 5000;

  FUNC_4(VAR_11, 2*VAR_11);
 }

 if ((VAR_8 & VAR_4) == VAR_5) {
  FUNC_0(VAR_2->dev, "FW Poll Status: reg=%#x %s successful\n",
     VAR_8, VAR_7);

  return 0;
 }

 FUNC_0(VAR_2->dev, "FW Poll Status: reg=%#x %s timedout\n",
     VAR_8, VAR_7);
 return -VAR_0;
}
