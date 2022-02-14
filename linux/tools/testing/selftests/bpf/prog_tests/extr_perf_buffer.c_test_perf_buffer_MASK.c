
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_buffer_opts {int * ctx; int sample_cb; } ;
struct perf_buffer {int dummy; } ;
struct bpf_program {int dummy; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
typedef struct perf_buffer bpf_link ;
typedef int cpu_set_t ;
typedef int cpu_set ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct perf_buffer*) ;
 int FUNC_5 (struct perf_buffer*) ;
 int VAR_1 ;
 int FUNC_6 (struct perf_buffer*) ;
 int FUNC_7 (struct bpf_map*) ;
 int FUNC_8 (struct bpf_object*) ;
 struct bpf_map* FUNC_9 (struct bpf_object*,char*) ;
 struct bpf_program* FUNC_10 (struct bpf_object*,char const*) ;
 int FUNC_11 (char const*,int ,struct bpf_object**,int*) ;
 struct perf_buffer* FUNC_12 (struct bpf_program*,int,int ) ;
 int VAR_2 ;
 int FUNC_13 () ;
 int VAR_3 ;
 int FUNC_14 (struct perf_buffer*) ;
 struct perf_buffer* FUNC_15 (int ,int,struct perf_buffer_opts*) ;
 int FUNC_16 (struct perf_buffer*,int) ;
 int FUNC_17 () ;
 int FUNC_18 (int ,int,int *) ;
 int FUNC_19 (int) ;

void FUNC_20(void)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8 = 0;
 const char *VAR_9 = "kprobe/sys_nanosleep";
 const char *VAR_10 = "./test_perf_buffer.o";
 struct perf_buffer_opts VAR_11 = {};
 struct bpf_map *VAR_12;
 cpu_set_t VAR_13, VAR_14;
 struct bpf_program *VAR_15;
 struct bpf_object *VAR_16;
 struct perf_buffer *VAR_17;
 struct bpf_link *VAR_18;

 VAR_6 = FUNC_13();
 if (FUNC_0(VAR_6 < 0, "nr_cpus", "err %d\n", VAR_6))
  return;


 VAR_4 = FUNC_11(VAR_10, VAR_0, &VAR_16, &VAR_5);
 if (FUNC_0(VAR_4, "obj_load", "err %d errno %d\n", VAR_4, VAR_2))
  return;

 VAR_15 = FUNC_10(VAR_16, VAR_9);
 if (FUNC_0(!VAR_15, "find_probe", "prog '%s' not found\n", VAR_9))
  goto out_close;


 VAR_12 = FUNC_9(VAR_16, "perf_buf_map");
 if (FUNC_0(!VAR_12, "find_perf_buf_map", "not found\n"))
  goto out_close;


 VAR_18 = FUNC_12(VAR_15, 0 ,
       VAR_1);
 if (FUNC_0(FUNC_4(VAR_18), "attach_kprobe", "err %ld\n", FUNC_5(VAR_18)))
  goto out_close;


 VAR_11.sample_cb = VAR_3;
 VAR_11.ctx = &VAR_14;
 VAR_17 = FUNC_15(FUNC_7(VAR_12), 1, &VAR_11);
 if (FUNC_0(FUNC_4(VAR_17), "perf_buf__new", "err %ld\n", FUNC_5(VAR_17)))
  goto out_detach;


 FUNC_3(&VAR_14);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_3(&VAR_13);
  FUNC_2(VAR_7, &VAR_13);

  VAR_4 = FUNC_18(FUNC_17(), sizeof(VAR_13),
          &VAR_13);
  if (VAR_4 && FUNC_0(VAR_4, "set_affinity", "cpu #%d, err %d\n",
     VAR_7, VAR_4))
   goto out_detach;

  FUNC_19(1);
 }


 VAR_4 = FUNC_16(VAR_17, 100);
 if (FUNC_0(VAR_4 < 0, "perf_buffer__poll", "err %d\n", VAR_4))
  goto out_free_pb;

 if (FUNC_0(FUNC_1(&VAR_14) != VAR_6, "seen_cpu_cnt",
    "expect %d, seen %d\n", VAR_6, FUNC_1(&VAR_14)))
  goto out_free_pb;

out_free_pb:
 FUNC_14(VAR_17);
out_detach:
 FUNC_6(VAR_18);
out_close:
 FUNC_8(VAR_16);
}
