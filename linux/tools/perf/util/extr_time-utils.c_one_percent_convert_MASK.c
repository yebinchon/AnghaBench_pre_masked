
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_time_interval {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,struct perf_time_interval*,int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(struct perf_time_interval *VAR_1,
          const char *VAR_2, u64 VAR_3, u64 VAR_4, char *VAR_5)
{
 char *VAR_6;
 int VAR_7 = FUNC_5(VAR_2), VAR_8;





 if (VAR_2 + VAR_7 - 1 != VAR_5)
  return -1;




 VAR_6 = FUNC_1(VAR_7 + 3);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_6, VAR_2, VAR_7);
 FUNC_4(VAR_6 + VAR_7, "/1");

 VAR_8 = FUNC_3(VAR_6, VAR_1, VAR_3, VAR_4);
 if (VAR_8 == 0)
  VAR_8 = 1;

 FUNC_0(VAR_6);
 return VAR_8;
}
