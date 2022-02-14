
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;



__attribute__((used)) static char FUNC_0(const ut8 *VAR_0, int VAR_1) {
 const int VAR_2 = VAR_1 / 8;
 const int VAR_3 = VAR_1 % 8;

 return (VAR_0[VAR_2] & 1<< VAR_3);
}
