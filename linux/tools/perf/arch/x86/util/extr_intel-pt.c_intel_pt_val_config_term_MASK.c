
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valid_str ;
typedef int u64 ;
struct perf_pmu {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,unsigned long long) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (struct perf_pmu*,char const*,char*,...) ;
 int FUNC_3 (char*,char const*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct perf_pmu *VAR_2,
        const char *VAR_3, const char *VAR_4,
        const char *VAR_5, u64 VAR_6)
{
 char VAR_7[256];
 unsigned int VAR_8;
 unsigned long long VAR_9;
 u64 VAR_10;
 int VAR_11;

 if (FUNC_2(VAR_2, VAR_3, "%llx", &VAR_9) != 1)
  VAR_9 = 0;

 if (VAR_5 &&
     FUNC_2(VAR_2, VAR_5, "%d", &VAR_11) == 1 && !VAR_11)
  VAR_9 = 0;

 VAR_9 |= 1;

 VAR_10 = FUNC_1(&VAR_2->format, VAR_4);

 VAR_6 &= VAR_10;

 for (VAR_8 = 0; VAR_10 && !(VAR_10 & 1); VAR_8++)
  VAR_10 >>= 1;

 VAR_6 >>= VAR_8;

 if (VAR_6 > 63)
  goto out_err;

 if (VAR_9 & (1 << VAR_6))
  return 0;
out_err:
 FUNC_0(VAR_7, sizeof(VAR_7), VAR_9);
 FUNC_3("Invalid %s for %s. Valid values are: %s\n",
        VAR_4, VAR_1, VAR_7);
 return -VAR_0;
}
