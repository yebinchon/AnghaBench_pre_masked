
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_time_interval {int dummy; } ;


 int FUNC_0 (struct perf_time_interval*,int ,int) ;
 int FUNC_1 (struct perf_time_interval*,char const*,int ,int ,char*) ;
 int FUNC_2 (struct perf_time_interval*,int,char const*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_3 (char const*,char) ;

int FUNC_4(struct perf_time_interval *VAR_2, int VAR_3,
     const char *VAR_4, u64 VAR_5, u64 VAR_6)
{
 char *VAR_7;
 FUNC_0(VAR_2, 0, sizeof(*VAR_2) * VAR_3);

 VAR_7 = FUNC_3(VAR_4, '/');
 if (VAR_7) {
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_1);
 }

 VAR_7 = FUNC_3(VAR_4, '-');
 if (VAR_7) {
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_0);
 }

 VAR_7 = FUNC_3(VAR_4, '%');
 if (VAR_7)
  return FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);

 return -1;
}
