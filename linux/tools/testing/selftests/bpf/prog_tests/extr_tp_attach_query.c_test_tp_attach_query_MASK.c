
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_query_bpf {int ids_len; scalar_t__ prog_cnt; scalar_t__* ids; } ;
struct perf_event_attr {int sample_type; int sample_period; int wakeup_events; int type; int config; } ;
struct bpf_prog_info {scalar_t__ id; scalar_t__ nr_map_ids; scalar_t__ xlated_prog_len; scalar_t__ jited_prog_len; } ;
struct bpf_object {int dummy; } ;
typedef int prog_info ;
typedef int buf ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,char*,int,scalar_t__,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,struct bpf_prog_info*,scalar_t__*) ;
 int FUNC_2 (struct bpf_object*) ;
 int FUNC_3 (char const*,int ,struct bpf_object**,int*) ;
 int FUNC_4 (struct bpf_prog_info*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (struct perf_event_query_bpf*) ;
 int FUNC_7 (int,int ,...) ;
 struct perf_event_query_bpf* FUNC_8 (int) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (char*,int,char*) ;
 int FUNC_12 (char*,int *,int ) ;
 int FUNC_13 (int ,struct perf_event_attr*,int,int ,int,int ) ;

void FUNC_14(void)
{
 const int VAR_13 = 3;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19[VAR_13], VAR_20[VAR_13];
 __u32 VAR_21 = 0, VAR_22, VAR_23[VAR_13];
 const char *VAR_24 = "./test_tracepoint.o";
 struct perf_event_query_bpf *VAR_25;
 struct perf_event_attr VAR_26 = {};
 struct bpf_object *VAR_27[VAR_13];
 struct bpf_prog_info VAR_28;
 char VAR_29[256];

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  VAR_27[VAR_14] = ((void*)0);

 FUNC_11(VAR_29, sizeof(VAR_29),
   "/sys/kernel/debug/tracing/events/sched/sched_switch/id");
 VAR_17 = FUNC_9(VAR_29, VAR_3, 0);
 if (FUNC_0(VAR_17 < 0, "open", "err %d errno %d\n", VAR_17, VAR_12))
  return;
 VAR_16 = FUNC_10(VAR_17, VAR_29, sizeof(VAR_29));
 FUNC_5(VAR_17);
 if (FUNC_0(VAR_16 <= 0 || VAR_16 >= sizeof(VAR_29),
    "read", "bytes %d errno %d\n", VAR_16, VAR_12))
  return;

 VAR_26.config = FUNC_12(VAR_29, ((void*)0), 0);
 VAR_26.type = VAR_10;
 VAR_26.sample_type = VAR_9 | VAR_8;
 VAR_26.sample_period = 1;
 VAR_26.wakeup_events = 1;

 VAR_25 = FUNC_8(sizeof(*VAR_25) + sizeof(__u32) * VAR_13);
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_18 = FUNC_3(VAR_24, VAR_0, &VAR_27[VAR_14],
        &VAR_19[VAR_14]);
  if (FUNC_0(VAR_18, "prog_load", "err %d errno %d\n", VAR_18, VAR_12))
   goto cleanup1;

  FUNC_4(&VAR_28, sizeof(VAR_28));
  VAR_28.jited_prog_len = 0;
  VAR_28.xlated_prog_len = 0;
  VAR_28.nr_map_ids = 0;
  VAR_22 = sizeof(VAR_28);
  VAR_18 = FUNC_1(VAR_19[VAR_14], &VAR_28, &VAR_22);
  if (FUNC_0(VAR_18, "bpf_obj_get_info_by_fd", "err %d errno %d\n",
     VAR_18, VAR_12))
   goto cleanup1;
  VAR_23[VAR_14] = VAR_28.id;

  VAR_20[VAR_14] = FUNC_13(VAR_11, &VAR_26, -1 ,
        0 , -1 ,
        0 );
  if (FUNC_0(VAR_20[VAR_14] < 0, "perf_event_open", "err %d errno %d\n",
     VAR_20[VAR_14], VAR_12))
   goto cleanup2;
  VAR_18 = FUNC_7(VAR_20[VAR_14], VAR_5, 0);
  if (FUNC_0(VAR_18, "perf_event_ioc_enable", "err %d errno %d\n",
     VAR_18, VAR_12))
   goto cleanup3;

  if (VAR_14 == 0) {

   VAR_25->ids_len = VAR_13;
   VAR_18 = FUNC_7(VAR_20[VAR_14], VAR_6, VAR_25);
   if (FUNC_0(VAR_18 || VAR_25->prog_cnt != 0,
      "perf_event_ioc_query_bpf",
      "err %d errno %d query->prog_cnt %u\n",
      VAR_18, VAR_12, VAR_25->prog_cnt))
    goto cleanup3;
  }

  VAR_18 = FUNC_7(VAR_20[VAR_14], VAR_7, VAR_19[VAR_14]);
  if (FUNC_0(VAR_18, "perf_event_ioc_set_bpf", "err %d errno %d\n",
     VAR_18, VAR_12))
   goto cleanup3;

  if (VAR_14 == 1) {

   VAR_25->ids_len = 0;
   VAR_18 = FUNC_7(VAR_20[VAR_14], VAR_6, VAR_25);
   if (FUNC_0(VAR_18 || VAR_25->prog_cnt != 2,
      "perf_event_ioc_query_bpf",
      "err %d errno %d query->prog_cnt %u\n",
      VAR_18, VAR_12, VAR_25->prog_cnt))
    goto cleanup3;



   VAR_18 = FUNC_7(VAR_20[VAR_14], VAR_6,
        (struct perf_event_query_bpf *)0x1);
   if (FUNC_0(!VAR_18 || VAR_12 != VAR_1,
      "perf_event_ioc_query_bpf",
      "err %d errno %d\n", VAR_18, VAR_12))
    goto cleanup3;


   VAR_25->ids_len = 1;
   VAR_18 = FUNC_7(VAR_20[VAR_14], VAR_6, VAR_25);
   if (FUNC_0(!VAR_18 || VAR_12 != VAR_2 || VAR_25->prog_cnt != 2,
      "perf_event_ioc_query_bpf",
      "err %d errno %d query->prog_cnt %u\n",
      VAR_18, VAR_12, VAR_25->prog_cnt))
    goto cleanup3;
  }

  VAR_25->ids_len = VAR_13;
  VAR_18 = FUNC_7(VAR_20[VAR_14], VAR_6, VAR_25);
  if (FUNC_0(VAR_18 || VAR_25->prog_cnt != (VAR_14 + 1),
     "perf_event_ioc_query_bpf",
     "err %d errno %d query->prog_cnt %u\n",
     VAR_18, VAR_12, VAR_25->prog_cnt))
   goto cleanup3;
  for (VAR_15 = 0; VAR_15 < VAR_14 + 1; VAR_15++)
   if (FUNC_0(VAR_23[VAR_15] != VAR_25->ids[VAR_15],
      "perf_event_ioc_query_bpf",
      "#%d saved_prog_id %x query prog_id %x\n",
      VAR_15, VAR_23[VAR_15], VAR_25->ids[VAR_15]))
    goto cleanup3;
 }

 VAR_14 = VAR_13 - 1;
 for (; VAR_14 >= 0; VAR_14--) {
 cleanup3:
  FUNC_7(VAR_20[VAR_14], VAR_4);
 cleanup2:
  FUNC_5(VAR_20[VAR_14]);
 cleanup1:
  FUNC_2(VAR_27[VAR_14]);
 }
 FUNC_6(VAR_25);
}
