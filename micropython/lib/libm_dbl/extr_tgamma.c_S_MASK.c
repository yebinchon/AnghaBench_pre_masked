
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double double_t ;


 int VAR_0 ;
 double* VAR_1 ;
 double* VAR_2 ;

__attribute__((used)) static double FUNC_0(double VAR_3)
{
 double_t VAR_4 = 0, VAR_5 = 0;
 int VAR_6;


 if (VAR_3 < 8)
  for (VAR_6 = VAR_0; VAR_6 >= 0; VAR_6--) {
   VAR_4 = VAR_4 * VAR_3 + VAR_2[VAR_6];
   VAR_5 = VAR_5 * VAR_3 + VAR_1[VAR_6];
  }
 else
  for (VAR_6 = 0; VAR_6 <= VAR_0; VAR_6++) {
   VAR_4 = VAR_4 / VAR_3 + VAR_2[VAR_6];
   VAR_5 = VAR_5 / VAR_3 + VAR_1[VAR_6];
  }
 return VAR_4/VAR_5;
}
