
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_sample {int cpu; } ;
struct TYPE_3__ {int sample_type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct ctf_writer {int stream_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct ctf_writer *VAR_1, struct perf_sample *VAR_2,
     struct evsel *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->core.attr.sample_type & VAR_0)
  VAR_4 = VAR_2->cpu;

 if (VAR_4 > VAR_1->stream_cnt) {
  FUNC_0("Event was recorded for CPU %d, limit is at %d.\n",
   VAR_4, VAR_1->stream_cnt);
  VAR_4 = 0;
 }

 return VAR_4;
}
