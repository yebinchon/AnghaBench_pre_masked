
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nr_cpus_online; } ;
struct TYPE_6__ {TYPE_1__ env; } ;
struct perf_session {TYPE_2__ header; } ;
struct perf_cpu_map {int nr; int* map; } ;
struct TYPE_7__ {int sample_type; } ;
struct TYPE_8__ {TYPE_3__ attr; } ;
struct evsel {TYPE_4__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct perf_cpu_map* FUNC_1 (char const*) ;
 int FUNC_2 (struct perf_cpu_map*) ;
 struct evsel* FUNC_3 (struct perf_session*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,unsigned long*) ;

int FUNC_6(struct perf_session *VAR_3,
        const char *VAR_4, unsigned long *VAR_5)
{
 int VAR_6, VAR_7 = -1;
 struct perf_cpu_map *VAR_8;
 int VAR_9 = FUNC_0(VAR_3->header.env.nr_cpus_online, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  struct evsel *VAR_10;

  VAR_10 = FUNC_3(VAR_3, VAR_6);
  if (!VAR_10)
   continue;

  if (!(VAR_10->core.attr.sample_type & VAR_1)) {
   FUNC_4("File does not contain CPU events. "
          "Remove -C option to proceed.\n");
   return -1;
  }
 }

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_4("Invalid cpu_list\n");
  return -1;
 }

 for (VAR_6 = 0; VAR_6 < VAR_8->nr; VAR_6++) {
  int VAR_11 = VAR_8->map[VAR_6];

  if (VAR_11 >= VAR_9) {
   FUNC_4("Requested CPU %d too large. "
          "Consider raising MAX_NR_CPUS\n", VAR_11);
   goto out_delete_map;
  }

  FUNC_5(VAR_11, VAR_5);
 }

 VAR_7 = 0;

out_delete_map:
 FUNC_2(VAR_8);
 return VAR_7;
}
