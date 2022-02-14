
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timex {int freq; int modes; } ;


 int VAR_0 ;
 int FUNC_0 (struct timex*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

int FUNC_3(int VAR_1)
{
 struct timex VAR_2;
 int VAR_3;

 VAR_2.modes = VAR_0;
 VAR_2.freq = VAR_1 << 16;

 VAR_3 = FUNC_0(&VAR_2);
 if (VAR_3 < 0) {
  FUNC_1("Error adjusting freq\n");
  return VAR_3;
 }

 VAR_3 = FUNC_2("./raw_skew");
 VAR_3 |= FUNC_2("./inconsistency-check");
 VAR_3 |= FUNC_2("./nanosleep");

 return VAR_3;
}
