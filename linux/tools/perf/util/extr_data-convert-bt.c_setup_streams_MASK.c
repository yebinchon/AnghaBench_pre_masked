
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_cpus_avail; } ;
struct perf_header {TYPE_1__ env; } ;
struct perf_session {struct perf_header header; } ;
struct ctf_writer {int stream_cnt; struct ctf_stream** stream; } ;
struct ctf_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct ctf_stream** FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ctf_writer *VAR_2, struct perf_session *VAR_3)
{
 struct ctf_stream **VAR_4;
 struct perf_header *VAR_5 = &VAR_3->header;
 int VAR_6;





 VAR_6 = VAR_5->env.nr_cpus_avail ?: VAR_1;

 VAR_4 = FUNC_1(sizeof(*VAR_4) * VAR_6);
 if (!VAR_4) {
  FUNC_0("Failed to allocate streams.\n");
  return -VAR_0;
 }

 VAR_2->stream = VAR_4;
 VAR_2->stream_cnt = VAR_6;
 return 0;
}
