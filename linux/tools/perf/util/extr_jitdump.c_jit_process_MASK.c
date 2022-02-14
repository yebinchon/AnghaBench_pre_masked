
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_session {int evlist; } ;
struct perf_data {int dummy; } ;
struct machine {int dummy; } ;
struct jit_buf_desc {int bytes_written; int sample_type; struct machine* machine; struct perf_data* output; struct perf_session* session; } ;
struct TYPE_3__ {int sample_type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
typedef int pid_t ;
typedef int jd ;


 struct evsel* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 (struct jit_buf_desc*,char*) ;
 int FUNC_3 (struct jit_buf_desc*,int ,int) ;

int
FUNC_4(struct perf_session *VAR_0,
     struct perf_data *VAR_1,
     struct machine *VAR_2,
     char *VAR_3,
     pid_t VAR_4,
     u64 *VAR_5)
{
 struct evsel *VAR_6;
 struct jit_buf_desc VAR_7;
 int VAR_8;




 if (FUNC_1(VAR_3, VAR_4))
  return 0;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.session = VAR_0;
 VAR_7.output = VAR_1;
 VAR_7.machine = VAR_2;





 VAR_6 = FUNC_0(VAR_0->evlist);
 VAR_7.sample_type = VAR_6->core.attr.sample_type;

 *VAR_5 = 0;

 VAR_8 = FUNC_2(&VAR_7, VAR_3);
 if (!VAR_8) {
  *VAR_5 = VAR_7.bytes_written;
  VAR_8 = 1;
 }

 return VAR_8;
}
