
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gdImagePtr ;


 int FUNC_0 (int ,int,int,int) ;

void FUNC_1 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6=0,VAR_7=0,VAR_8=0,VAR_9=0,VAR_10=0;
 long VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17,VAR_18,VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_18=VAR_3>>1;
 VAR_19=VAR_4>>1;

 for (VAR_6 = VAR_1-VAR_18; VAR_6 <= VAR_1+VAR_18; VAR_6++) {
  FUNC_0(VAR_0, VAR_6, VAR_2, VAR_5);
 }

 VAR_7 = VAR_1-VAR_18;VAR_9 = VAR_2;
 VAR_8 = VAR_1+VAR_18;VAR_10 = VAR_2;

 VAR_11 = VAR_18 * VAR_18;
 VAR_12 = VAR_19 * VAR_19;
 VAR_13 = VAR_11 << 1;
 VAR_14 = VAR_12 << 1;
 VAR_15 = VAR_18 * VAR_12;
 VAR_16 = VAR_15 << 1;
 VAR_17 = 0;
 VAR_6 = VAR_18;
 VAR_21=-2;
 while (VAR_6 > 0){
  if (VAR_15 > 0) {
   VAR_9++;VAR_10--;
   VAR_17 +=VAR_13;
   VAR_15 -=VAR_17;
  }
  if (VAR_15 <= 0){
   VAR_6--;
   VAR_7++;VAR_8--;
   VAR_16 -=VAR_14;
   VAR_15 +=VAR_16;
  }
  if(VAR_21!=VAR_10){
   for(VAR_20=VAR_7;VAR_20<=VAR_8;VAR_20++){
    FUNC_0(VAR_0,VAR_20,VAR_9,VAR_5);
    FUNC_0(VAR_0,VAR_20,VAR_10,VAR_5);
   }
  }
  VAR_21 = VAR_10;
 }
}
