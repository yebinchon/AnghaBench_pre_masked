
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static st32 FUNC_6(char *VAR_0) {
 st32 VAR_1, VAR_2 = 0;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 char *VAR_9 = FUNC_2 (FUNC_4 (VAR_0) + 1);
 if (!VAR_9) {
  VAR_2 = -1;
  goto end;
 }
 VAR_7 = (char *)FUNC_2 (FUNC_4 (VAR_0) + 1);
 if (!VAR_7) {
  VAR_2 = -1;
  goto end;
 }
 VAR_8 = VAR_7;
 while (*VAR_0 != '\0') {
  for (; *VAR_0 == ' '; VAR_0++) {
   ;
  }
  for (VAR_3 = 0; VAR_0[VAR_3] != ',' && VAR_0[VAR_3] != '\0'; VAR_3++) {
   ;
  }
  FUNC_3 (VAR_7, VAR_0, VAR_3 + 1);

  VAR_0 += VAR_3;
  if (*VAR_0 != '\0') {
   VAR_0++;
  }

  for (VAR_3 = 0; VAR_7[VAR_3] != '-' && VAR_7[VAR_3] != '\0'; VAR_3++) {
   ;
  }
  if (VAR_3 == FUNC_4 (VAR_7)) {
   VAR_1 = FUNC_1 (VAR_7);
   if (VAR_1 == -1 || VAR_1 > 15) {
    VAR_2 = -1;
    goto end;
   }
   VAR_2 |= 1 << VAR_1;
  } else {
   FUNC_5 (VAR_9, VAR_7, VAR_3);
   VAR_9[VAR_3] = 0;
   VAR_7 += VAR_3 + 1;
   VAR_5 = FUNC_1 (VAR_9);
   if (VAR_5 == -1 || VAR_5 > 15) {
    VAR_2 = -1;
    goto end;
   }
   VAR_6 = FUNC_1 (VAR_7);
   if (VAR_6 == -1 || VAR_6 > 15) {
    VAR_2 = -1;
    goto end;
   }

   for (VAR_4 = VAR_5; VAR_4 <= VAR_6; VAR_4++ ) {
    VAR_2 |= 1 << VAR_4;
   }
  }
 }
end:
 FUNC_0 (VAR_8);
 FUNC_0 (VAR_9);
 return VAR_2;
}
