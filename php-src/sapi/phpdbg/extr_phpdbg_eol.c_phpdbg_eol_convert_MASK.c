
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 char* FUNC_4 (char*,int) ;
 int VAR_5 ;

void FUNC_5(char **VAR_6, int *VAR_7)
{
 char *VAR_8 = *VAR_6, *VAR_9;
 int VAR_10 = *VAR_7, VAR_11, VAR_12;
 char VAR_13, VAR_14;

 if ((FUNC_0(VAR_5) & VAR_3) != VAR_3) {
  return;
 }

 if (VAR_1 == FUNC_0(VAR_4)) {
  VAR_9 = (char *)FUNC_3(VAR_10 + FUNC_1(VAR_8, VAR_10));

  VAR_13 = VAR_14 = VAR_8[0];
  VAR_12 = VAR_11 = 0;
  for (; VAR_12 < VAR_10;) {
   if (0x0a == VAR_14 && VAR_13 != 0x0d) {
    VAR_9[VAR_11] = 0x0d;
    VAR_11++;
    VAR_9[VAR_11] = VAR_14;
   } else if(0x0d == VAR_14) {
    if (VAR_12 + 1 < VAR_10 && 0x0a != VAR_8[VAR_12+1]) {
     VAR_9[VAR_11] = VAR_14;
     VAR_11++;
     VAR_9[VAR_11] = 0x0a;
     VAR_13 = 0x0a;
    } else {
     VAR_9[VAR_11] = 0x0d;
     VAR_13 = 0x0d;
    }
   } else {
    VAR_9[VAR_11] = VAR_14;
    VAR_13 = VAR_14;
   }

   VAR_12++;
   VAR_11++;
   VAR_14 = VAR_8[VAR_12];
  }

 } else if (VAR_2 == FUNC_0(VAR_4) || VAR_0 == FUNC_0(VAR_4)) {
  char VAR_15, VAR_16;

  if (VAR_2 == FUNC_0(VAR_4)) {
   VAR_15 = 0x0a;
   VAR_16 = 0x0d;
  } else {
   VAR_15 = 0x0d;
   VAR_16 = 0x0a;
  }


  VAR_9 = (char *)FUNC_3(VAR_10);

  VAR_13 = VAR_14 = VAR_8[0];
  VAR_12 = VAR_11 = 0;
  for (; VAR_11 < VAR_10;) {
   if (VAR_16 == VAR_14) {
    VAR_9[VAR_11] = VAR_15;
   } else if (VAR_15 == VAR_14) {
    if (VAR_16 != VAR_13) {
     VAR_9[VAR_11] = VAR_15;
    }
   } else {
    VAR_9[VAR_11] = VAR_14;
   }

   VAR_13 = VAR_14;
   VAR_11++;
   VAR_14 = VAR_8[VAR_11];
  }
 } else {
  return;
 }

 FUNC_2(*VAR_6);
 *VAR_6 = FUNC_4(VAR_9, VAR_11);
 *VAR_7 = VAR_11;
 VAR_8 = ((void*)0);
}
