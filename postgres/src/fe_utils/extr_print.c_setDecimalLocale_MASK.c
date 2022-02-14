
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lconv {int* grouping; scalar_t__* thousands_sep; scalar_t__* decimal_point; } ;


 char* VAR_0 ;
 int VAR_1 ;
 struct lconv* FUNC_0 () ;
 void* FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* VAR_2 ;

void
FUNC_3(void)
{
 struct lconv *VAR_3;

 VAR_3 = FUNC_0();


 if (*VAR_3->decimal_point)
  VAR_0 = FUNC_1(VAR_3->decimal_point);
 else
  VAR_0 = ".";
 VAR_1 = *VAR_3->grouping;
 if (VAR_1 <= 0 || VAR_1 > 6)
  VAR_1 = 3;



 if (*VAR_3->thousands_sep)
  VAR_2 = FUNC_1(VAR_3->thousands_sep);

 else if (FUNC_2(VAR_0, ",") != 0)
  VAR_2 = ",";
 else
  VAR_2 = ".";
}
