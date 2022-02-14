
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;

int FUNC_0(const char VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 91; VAR_2++ ) {
  if (VAR_0[VAR_2] == VAR_1) {
   return VAR_2;
  }
 }
 return -1;
}
