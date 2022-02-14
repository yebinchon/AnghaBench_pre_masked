
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



const ut8 *FUNC_0(const ut8 *VAR_0, int VAR_1) {
 const ut8 *VAR_2;
 VAR_2 = VAR_0;
 while (VAR_1 - (VAR_2 - VAR_0)) {
  switch (*VAR_2) {
  case ' ':
  case '\t':
  case 10:
   return VAR_2;
  }
  VAR_2++;
 }
 return ((void*)0);
}
