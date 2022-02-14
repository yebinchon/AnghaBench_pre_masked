
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*,char*,char const) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0, ut32 VAR_1) {
 ut32 VAR_2 = 0, VAR_3 = 0;
 ut32 VAR_4 = 32 * VAR_1 + 1;
 char *VAR_5 = VAR_1 > 0 ? FUNC_2 (VAR_4) : ((void*)0);
 if (!VAR_5) {
  return VAR_5;
 }

 FUNC_3 (VAR_5, 0, VAR_4);
 while (VAR_2 < VAR_1 && VAR_3 < VAR_1) {
  if (FUNC_0 (VAR_0[VAR_2])) {
   if (VAR_3 + 2 < VAR_1) {
    FUNC_1 (VAR_5);
    return ((void*)0);
   }
   FUNC_4 (VAR_5 + VAR_3, "\\x%02x", VAR_0[VAR_2]);
   VAR_3 += 4;
  } else {
   VAR_5[VAR_3] = VAR_0[VAR_2];
   VAR_3++;
  }
  VAR_2++;
 }
 return VAR_5;
}
