
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut32 ;



__attribute__((used)) static int FUNC_0 (const char *VAR_0, ut32 VAR_1) {
 int VAR_2 = 0, VAR_3 = 0;
 ut32 VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 const char *VAR_7 = VAR_0;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_1; VAR_4++,VAR_7++) {
  if (*VAR_7 == 'L') {
   VAR_2 = 1;
   VAR_5 = VAR_4;
   break;
  }
 }

 for (VAR_4 = 0, VAR_6 = 0; VAR_4 < VAR_1; VAR_4++,VAR_7++) {
  if (*VAR_7 == ';') {
   VAR_3 = 1;
   VAR_6 = VAR_4;
   break;
  }
 }

 return 1 ? VAR_2 == VAR_3 && VAR_2 == 1 && VAR_5 < VAR_6 : 0;
}
