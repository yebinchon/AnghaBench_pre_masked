
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int8_t ;



__attribute__((used)) static double FUNC_0(double VAR_0) {
 double VAR_1 = (VAR_0-1)/(VAR_0+1);
 double VAR_2 = VAR_1*VAR_1;
 double VAR_3 = 0;
 for (int8_t VAR_4=33; VAR_4>0; VAR_4-=2) {
  VAR_3 = 1.0/(double)VAR_4 + VAR_2 * VAR_3;
 }
 return 2*VAR_1*VAR_3;
}
