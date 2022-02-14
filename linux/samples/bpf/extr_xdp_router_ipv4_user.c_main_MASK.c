
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int member_1; int member_0; } ;
struct bpf_prog_load_attr {char* file; int prog_type; } ;
struct bpf_prog_info {int id; } ;
struct bpf_object {int dummy; } ;
typedef int info ;
typedef int filename ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct bpf_prog_info*,int*) ;
 scalar_t__ FUNC_2 (struct bpf_object*,char*) ;
 scalar_t__ FUNC_3 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 scalar_t__ FUNC_5 (int,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char**,char const*) ;
 int FUNC_9 (char*) ;
 int* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (struct bpf_prog_info*,int ,int) ;
 scalar_t__ FUNC_11 () ;
 int VAR_15 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 int* VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_14 (int ,struct rlimit*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (char*,int,char*,char*) ;
 char* FUNC_17 (int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_18 (int ) ;

int FUNC_19(int VAR_20, char **VAR_21)
{
 struct rlimit VAR_22 = {VAR_3, VAR_3};
 struct bpf_prog_load_attr VAR_23 = {
  .prog_type = VAR_1,
 };
 struct bpf_prog_info VAR_24 = {};
 __u32 VAR_25 = sizeof(VAR_24);
 const char *VAR_26 = "SF";
 struct bpf_object *VAR_27;
 char VAR_28[256];
 char **VAR_29;
 int VAR_30, VAR_31;
 int VAR_32, VAR_33 = 1;

 FUNC_16(VAR_28, sizeof(VAR_28), "%s_kern.o", VAR_21[0]);
 VAR_23.file = VAR_28;

 VAR_18 = VAR_20 - 1;
 VAR_29 = (VAR_21 + 1);

 while ((VAR_31 = FUNC_8(VAR_20, VAR_21, VAR_26)) != -1) {
  switch (VAR_31) {
  case 'S':
   VAR_11 |= VAR_6;
   VAR_18--;
   VAR_29++;
   break;
  case 'F':
   VAR_11 &= ~VAR_7;
   VAR_18--;
   VAR_29++;
   break;
  default:
   FUNC_18(FUNC_0(VAR_21[0]));
   return 1;
  }
 }

 if (VAR_15 == VAR_20) {
  FUNC_18(FUNC_0(VAR_21[0]));
  return 1;
 }

 if (FUNC_14(VAR_2, &VAR_22)) {
  FUNC_12("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 if (FUNC_3(&VAR_23, &VAR_27, &VAR_30))
  return 1;

 FUNC_13("\n**************loading bpf file*********************\n\n\n");
 if (!VAR_30) {
  FUNC_13("bpf_prog_load_xattr: %s\n", FUNC_17(VAR_9));
  return 1;
 }

 VAR_14 = FUNC_2(VAR_27, "lpm_map");
 VAR_17 = FUNC_2(VAR_27, "rxcnt");
 VAR_8 = FUNC_2(VAR_27, "arp_table");
 VAR_10 = FUNC_2(VAR_27,
            "exact_match");
 VAR_19 = FUNC_2(VAR_27, "tx_port");
 if (VAR_14 < 0 || VAR_17 < 0 || VAR_8 < 0 ||
     VAR_10 < 0 || VAR_19 < 0) {
  FUNC_13("bpf_object__find_map_fd_by_name failed\n");
  return 1;
 }

 VAR_12 = (int *)FUNC_5(VAR_18, sizeof(int *));
 for (VAR_33 = 0; VAR_33 < VAR_18; VAR_33++) {
  VAR_12[VAR_33] = FUNC_9(VAR_29[VAR_33]);
  if (!VAR_12[VAR_33]) {
   FUNC_13("Couldn't translate interface name: %s",
          FUNC_17(VAR_9));
   return 1;
  }
 }
 VAR_16 = (__u32 *)FUNC_5(VAR_18, sizeof(__u32 *));
 for (VAR_33 = 0; VAR_33 < VAR_18; VAR_33++) {
  if (FUNC_4(VAR_12[VAR_33], VAR_30, VAR_11) < 0) {
   FUNC_13("link set xdp fd failed\n");
   int VAR_34 = VAR_33;

   for (VAR_33 = 0; VAR_33 < VAR_34; VAR_33++)
    FUNC_4(VAR_12[VAR_33], -1, VAR_11);

   return 1;
  }
  VAR_32 = FUNC_1(VAR_30, &VAR_24, &VAR_25);
  if (VAR_32) {
   FUNC_13("can't get prog info - %s\n", FUNC_17(VAR_9));
   return VAR_32;
  }
  VAR_16[VAR_33] = VAR_24.id;
  FUNC_10(&VAR_24, 0, sizeof(VAR_24));
  FUNC_13("Attached to %d\n", VAR_12[VAR_33]);
 }
 FUNC_15(VAR_4, VAR_13);
 FUNC_15(VAR_5, VAR_13);

 FUNC_13("*******************ROUTE TABLE*************************\n\n\n");
 FUNC_7(VAR_0);
 FUNC_13("*******************ARP TABLE***************************\n\n\n");
 FUNC_6(VAR_0);
 if (FUNC_11() < 0) {
  FUNC_13("Error in receiving route update");
  return 1;
 }

 return 0;
}
