
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct bpf_object {int dummy; } ;
typedef int pid_t ;
typedef int __u64 ;
typedef scalar_t__ __u32 ;


 scalar_t__ FUNC_0 (int,char const*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,scalar_t__*,int*,int ) ;
 int FUNC_2 (struct bpf_object*) ;
 int FUNC_3 (struct bpf_object*,char*) ;
 int FUNC_4 (char const*,int,struct bpf_object**,int*) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int ,int) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct perf_event_attr*,int,int,int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int,char*,int) ;

__attribute__((used)) static void FUNC_17(struct perf_event_attr *VAR_7,
        int VAR_8,
        const char *VAR_9)
{
 int VAR_10 = -1, VAR_11, VAR_12, VAR_13, VAR_14;
 const char *VAR_15 = "./test_send_signal_kern.o";
 struct bpf_object *VAR_16 = ((void*)0);
 int VAR_17[2], VAR_18[2];
 __u32 VAR_19 = 0, VAR_20 = 0;
 char VAR_21[256];
 pid_t VAR_22;
 __u64 VAR_23;

 if (FUNC_0(FUNC_9(VAR_17), VAR_9,
    "pipe pipe_c2p error: %s\n", FUNC_13(VAR_4)))
  return;

 if (FUNC_0(FUNC_9(VAR_18), VAR_9,
    "pipe pipe_p2c error: %s\n", FUNC_13(VAR_4))) {
  FUNC_5(VAR_17[0]);
  FUNC_5(VAR_17[1]);
  return;
 }

 VAR_22 = FUNC_7();
 if (FUNC_0(VAR_22 < 0, VAR_9, "fork error: %s\n", FUNC_13(VAR_4))) {
  FUNC_5(VAR_17[0]);
  FUNC_5(VAR_17[1]);
  FUNC_5(VAR_18[0]);
  FUNC_5(VAR_18[1]);
  return;
 }

 if (VAR_22 == 0) {

  FUNC_11(VAR_2, VAR_5);

  FUNC_5(VAR_17[0]);
  FUNC_5(VAR_18[1]);


  FUNC_16(VAR_17[1], VAR_21, 1);


  FUNC_10(VAR_18[0], VAR_21, 1);


  FUNC_12(1);

  if (VAR_6)
   FUNC_16(VAR_17[1], "2", 1);
  else
   FUNC_16(VAR_17[1], "0", 1);


  FUNC_10(VAR_18[0], VAR_21, 1);

  FUNC_5(VAR_17[1]);
  FUNC_5(VAR_18[0]);
  FUNC_6(0);
 }

 FUNC_5(VAR_17[1]);
 FUNC_5(VAR_18[0]);

 VAR_10 = FUNC_4(VAR_15, VAR_8, &VAR_16, &VAR_12);
 if (FUNC_0(VAR_10 < 0, VAR_9, "bpf_prog_load error: %s\n",
    FUNC_13(VAR_4)))
  goto prog_load_failure;

 VAR_11 = FUNC_14(VAR_3, VAR_7, VAR_22, -1,
    -1 , 0 );
 if (FUNC_0(VAR_11 < 0, VAR_9, "perf_event_open error: %s\n",
    FUNC_13(VAR_4))) {
  VAR_10 = -1;
  goto close_prog;
 }

 VAR_10 = FUNC_8(VAR_11, VAR_0, 0);
 if (FUNC_0(VAR_10 < 0, VAR_9, "ioctl perf_event_ioc_enable error: %s\n",
    FUNC_13(VAR_4)))
  goto disable_pmu;

 VAR_10 = FUNC_8(VAR_11, VAR_1, VAR_12);
 if (FUNC_0(VAR_10 < 0, VAR_9, "ioctl perf_event_ioc_set_bpf error: %s\n",
    FUNC_13(VAR_4)))
  goto disable_pmu;

 VAR_10 = -1;
 VAR_13 = FUNC_3(VAR_16, "info_map");
 if (FUNC_0(VAR_13 < 0, VAR_9, "find map %s error\n", "info_map"))
  goto disable_pmu;

 VAR_14 = FUNC_3(VAR_16, "status_map");
 if (FUNC_0(VAR_14 < 0, VAR_9, "find map %s error\n", "status_map"))
  goto disable_pmu;


 FUNC_10(VAR_17[0], VAR_21, 1);


 VAR_19 = 0;
 VAR_23 = (((__u64)(VAR_2)) << 32) | VAR_22;
 FUNC_1(VAR_13, &VAR_19, &VAR_23, 0);


 FUNC_16(VAR_18[1], VAR_21, 1);


 VAR_10 = FUNC_10(VAR_17[0], VAR_21, 1);
 if (FUNC_0(VAR_10 < 0, VAR_9, "reading pipe error: %s\n", FUNC_13(VAR_4)))
  goto disable_pmu;
 if (FUNC_0(VAR_10 == 0, VAR_9, "reading pipe error: size 0\n")) {
  VAR_10 = -1;
  goto disable_pmu;
 }

 FUNC_0(VAR_21[0] != '2', VAR_9, "incorrect result\n");


 FUNC_16(VAR_18[1], VAR_21, 1);

disable_pmu:
 FUNC_5(VAR_11);
close_prog:
 FUNC_2(VAR_16);
prog_load_failure:
 FUNC_5(VAR_17[0]);
 FUNC_5(VAR_18[1]);
 FUNC_15(((void*)0));
}
