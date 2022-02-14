
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int,int,unsigned char*,char*) ;
 int FUNC_3 () ;

int FUNC_4(int VAR_0, char *VAR_1, int VAR_2, int VAR_3,int VAR_4,int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
   int VAR_9[2] = {VAR_3,VAR_6}, VAR_10[2] = {VAR_4,VAR_8}, VAR_11[2] = {VAR_5,VAR_7};
   signed char VAR_12[256];
   int VAR_13,VAR_14, VAR_15 = VAR_0-1, VAR_16,VAR_17,VAR_18;
   unsigned char *VAR_19 = (unsigned char *) FUNC_1(VAR_0*VAR_0*3);
   FUNC_0((VAR_15 & VAR_0) == 0);
   VAR_19[0] = 128;
   for (VAR_16=0; VAR_16 < 16; ++VAR_16) if ((1 << VAR_16) == VAR_0) break;
   FUNC_0(VAR_0 == (1 << VAR_16));

   for (VAR_17=VAR_16-1; VAR_17 >= 0; --VAR_17) {
      int VAR_20 = 1 << VAR_17;

      for (VAR_14=0; VAR_14 < VAR_0; VAR_14 += VAR_20*2) {
         for (VAR_13=0; VAR_13 < VAR_0; VAR_13 += VAR_20*2) {
            int VAR_21 = VAR_13+VAR_20, VAR_22=VAR_14+VAR_20;
            int VAR_23 = (VAR_13+VAR_20*2)&VAR_15, VAR_24 = (VAR_14+VAR_20*2)&VAR_15;
            int VAR_25 = VAR_19[(VAR_14*VAR_0+VAR_13 )*3], VAR_26 = VAR_19[(VAR_24*VAR_0+VAR_13 )*3];
            int VAR_27 = VAR_19[(VAR_14*VAR_0+VAR_23)*3], VAR_28 = VAR_19[(VAR_24*VAR_0+VAR_23)*3];
            VAR_19[(VAR_14*VAR_0+VAR_21)*3] = (VAR_25+VAR_27)>>1;
            VAR_19[(VAR_22*VAR_0+VAR_13)*3] = (VAR_25+VAR_26)>>1;
            VAR_19[(VAR_22*VAR_0+VAR_21)*3]= (VAR_25+VAR_26+VAR_27+VAR_28)>>2;
         }
      }
      VAR_18 = VAR_1[VAR_16-VAR_17+1];
      if (!VAR_18) continue;
      for (VAR_14=0,VAR_13=0; VAR_13 < 256; VAR_13 += 2, VAR_14 == VAR_18 ? VAR_14=0 : ++VAR_14)
         VAR_12[VAR_13] = VAR_14, VAR_12[VAR_13+1] = -VAR_14;
      for (VAR_14=0; VAR_14 < VAR_0; VAR_14 += VAR_20)
         for (VAR_13=0; VAR_13 < VAR_0; VAR_13 += VAR_20) {
            int VAR_29 = VAR_19[(VAR_14*VAR_0+VAR_13)*3] + VAR_12[(FUNC_3() >> 12) & 255];
            VAR_19[(VAR_14*VAR_0+VAR_13)*3] = VAR_29 < 0 ? 0 : VAR_29 > 255 ? 255 : VAR_29;
         }
   }
   for (VAR_14=0; VAR_14 < VAR_0; ++VAR_14)
      for (VAR_13=0; VAR_13 < VAR_0; ++VAR_13) {
         int VAR_30 = ((VAR_13^VAR_14) & (1 << (VAR_16-VAR_2))) == 0;
         int VAR_31 = VAR_19[(VAR_14*VAR_0+VAR_13)*3] >> 2;
         VAR_19[(VAR_14*VAR_0+VAR_13)*3+0] = VAR_9[VAR_30]-VAR_31;
         VAR_19[(VAR_14*VAR_0+VAR_13)*3+1] = VAR_10[VAR_30]-VAR_31;
         VAR_19[(VAR_14*VAR_0+VAR_13)*3+2] = VAR_11[VAR_30]-VAR_31;
      }
   return FUNC_2(0, VAR_0, VAR_0, VAR_19, "3m!");
}
