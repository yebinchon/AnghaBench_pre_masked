
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char const*,int,int) ;
 scalar_t__ FUNC_2 (char const*,int*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char const*,char const*,int) ;

__attribute__((used)) static inline bool FUNC_6(const char *VAR_4, const char *VAR_5, int VAR_6, int VAR_7) {
 const int VAR_8 = VAR_7 & VAR_3;
 const int VAR_9 = VAR_7 & VAR_1;
 char *VAR_10 = ((void*)0);
 int VAR_11;
 bool VAR_12 = 0;
 if (!VAR_4 || !VAR_5 || VAR_6 < 0) {
  return 0;
 }
 if (VAR_7 & VAR_0) {
  VAR_10 = (char*)FUNC_2 (VAR_4, &VAR_11);
  if (!VAR_10) {
   return 0;
  }
  VAR_4 = (const char *)VAR_10;
 } else {
  VAR_11 = FUNC_3 (VAR_4);
 }
 if (VAR_6 <= VAR_11) {
  if (VAR_7 & VAR_2) {
   if (VAR_8 && VAR_9) VAR_12 = (VAR_11==VAR_6 && !FUNC_1 (VAR_4, VAR_5, VAR_6, 0));
   else if (VAR_8) VAR_12 = !FUNC_1 (VAR_4, VAR_5, VAR_6, 0);
   else if (VAR_9) VAR_12 = !FUNC_1 (VAR_4+(VAR_11-VAR_6), VAR_5, VAR_6, 0);
   else VAR_12 = !FUNC_1 (VAR_4, VAR_5, VAR_6, 1);
  } else {
   if (VAR_8 && VAR_9) VAR_12 = (VAR_11==VAR_6 && !FUNC_4 (VAR_4, VAR_5, VAR_6));
   else if (VAR_8) VAR_12 = !FUNC_4 (VAR_4, VAR_5, VAR_6);
   else if (VAR_9) VAR_12 = !FUNC_4 (VAR_4+(VAR_11-VAR_6), VAR_5, VAR_6);
   else VAR_12 = FUNC_5 (VAR_4, VAR_5, VAR_6);
  }
 }
 FUNC_0 (VAR_10);
 return VAR_12;
}
