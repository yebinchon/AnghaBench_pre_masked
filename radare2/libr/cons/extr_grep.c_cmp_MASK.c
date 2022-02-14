
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut64 ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 char* FUNC_3 (void const*) ;
 char* FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int VAR_0 ;
 int FUNC_6 (void const*,void const*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const void *VAR_1, const void *VAR_2) {
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 const char *VAR_5 = FUNC_3 (VAR_1);
 const char *VAR_6 = FUNC_3 (VAR_2);
 if (!VAR_1 || !VAR_2) {
  return (int) (size_t) ((char*) VAR_1 - (char*) VAR_2);
 }
 if (VAR_0 > 0) {
  VAR_3 = FUNC_7 (VAR_5);
  VAR_4 = FUNC_7 (VAR_6);
  int VAR_7 = FUNC_5 (VAR_3);
  int VAR_8 = FUNC_5 (VAR_4);
  VAR_5 = (VAR_7 > VAR_0)? FUNC_4 (VAR_3, VAR_0): "";
  VAR_6 = (VAR_8 > VAR_0)? FUNC_4 (VAR_4, VAR_0): "";
 }
 if (FUNC_0 (*VAR_5) && FUNC_0 (*VAR_6)) {
  ut64 VAR_9 = FUNC_2 (((void*)0), VAR_5);
  ut64 VAR_10 = FUNC_2 (((void*)0), VAR_6);
  int VAR_11 = VAR_9 > VAR_10;
  FUNC_1 (VAR_3);
  FUNC_1 (VAR_4);
  return VAR_11;
 }
 if (VAR_3 && VAR_4) {
  int VAR_12 = FUNC_6 (VAR_5, VAR_6);
  FUNC_1 (VAR_3);
  FUNC_1 (VAR_4);
  return VAR_12;
 }
 FUNC_1 (VAR_3);
 FUNC_1 (VAR_4);
 return FUNC_6 (VAR_1, VAR_2);
}
