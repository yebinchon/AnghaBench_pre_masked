
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct rlimit {int member_1; int member_0; } ;
struct pinginfo {int count; int seq; int member_0; } ;
struct bpf_program {int dummy; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
struct addrinfo {int ai_addr; int ai_family; } ;
typedef int rin ;
typedef int filename ;
typedef int cmd ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bpf_map*) ;
 struct bpf_map* FUNC_3 (int *,struct bpf_object*) ;
 scalar_t__ FUNC_4 (int,int*,struct pinginfo*,int ) ;
 struct bpf_program* FUNC_5 (struct bpf_object*,char*) ;
 scalar_t__ FUNC_6 (char*,int ,struct bpf_object**,int*) ;
 int FUNC_7 (struct bpf_program*) ;
 scalar_t__ FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_11 ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (struct addrinfo*) ;
 int FUNC_13 (int,int,int) ;
 scalar_t__ FUNC_14 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_15 (int,char**,char const*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 int VAR_12 ;
 int FUNC_18 (struct sockaddr_in*,int ,int) ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,...) ;
 scalar_t__ FUNC_21 (int ,struct rlimit*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int (*) (int )) ;
 int FUNC_24 (int) ;
 int FUNC_25 (char*,int,char*,...) ;
 int VAR_15 ;
 char* FUNC_26 (int ) ;
 int FUNC_27 (char*) ;
 int VAR_16 ;

int FUNC_28(int VAR_17, char **VAR_18)
{
 __u32 VAR_19 = VAR_9 | VAR_10;
 struct addrinfo *VAR_20, VAR_21 = { .ai_family = VAR_0 };
 struct rlimit VAR_22 = {VAR_4, VAR_4};
 __u16 VAR_23 = VAR_7;
 struct pinginfo VAR_24 = { 0 };
 const char *VAR_25 = "c:I:NsS";
 struct bpf_program *VAR_26;
 int VAR_27 = -1, VAR_28 = -1;
 struct sockaddr_in VAR_29;
 struct bpf_object *VAR_30;
 struct bpf_map *VAR_31;
 char *VAR_32 = ((void*)0);
 char VAR_33[256];
 int VAR_34, VAR_35 = 1;
 __u32 VAR_36 = 0;
 int VAR_37 = 0;
 char VAR_38[256];

 while ((VAR_34 = FUNC_15(VAR_17, VAR_18, VAR_25)) != -1) {
  switch (VAR_34) {
  case 'c':
   VAR_23 = FUNC_0(VAR_13);
   if (VAR_23 < 1 || VAR_23 > VAR_8) {
    FUNC_11(VAR_15,
     "min count is 1, max count is %d\n",
     VAR_8);
    return 1;
   }
   break;
  case 'I':
   VAR_32 = VAR_13;
   VAR_12 = FUNC_17(VAR_32);
   if (!VAR_12) {
    FUNC_11(VAR_15, "Could not get interface %s\n",
     VAR_32);
    return 1;
   }
   break;
  case 'N':
   VAR_16 |= VAR_9;
   break;
  case 's':

   VAR_37 = 1;
   break;
  case 'S':
   VAR_16 |= VAR_10;
   break;
  default:
   FUNC_22(FUNC_1(VAR_18[0]));
   return 1;
  }
 }

 if (!VAR_32) {
  FUNC_22(FUNC_1(VAR_18[0]));
  return 1;
 }
 if (!VAR_37 && VAR_14 == VAR_17) {
  FUNC_22(FUNC_1(VAR_18[0]));
  return 1;
 }

 if ((VAR_16 & VAR_19) == VAR_19) {
  FUNC_11(VAR_15, "-N or -S can be specified, not both.\n");
  FUNC_22(FUNC_1(VAR_18[0]));
  return 1;
 }

 if (!VAR_37) {

  if (FUNC_14(VAR_18[VAR_14], ((void*)0), &VAR_21, &VAR_20) || !VAR_20) {
   FUNC_11(VAR_15, "Could not resolve %s\n", VAR_18[VAR_14]);
   return 1;
  }
  FUNC_18(&VAR_29, VAR_20->ai_addr, sizeof(VAR_29));
  VAR_36 = VAR_29.sin_addr.s_addr;
  FUNC_12(VAR_20);
 }

 if (FUNC_21(VAR_3, &VAR_22)) {
  FUNC_19("setrlimit(RLIMIT_MEMLOCK)");
  return 1;
 }

 FUNC_25(VAR_33, sizeof(VAR_33), "%s_kern.o", VAR_18[0]);

 if (FUNC_6(VAR_33, VAR_2, &VAR_30, &VAR_27)) {
  FUNC_11(VAR_15, "load of %s failed\n", VAR_33);
  return 1;
 }

 VAR_26 = FUNC_5(VAR_30,
            VAR_37 ? "xdpserver" :
              "xdpclient");
 if (VAR_26)
  VAR_27 = FUNC_7(VAR_26);
 if (!VAR_26 || VAR_27 < 0) {
  FUNC_11(VAR_15, "could not find xdping program");
  return 1;
 }

 VAR_31 = FUNC_3(((void*)0), VAR_30);
 if (VAR_31)
  VAR_28 = FUNC_2(VAR_31);
 if (!VAR_31 || VAR_28 < 0) {
  FUNC_11(VAR_15, "Could not find ping map");
  goto done;
 }

 FUNC_23(VAR_5, FUNC_9);
 FUNC_23(VAR_6, FUNC_9);

 FUNC_20("Setting up XDP for %s, please wait...\n", VAR_32);

 FUNC_20("XDP setup disrupts network connectivity, hit Ctrl+C to quit\n");

 if (FUNC_8(VAR_12, VAR_27, VAR_16) < 0) {
  FUNC_11(VAR_15, "Link set xdp fd failed for %s\n", VAR_32);
  goto done;
 }

 if (VAR_37) {
  FUNC_10(VAR_27);
  FUNC_10(VAR_28);
  FUNC_20("Running server on %s; press Ctrl+C to exit...\n",
         VAR_32);
  do { } while (1);
 }







 VAR_24.seq = FUNC_16(VAR_23);
 VAR_24.count = VAR_23;

 if (FUNC_4(VAR_28, &VAR_36, &VAR_24, VAR_1)) {
  FUNC_11(VAR_15, "could not communicate with BPF map: %s\n",
   FUNC_26(VAR_11));
  FUNC_9(0);
  goto done;
 }


 FUNC_24(10);

 FUNC_25(VAR_38, sizeof(VAR_38), "ping -c %d -I %s %s",
   VAR_23, VAR_32, VAR_18[VAR_14]);

 FUNC_20("\nNormal ping RTT data\n");
 FUNC_20("[Ignore final RTT; it is distorted by XDP using the reply]\n");

 VAR_35 = FUNC_27(VAR_38);

 if (!VAR_35)
  VAR_35 = FUNC_13(VAR_28, VAR_23, VAR_36);

 FUNC_9(0);

done:
 if (VAR_27 > 0)
  FUNC_10(VAR_27);
 if (VAR_28 > 0)
  FUNC_10(VAR_28);

 return VAR_35;
}
