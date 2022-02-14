
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int upabbr ;
typedef int pg_tz ;
typedef int pg_time_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *,long*,int*,int *) ;
 unsigned char FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static bool
FUNC_3(pg_time_t VAR_1, const char *VAR_2, pg_tz *VAR_3,
           int *VAR_4, int *VAR_5)
{
 char VAR_6[VAR_0 + 1];
 unsigned char *VAR_7;
 long int VAR_8;


 FUNC_2(VAR_6, VAR_2, sizeof(VAR_6));
 for (VAR_7 = (unsigned char *) VAR_6; *VAR_7; VAR_7++)
  *VAR_7 = FUNC_1(*VAR_7);


 if (FUNC_0(VAR_6,
          &VAR_1,
          &VAR_8,
          VAR_5,
          VAR_3))
 {

  *VAR_4 = (int) -VAR_8;
  return 1;
 }
 return 0;
}
