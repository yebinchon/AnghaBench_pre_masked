
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static st32 FUNC_5(const char *VAR_0) {
 st32 VAR_1;
 if (!VAR_0 || !*VAR_0 || !FUNC_1 (VAR_0, "]")) {
  return -1;
 }

 char *VAR_2 = FUNC_2 (VAR_0, FUNC_3 (VAR_0) - 1);
 if (!VAR_2) {
  return -1;
 }
 VAR_1 = FUNC_4 (VAR_2);
 FUNC_0 (VAR_2);
 return VAR_1;
}
