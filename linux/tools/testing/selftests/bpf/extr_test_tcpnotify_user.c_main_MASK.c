
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpnotify_globals {int ncalls; int member_0; } ;
struct perf_buffer_opts {int sample_cb; } ;
struct perf_buffer {int dummy; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
typedef int cpu_set_t ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct perf_buffer*) ;
 int FUNC_3 (struct perf_buffer*) ;
 int VAR_3 ;
 int FUNC_4 (struct bpf_map*) ;
 int FUNC_5 (int ,int *,struct tcpnotify_globals*) ;
 struct bpf_map* FUNC_6 (struct bpf_object*,char*) ;
 int FUNC_7 (int,int,int ,int ) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (char const*,int ,struct bpf_object**,int*) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (char const*) ;
 int FUNC_14 (struct perf_buffer*) ;
 struct perf_buffer* FUNC_15 (int ,int,struct perf_buffer_opts*) ;
 int VAR_6 ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (int *,int *,int ,struct perf_buffer*) ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 (int) ;
 int FUNC_22 (char*,char*,int) ;
 char* FUNC_23 (int ) ;
 int FUNC_24 (char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_25 (struct tcpnotify_globals*) ;

int FUNC_26(int VAR_9, char **VAR_10)
{
 const char *VAR_11 = "test_tcpnotify_kern.o";
 struct bpf_map *VAR_12, *VAR_13;
 struct perf_buffer_opts VAR_14 = {};
 struct tcpnotify_globals VAR_15 = {0};
 struct perf_buffer *VAR_16 = ((void*)0);
 const char *VAR_17 = "/foo";
 int VAR_18, VAR_19, VAR_20 = -1;
 int VAR_21 = VAR_2;
 struct bpf_object *VAR_22;
 char VAR_23[80];
 cpu_set_t VAR_24;
 __u32 VAR_25 = 0;

 FUNC_1(&VAR_24);
 FUNC_0(0, &VAR_24);
 FUNC_19(FUNC_18(), sizeof(cpu_set_t), &VAR_24);

 if (FUNC_20())
  goto err;

 VAR_20 = FUNC_12(VAR_17);
 if (VAR_20 < 0)
  goto err;

 if (FUNC_13(VAR_17))
  goto err;

 if (FUNC_9(VAR_11, VAR_1, &VAR_22, &VAR_18)) {
  FUNC_16("FAILED: load_bpf_file failed for: %s\n", VAR_11);
  goto err;
 }

 VAR_19 = FUNC_7(VAR_18, VAR_20, VAR_0, 0);
 if (VAR_19) {
  FUNC_16("FAILED: bpf_prog_attach: %d (%s)\n",
         VAR_21, FUNC_23(VAR_5));
  goto err;
 }

 VAR_12 = FUNC_6(VAR_22, "perf_event_map");
 if (!VAR_12) {
  FUNC_16("FAIL:map '%s' not found\n", "perf_event_map");
  goto err;
 }

 VAR_13 = FUNC_6(VAR_22, "global_map");
 if (!VAR_13) {
  FUNC_16("FAIL:map '%s' not found\n", "global_map");
  return -1;
 }

 VAR_14.sample_cb = VAR_4;
 VAR_16 = FUNC_15(FUNC_4(VAR_12), 8, &VAR_14);
 if (FUNC_2(VAR_16))
  goto err;

 FUNC_17(&VAR_8, ((void*)0), VAR_6, VAR_16);

 FUNC_22(VAR_23,
  "iptables -A INPUT -p tcp --dport %d -j DROP",
  VAR_3);
 FUNC_24(VAR_23);

 FUNC_22(VAR_23,
  "nc 127.0.0.1 %d < /etc/passwd > /dev/null 2>&1 ",
  VAR_3);
 FUNC_24(VAR_23);

 FUNC_22(VAR_23,
  "iptables -D INPUT -p tcp --dport %d -j DROP",
  VAR_3);
 FUNC_24(VAR_23);

 VAR_19 = FUNC_5(FUNC_4(VAR_13), &VAR_25, &VAR_15);
 if (VAR_19 != 0) {
  FUNC_16("FAILED: bpf_map_lookup_elem returns %d\n", VAR_19);
  goto err;
 }

 FUNC_21(10);

 if (FUNC_25(&VAR_15)) {
  FUNC_16("FAILED: Wrong stats Expected %d calls, got %d\n",
   VAR_15.ncalls, VAR_7);
  goto err;
 }

 FUNC_16("PASSED!\n");
 VAR_21 = 0;
err:
 FUNC_8(VAR_20, VAR_0);
 FUNC_11(VAR_20);
 FUNC_10();
 if (!FUNC_3(VAR_16))
  FUNC_14(VAR_16);
 return VAR_21;
}
