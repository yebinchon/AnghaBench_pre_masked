
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_seq {int * buffer; } ;
struct tep_record {int size; int data; int cpu; } ;
struct perf_sample {int raw_size; int raw_data; int cpu; } ;
struct gfp_flag {unsigned int flags; int compact_str; int human_readable; } ;
struct evsel {TYPE_1__* tp_format; } ;
struct TYPE_2__ {int tep; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gfp_flag*,struct gfp_flag*,int,int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 struct gfp_flag* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct gfp_flag*,int,int,int ) ;
 struct gfp_flag* FUNC_3 (struct gfp_flag*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (int *,char*,char**) ;
 int FUNC_7 (int ,struct trace_seq*,struct tep_record*,char*,int ) ;
 int FUNC_8 (struct trace_seq*) ;
 int FUNC_9 (struct trace_seq*) ;

__attribute__((used)) static int FUNC_10(struct evsel *VAR_5, struct perf_sample *VAR_6,
      unsigned int VAR_7)
{
 struct tep_record VAR_8 = {
  .cpu = VAR_6->cpu,
  .data = VAR_6->raw_data,
  .size = VAR_6->raw_size,
 };
 struct trace_seq VAR_9;
 char *VAR_10, *VAR_11 = ((void*)0);

 if (VAR_4) {
  struct gfp_flag VAR_12 = {
   .flags = VAR_7,
  };

  if (FUNC_0(&VAR_12, VAR_3, VAR_4, sizeof(*VAR_3), VAR_2))
   return 0;
 }

 FUNC_9(&VAR_9);
 FUNC_7(VAR_5->tp_format->tep,
   &VAR_9, &VAR_8, "%s", VAR_1);

 VAR_10 = FUNC_6(VAR_9.buffer, " ", &VAR_11);
 while (VAR_10) {
  if (!FUNC_5(VAR_10, "gfp_flags=", 10)) {
   struct gfp_flag *VAR_13;

   VAR_13 = FUNC_3(VAR_3, (VAR_4 + 1) * sizeof(*VAR_3));
   if (VAR_13 == ((void*)0))
    return -VAR_0;

   VAR_3 = VAR_13;
   VAR_13 += VAR_4++;

   VAR_13->flags = VAR_7;
   VAR_13->human_readable = FUNC_4(VAR_10 + 10);
   VAR_13->compact_str = FUNC_1(VAR_10 + 10);
   if (!VAR_13->human_readable || !VAR_13->compact_str)
    return -VAR_0;

   FUNC_2(VAR_3, VAR_4, sizeof(*VAR_3), VAR_2);
  }

  VAR_10 = FUNC_6(((void*)0), " ", &VAR_11);
 }

 FUNC_8(&VAR_9);
 return 0;
}
