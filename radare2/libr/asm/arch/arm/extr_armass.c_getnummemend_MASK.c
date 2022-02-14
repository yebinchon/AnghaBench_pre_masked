
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static st32 FUNC_5 (const char *VAR_1) {
 st32 VAR_2;
 VAR_0 = 0;
 if (!VAR_1 || !*VAR_1 || !FUNC_2 (VAR_1, "]")) {
  VAR_0 = 1;
  return -1;
 }
 char *VAR_3 = FUNC_3 (VAR_1, FUNC_4 (VAR_1) - 1);
 if (!VAR_3) {
  VAR_0 = 1;
  return -1;
 }
 VAR_2 = FUNC_1 (VAR_3);
 FUNC_0 (VAR_3);
 return VAR_2;
}
