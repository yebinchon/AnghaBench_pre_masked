
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 char* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char*,char*,char const) ;
 int FUNC_3 (char*,char*) ;

char * FUNC_4 (const char * VAR_0, ut32 VAR_1) {
 ut32 VAR_2 = 0, VAR_3 = 1;
 ut32 VAR_4 = 4*VAR_1+1+2;
 char *VAR_5 = VAR_1 > 0 ? FUNC_0 (1, VAR_4): ((void*)0);
 if (!VAR_5) return VAR_5;

 VAR_5[0] = '"';
 while (VAR_2 < VAR_1) {
  if (VAR_0[VAR_2] == '"') {
   FUNC_2 (VAR_5+VAR_3, "\\%c", VAR_0[VAR_2]);
   VAR_3 += 2;
  } else if (FUNC_1 (VAR_0[VAR_2])) {
   FUNC_2 (VAR_5+VAR_3, "\\x%02x", VAR_0[VAR_2]);
   VAR_3 += 4;
  } else {
   VAR_5[VAR_3] = VAR_0[VAR_2];
   VAR_3++;
  }
  VAR_2 ++;
 }
 FUNC_3 (VAR_5, "\"");
 return VAR_5;
}
