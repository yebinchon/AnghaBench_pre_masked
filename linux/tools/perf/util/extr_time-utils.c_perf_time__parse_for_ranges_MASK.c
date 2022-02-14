
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_time_interval {int dummy; } ;
struct perf_session {TYPE_1__* evlist; } ;
struct TYPE_2__ {int last_sample_time; int first_sample_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct perf_time_interval*) ;
 int FUNC_1 (struct perf_time_interval*,char const*,int) ;
 int FUNC_2 (struct perf_time_interval*,int,char const*,int ,int ) ;
 struct perf_time_interval* FUNC_3 (char const*,int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char) ;

int FUNC_6(const char *VAR_2,
    struct perf_session *VAR_3,
    struct perf_time_interval **VAR_4,
    int *VAR_5, int *VAR_6)
{
 bool VAR_7 = FUNC_5(VAR_2, '%');
 struct perf_time_interval *VAR_8;
 int VAR_9, VAR_10, VAR_11 = -VAR_0;

 VAR_8 = FUNC_3(VAR_2, &VAR_9);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_7) {
  if (VAR_3->evlist->first_sample_time == 0 &&
      VAR_3->evlist->last_sample_time == 0) {
   FUNC_4("HINT: no first/last sample time found in perf data.\n"
          "Please use latest perf binary to execute 'perf record'\n"
          "(if '--buildid-all' is enabled, please set '--timestamp-boundary').\n");
   goto error;
  }

  VAR_10 = FUNC_2(
    VAR_8, VAR_9,
    VAR_2,
    VAR_3->evlist->first_sample_time,
    VAR_3->evlist->last_sample_time);
 } else {
  VAR_10 = FUNC_1(VAR_8, VAR_2, VAR_9);
 }

 if (VAR_10 < 0)
  goto error_invalid;

 *VAR_5 = VAR_9;
 *VAR_6 = VAR_10;
 *VAR_4 = VAR_8;
 return 0;

error_invalid:
 FUNC_4("Invalid time string\n");
error:
 FUNC_0(VAR_8);
 return VAR_11;
}
