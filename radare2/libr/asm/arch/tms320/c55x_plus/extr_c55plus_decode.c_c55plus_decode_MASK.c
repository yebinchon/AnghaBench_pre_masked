
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef scalar_t__ ut32 ;
typedef int st32 ;


 char* FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__*,int*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_3 (char*,char*,int) ;

char *FUNC_4(ut32 VAR_1, ut32 *VAR_2) {
 ut8 VAR_3, VAR_4 = 0;
 ut32 VAR_5, VAR_6;
 st32 VAR_7;
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 if (VAR_1 >= VAR_0) {
  return ((void*)0);
 }
 VAR_11 = ((void*)0);
 VAR_12 = 0;

 VAR_3 = FUNC_2(VAR_1, 1);
 if ((VAR_3 & 0xF0) == 0x30) {
  VAR_4 = VAR_3 & 0x0F;
  if(VAR_4 < 4) {
   VAR_4 += 0xF;
  }
 } else {
  VAR_4 = 0;
 }


 if (VAR_4) {
  VAR_8 = FUNC_0(1, VAR_1, VAR_4, &VAR_5, &VAR_7, &VAR_12);
  if (VAR_12 < 0) {
   FUNC_1 (VAR_8);
   return ((void*)0);
  }
  VAR_9 = FUNC_0(VAR_5 + 1, VAR_1, VAR_4, &VAR_6, ((void*)0), &VAR_12);
  if (VAR_12 < 0) {
   FUNC_1 (VAR_8);
   FUNC_1 (VAR_9);
   return ((void*)0);
  }
  *VAR_2 = VAR_6;

  if (VAR_7 == 0xF0 || VAR_7 == 0xF1) {
   VAR_10 = FUNC_3(VAR_9, " || ", 1);
   VAR_11 = FUNC_3(VAR_10, VAR_8, 1);
   FUNC_1(VAR_8);
  } else {
   VAR_10 = FUNC_3(VAR_8, " || ", 1);
   VAR_11 = FUNC_3(VAR_10, VAR_9, 1);
   FUNC_1(VAR_9);
  }
  *VAR_2 = VAR_5 + VAR_6 + 1;
  if(*VAR_2 != VAR_4) {

   VAR_12 = -1;
   FUNC_1 (VAR_11);
   return ((void*)0);
  }
 } else {
  VAR_11 = FUNC_0(0, VAR_1, VAR_4, &VAR_5, &VAR_7, &VAR_12);
  if (VAR_12 < 0) {
   FUNC_1 (VAR_11);
   return ((void*)0);
  }
  *VAR_2 = VAR_5;
 }

 return VAR_11;
}
