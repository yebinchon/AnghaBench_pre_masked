
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (double) ;
 double VAR_0 ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double VAR_1 ;
 double FUNC_3 (double,int) ;

__attribute__((used)) static double FUNC_4(double VAR_2, double VAR_3, double VAR_4)
{




 static const double VAR_5[2][12] = {
  {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334},
  {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335}
 };

 double VAR_6, VAR_7;
 int VAR_8;

 VAR_2 += FUNC_2(VAR_3 / 12);
 VAR_3 = FUNC_3(VAR_3, 12);

 VAR_8 = (int)VAR_3;
 if (VAR_8 < 0 || VAR_8 >= 12)
  return VAR_0;

 VAR_6 = FUNC_2(FUNC_1(VAR_2) / VAR_1);
 VAR_7 = VAR_5[FUNC_0(VAR_2)][VAR_8];

 return VAR_6 + VAR_7 + VAR_4 - 1;
}
