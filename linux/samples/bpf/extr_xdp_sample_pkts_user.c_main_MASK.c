
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
struct perf_buffer_opts {int sample_cb; } ;
struct bpf_prog_load_attr {char* file; int prog_type; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bpf_map*) ;
 struct bpf_map* FUNC_2 (int *,struct bpf_object*) ;
 scalar_t__ FUNC_3 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_4 (scalar_t__,int,char*) ;
 int VAR_7 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int,char**,char const*) ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int,int,struct perf_buffer_opts*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (char*) ;
 int VAR_12 ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (int ,struct rlimit*) ;
 int VAR_13 ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,int,char*,char*) ;
 int VAR_14 ;
 char* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char*,int *,int ) ;
 int FUNC_19 (int ) ;
 int VAR_15 ;

int FUNC_20(int VAR_16, char **VAR_17)
{
 struct rlimit VAR_18 = {VAR_2, VAR_2};
 struct bpf_prog_load_attr VAR_19 = {
  .prog_type = VAR_0,
 };
 struct perf_buffer_opts VAR_20 = {};
 const char *VAR_21 = "F";
 int VAR_22, VAR_23, VAR_24;
 struct bpf_object *VAR_25;
 struct bpf_map *VAR_26;
 char VAR_27[256];
 int VAR_28, VAR_29;

 while ((VAR_24 = FUNC_6(VAR_16, VAR_17, VAR_21)) != -1) {
  switch (VAR_24) {
  case 'F':
   VAR_15 &= ~VAR_6;
   break;
  default:
   FUNC_19(FUNC_0(VAR_17[0]));
   return 1;
  }
 }

 if (VAR_10 == VAR_16) {
  FUNC_19(FUNC_0(VAR_17[0]));
  return 1;
 }

 if (FUNC_14(VAR_1, &VAR_18)) {
  FUNC_12("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 FUNC_16(VAR_27, sizeof(VAR_27), "%s_kern.o", VAR_17[0]);
 VAR_19.file = VAR_27;

 if (FUNC_3(&VAR_19, &VAR_25, &VAR_22))
  return 1;

 if (!VAR_22) {
  FUNC_13("load_bpf_file: %s\n", FUNC_17(VAR_7));
  return 1;
 }

 VAR_26 = FUNC_2(((void*)0), VAR_25);
 if (!VAR_26) {
  FUNC_13("finding a map in obj file failed\n");
  return 1;
 }
 VAR_23 = FUNC_1(VAR_26);

 VAR_8 = FUNC_7(VAR_17[VAR_10]);
 if (!VAR_8)
  VAR_8 = FUNC_18(VAR_17[VAR_10], ((void*)0), 0);

 if (!VAR_8) {
  FUNC_5(VAR_14, "Invalid ifname\n");
  return 1;
 }
 VAR_9 = VAR_17[VAR_10];
 VAR_29 = FUNC_4(VAR_8, VAR_22, VAR_9);
 if (VAR_29)
  return VAR_29;

 if (FUNC_15(VAR_4, VAR_13) ||
     FUNC_15(VAR_3, VAR_13) ||
     FUNC_15(VAR_5, VAR_13)) {
  FUNC_12("signal");
  return 1;
 }

 VAR_20.sample_cb = VAR_12;
 VAR_11 = FUNC_10(VAR_23, 8, &VAR_20);
 VAR_29 = FUNC_9(VAR_11);
 if (VAR_29) {
  FUNC_12("perf_buffer setup failed");
  return 1;
 }

 while ((VAR_28 = FUNC_11(VAR_11, 1000)) >= 0) {
 }

 FUNC_8(0, VAR_4);
 return VAR_28;
}
