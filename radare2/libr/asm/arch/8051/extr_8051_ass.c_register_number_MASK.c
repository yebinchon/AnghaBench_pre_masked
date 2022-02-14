
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(char const*VAR_0) {
 if (FUNC_1 (VAR_0)) {
  return VAR_0[1] - '0';
 }
 if (FUNC_0 (VAR_0)) {
  return VAR_0[2] - '0';
 }
 return 8;
}
