
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,char*,int ,int ,int ,int,int ,int) ;

int
FUNC_2(void)
{
 int VAR_8 = FUNC_0();





 if (VAR_0 != VAR_6)
  (void) FUNC_1("datestyle", "ISO",
         VAR_5, VAR_4,
         VAR_1, 1, 0, 0);
 if (VAR_3 != VAR_2)
  (void) FUNC_1("intervalstyle", "postgres",
         VAR_5, VAR_4,
         VAR_1, 1, 0, 0);
 if (VAR_7 < 3)
  (void) FUNC_1("extra_float_digits", "3",
         VAR_5, VAR_4,
         VAR_1, 1, 0, 0);

 return VAR_8;
}
