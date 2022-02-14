
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 float FUNC_0 (char const*,char**) ;
 int FUNC_1 (int ,char*,char const*) ;

float FUNC_2(const char *VAR_3) {
 VAR_2 = 0;
 char *VAR_4;
 float VAR_5 = FUNC_0(VAR_3, &VAR_4);
 if (*VAR_4 || VAR_2) {
  FUNC_1(VAR_1, "Invalid float value '%s', defaulting to NAN", VAR_3);
  return VAR_0;
 }
 return VAR_5;
}
