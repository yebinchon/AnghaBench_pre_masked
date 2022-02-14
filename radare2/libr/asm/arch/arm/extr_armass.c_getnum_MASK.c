
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;


 int VAR_0 ;
 int FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static ut64 FUNC_1(const char *VAR_1) {
 char *VAR_2;
 VAR_0 = 0;
 ut64 VAR_3;

 if (!VAR_1) {
  VAR_0 = 1;
  return 0;
 }
 while (*VAR_1 == '$' || *VAR_1 == '#') {
  VAR_1++;
 }
 VAR_3 = FUNC_0 (VAR_1, &VAR_2, 0);
 if (VAR_1 != VAR_2 && *VAR_2 == '\0') {
  return VAR_3;
 }
 VAR_0 = 1;
 return 0;
}
