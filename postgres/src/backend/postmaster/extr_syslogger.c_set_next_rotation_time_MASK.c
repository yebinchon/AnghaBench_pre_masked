
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {scalar_t__ tm_gmtoff; } ;
typedef int pg_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pg_tm* FUNC_0 (int*,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void)
{
 pg_time_t VAR_4;
 struct pg_tm *VAR_5;
 int VAR_6;


 if (VAR_0 <= 0)
  return;







 VAR_6 = VAR_0 * VAR_1;
 VAR_4 = (pg_time_t) FUNC_1(((void*)0));
 VAR_5 = FUNC_0(&VAR_4, VAR_2);
 VAR_4 += VAR_5->tm_gmtoff;
 VAR_4 -= VAR_4 % VAR_6;
 VAR_4 += VAR_6;
 VAR_4 -= VAR_5->tm_gmtoff;
 VAR_3 = VAR_4;
}
