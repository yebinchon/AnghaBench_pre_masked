
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_time_interval {int dummy; } ;


 scalar_t__ FUNC_0 (double*,char*) ;
 int FUNC_1 (struct perf_time_interval*,double,double,int ,int ) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, struct perf_time_interval *VAR_1,
          u64 VAR_2, u64 VAR_3)
{
 char *VAR_4, *VAR_5;
 double VAR_6, VAR_7, VAR_8;
 int VAR_9;







 VAR_4 = FUNC_2(VAR_0, '/');
 if (!VAR_4)
  return -1;

 *VAR_4 = '\0';
 if (FUNC_0(&VAR_6, VAR_0) < 0)
  return -1;

 VAR_4++;
 VAR_9 = (int)FUNC_3(VAR_4, &VAR_5, 10);
 if (*VAR_5)
  return -1;

 if (VAR_6 <= 0.0)
  return -1;

 VAR_7 = VAR_6 * (VAR_9 - 1);
 VAR_8 = VAR_6 * VAR_9;

 return FUNC_1(VAR_1, VAR_7, VAR_8, VAR_2, VAR_3);
}
