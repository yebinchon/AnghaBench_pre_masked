
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct perf_session {int evlist; } ;
struct option {int dummy; } ;
struct TYPE_6__ {char* path; int mode; } ;
struct TYPE_5__ {struct perf_session* session; int tool; TYPE_3__ data; int aggr_mode; } ;
struct TYPE_4__ {int output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct perf_session*) ;
 struct option const FUNC_1 () ;
 struct option const FUNC_2 (char,char*,int *,char*,int ) ;
 struct option const FUNC_3 (char,char*,char**,char*,char*) ;
 int VAR_4 ;
 int FUNC_4 (struct perf_session*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,struct stat*) ;
 char* VAR_7 ;
 int FUNC_7 (int,char const**,struct option const*,int ,int ) ;
 int FUNC_8 (struct perf_session*) ;
 struct perf_session* FUNC_9 (TYPE_3__*,int,int *) ;
 int FUNC_10 (struct perf_session*) ;
 TYPE_2__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(int VAR_12, const char **VAR_13)
{
 struct perf_session *VAR_14;
 const struct option VAR_15[] = {
 FUNC_3('i', "input", &VAR_7, "file", "input file name"),
 FUNC_2(0, "per-socket", &VAR_8.aggr_mode,
       "aggregate counts per processor socket", VAR_3),
 FUNC_2(0, "per-die", &VAR_8.aggr_mode,
       "aggregate counts per processor die", VAR_1),
 FUNC_2(0, "per-core", &VAR_8.aggr_mode,
       "aggregate counts per physical processor core", VAR_0),
 FUNC_2('A', "no-aggr", &VAR_8.aggr_mode,
       "disable CPU count aggregation", VAR_2),
 FUNC_1()
 };
 struct stat VAR_16;
 int VAR_17;

 VAR_12 = FUNC_7(VAR_12, VAR_13, VAR_15, VAR_10, 0);

 if (!VAR_7 || !FUNC_11(VAR_7)) {
  if (!FUNC_6(VAR_5, &VAR_16) && FUNC_5(VAR_16.st_mode))
   VAR_7 = "-";
  else
   VAR_7 = "perf.data";
 }

 VAR_8.data.path = VAR_7;
 VAR_8.data.mode = VAR_4;

 VAR_14 = FUNC_9(&VAR_8.data, 0, &VAR_8.tool);
 if (FUNC_0(VAR_14))
  return FUNC_4(VAR_14);

 VAR_8.session = VAR_14;
 VAR_9.output = VAR_11;
 VAR_6 = VAR_14->evlist;

 VAR_17 = FUNC_10(VAR_14);
 if (VAR_17)
  return VAR_17;

 FUNC_8(VAR_14);
 return 0;
}
