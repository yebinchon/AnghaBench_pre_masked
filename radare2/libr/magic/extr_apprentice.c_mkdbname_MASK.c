
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2, int VAR_3) {
 char *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;
 if (VAR_3) {
  const char *VAR_7;
  if ((VAR_7 = FUNC_3 (VAR_2, '/')) != ((void*)0)) {
   VAR_2 = ++VAR_7;
  }
 }
 VAR_5 = FUNC_2 (VAR_2);
 VAR_6 = FUNC_2 (VAR_1);
 if (VAR_5 + VAR_6 + 1 > VAR_0) {
  return ((void*)0);
 }
 VAR_4 = FUNC_0 (VAR_5 + VAR_6 + 1);
 if (VAR_4) {
  FUNC_1 (VAR_4, VAR_2, VAR_5);
  FUNC_1 (VAR_4+VAR_5, VAR_1, VAR_6);
  VAR_4[VAR_5+VAR_6] = 0;
 }
 return VAR_4;
}
