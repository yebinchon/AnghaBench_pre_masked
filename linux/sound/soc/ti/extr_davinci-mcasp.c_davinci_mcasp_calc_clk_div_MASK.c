
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_mcasp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct davinci_mcasp*,int ,int,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_3 (long long,int) ;
 int FUNC_4 (struct davinci_mcasp*,int ) ;

__attribute__((used)) static int FUNC_5(struct davinci_mcasp *VAR_5,
          unsigned int VAR_6,
          unsigned int VAR_7, bool VAR_8)
{
 u32 VAR_9 = FUNC_4(VAR_5, VAR_2);
 int VAR_10 = VAR_6 / VAR_7;
 int VAR_11 = VAR_6 % VAR_7;
 int VAR_12;
 int VAR_13 = 1;

 if (VAR_10 > (VAR_0 + 1)) {
  if (VAR_9 & VAR_1) {
   VAR_13 = VAR_10 / (VAR_0 + 1);
   if (VAR_10 % (VAR_0 + 1))
    VAR_13++;

   VAR_6 /= VAR_13;
   VAR_10 = VAR_6 / VAR_7;
   VAR_11 = VAR_6 % VAR_7;
  } else if (VAR_8) {
   FUNC_2(VAR_5->dev, "Too fast reference clock (%u)\n",
     VAR_6);
  }
 }

 if (VAR_11 != 0) {
  if (VAR_10 == 0 ||
      ((VAR_6 / VAR_10) - VAR_7) >
      (VAR_7 - (VAR_6 / (VAR_10+1)))) {
   VAR_10++;
   VAR_11 = VAR_11 - VAR_7;
  }
 }
 VAR_12 = (VAR_10*1000000 + (int)FUNC_3(1000000LL*VAR_11,
       (int)VAR_7)) / VAR_10 - 1000000;

 if (VAR_8) {
  if (VAR_12)
   FUNC_1(VAR_5->dev, "Sample-rate is off by %d PPM\n",
     VAR_12);

  FUNC_0(VAR_5, VAR_4, VAR_10, 0);
  if (VAR_9 & VAR_1)
   FUNC_0(VAR_5, VAR_3,
         VAR_13, 0);
 }

 return VAR_12;
}
