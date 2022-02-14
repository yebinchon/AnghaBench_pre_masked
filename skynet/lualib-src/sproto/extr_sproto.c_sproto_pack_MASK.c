
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,scalar_t__ const*,int) ;
 int FUNC_1 (scalar_t__ const*,scalar_t__*,int,int) ;
 int FUNC_2 (scalar_t__ const*,scalar_t__*,int) ;

int
FUNC_3(const void * VAR_0, int VAR_1, void * VAR_2, int VAR_3) {
 uint8_t VAR_4[8];
 int VAR_5;
 const uint8_t * VAR_6 = ((void*)0);
 uint8_t * VAR_7 = ((void*)0);
 int VAR_8 = 0;
 int VAR_9 = 0;
 const uint8_t * VAR_10 = VAR_0;
 uint8_t * VAR_11 = VAR_2;
 for (VAR_5=0;VAR_5<VAR_1;VAR_5+=8) {
  int VAR_12;
  int VAR_13 = VAR_5+8 - VAR_1;
  if (VAR_13 > 0) {
   int VAR_14;
   FUNC_0(VAR_4, VAR_10, 8-VAR_13);
   for (VAR_14=0;VAR_14<VAR_13;VAR_14++) {
    VAR_4[7-VAR_14] = 0;
   }
   VAR_10 = VAR_4;
  }
  VAR_12 = FUNC_1(VAR_10, VAR_11, VAR_3, VAR_8);
  VAR_3 -= VAR_12;
  if (VAR_12 == 10) {

   VAR_6 = VAR_10;
   VAR_7 = VAR_11;
   VAR_8 = 1;
  } else if (VAR_12==8 && VAR_8>0) {
   ++VAR_8;
   if (VAR_8 == 256) {
    if (VAR_3 >= 0) {
     FUNC_2(VAR_6, VAR_7, 256*8);
    }
    VAR_8 = 0;
   }
  } else {
   if (VAR_8 > 0) {
    if (VAR_3 >= 0) {
     FUNC_2(VAR_6, VAR_7, VAR_8*8);
    }
    VAR_8 = 0;
   }
  }
  VAR_10 += 8;
  VAR_11 += VAR_12;
  VAR_9 += VAR_12;
 }
 if(VAR_3 >= 0){
  if(VAR_8 == 1)
   FUNC_2(VAR_6, VAR_7, 8);
  else if (VAR_8 > 1)
   FUNC_2(VAR_6, VAR_7, VAR_1 - (intptr_t)(VAR_6 - (const uint8_t*)VAR_0));
 }
 return VAR_9;
}
