
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double,double) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(const char *VAR_0, const unsigned VAR_1)
{

 const double VAR_2 = (double)VAR_1 / 60.0;


 const double VAR_3 = (VAR_2 == 0.0) ? 0.0 : 1000.0 / VAR_2;

 while (*VAR_0 != '\0') {
  FUNC_2(*VAR_0++);
  FUNC_1(VAR_3 + (FUNC_0(0.0, 62.5)));
 }
}
