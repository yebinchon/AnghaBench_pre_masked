
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int) ;
 char* FUNC_3 (char*,char*,char*) ;
 char const* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*,char*,int) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_0) {
 int VAR_1, VAR_2;
 const char *VAR_3;
 char *VAR_4, *VAR_5, *VAR_6;
 if (!FUNC_7 (VAR_0, "_TtC", 4)) {
  int VAR_7 = 4;
  while (VAR_0[VAR_7] && (VAR_0[VAR_7] < '0' || VAR_0[VAR_7] > '9')) {
   VAR_7++;
  }
  VAR_2 = FUNC_0 (VAR_0 + VAR_7);
  VAR_1 = FUNC_6 (VAR_0 + VAR_7);
  if (!VAR_2 || VAR_2 >= VAR_1) {
   return FUNC_5 (VAR_0);
  }
  VAR_6 = FUNC_2 (FUNC_4 (VAR_0 + VAR_7), VAR_2);
  int VAR_8 = (FUNC_4 (VAR_0 + VAR_7) - VAR_0) + VAR_2;
  if (VAR_0[VAR_8] == 'P') {
   VAR_8++;
   VAR_2 = FUNC_0 (VAR_0 + VAR_8);
   VAR_8 = (FUNC_4 (VAR_0 + VAR_8) - VAR_0) + VAR_2;
  }
  VAR_3 = VAR_0 + VAR_8;
  VAR_2 = FUNC_0 (VAR_3);
  VAR_1 = FUNC_6 (VAR_3);
  if (!VAR_2 || VAR_2 >= VAR_1) {
   FUNC_1 (VAR_6);
   return FUNC_5 (VAR_0);
  }
  VAR_5 = FUNC_2 (FUNC_4 (VAR_3), VAR_2);
  VAR_4 = FUNC_3 ("%s.%s", VAR_6, VAR_5);
  FUNC_1 (VAR_6);
  FUNC_1 (VAR_5);
 } else {
  VAR_4 = FUNC_5 (VAR_0);
 }
 return VAR_4;
}
