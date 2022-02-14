
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_time_interval {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (double*,char*) ;
 int FUNC_2 (struct perf_time_interval*,double,double,int ,int ) ;
 int FUNC_3 (char**,char**,char*,char) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, struct perf_time_interval *VAR_1,
         u64 VAR_2, u64 VAR_3)
{
 char *VAR_4 = ((void*)0), *VAR_5;
 double VAR_6, VAR_7;
 int VAR_8;





 VAR_8 = FUNC_3(&VAR_4, &VAR_5, VAR_0, '-');
 if (VAR_8 || !VAR_4)
  return VAR_8;

 if ((FUNC_1(&VAR_6, VAR_4) != 0) ||
     (FUNC_1(&VAR_7, VAR_5) != 0)) {
  FUNC_0(VAR_4);
  return -1;
 }

 FUNC_0(VAR_4);

 return FUNC_2(VAR_1, VAR_6, VAR_7, VAR_2, VAR_3);
}
