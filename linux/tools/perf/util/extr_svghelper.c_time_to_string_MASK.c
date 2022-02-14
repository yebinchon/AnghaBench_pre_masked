
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double u64 ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (char*,char*,double) ;

__attribute__((used)) static char *FUNC_1(u64 VAR_2)
{
 static char VAR_3[80];

 VAR_3[0] = 0;

 if (VAR_2 < VAR_1)
  return VAR_3;

 if (VAR_2 < VAR_0) {
  FUNC_0(VAR_3, "%.1f us", VAR_2 / (double)VAR_1);
  return VAR_3;
 }
 FUNC_0(VAR_3, "%.1f ms", VAR_2 / (double)VAR_0);

 return VAR_3;
}
