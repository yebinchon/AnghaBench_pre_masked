
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_session {int evlist; } ;
struct perf_data {scalar_t__ path; } ;
struct TYPE_4__ {int record; struct perf_session* session; struct perf_data data; } ;
struct TYPE_3__ {int run_count; } ;


 scalar_t__ FUNC_0 (struct perf_session*) ;
 int VAR_0 ;
 int FUNC_1 (struct perf_session*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct perf_session*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int,char const**,int ,int ,int ) ;
 struct perf_session* FUNC_4 (struct perf_data*,int,int *) ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 (char*) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_6(int VAR_8, const char **VAR_9)
{
 struct perf_session *VAR_10;
 struct perf_data *VAR_11 = &VAR_4.data;

 VAR_8 = FUNC_3(VAR_8, VAR_9, VAR_6, VAR_7,
        VAR_0);

 if (VAR_3)
  VAR_11->path = VAR_3;

 if (VAR_5.run_count != 1 || VAR_2) {
  FUNC_5("Cannot use -r option with perf stat record.\n");
  return -1;
 }

 VAR_10 = FUNC_4(VAR_11, 0, ((void*)0));
 if (FUNC_0(VAR_10)) {
  FUNC_5("Perf session creation failed\n");
  return FUNC_1(VAR_10);
 }

 FUNC_2(VAR_10);

 VAR_10->evlist = VAR_1;
 VAR_4.session = VAR_10;
 VAR_4.record = 1;
 return VAR_8;
}
