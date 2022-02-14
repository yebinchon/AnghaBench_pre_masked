
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* v6; } ;
struct vip {unsigned short family; int dport; void* protocol; TYPE_1__ daddr; } ;
struct rlimit {int member_1; int member_0; } ;
struct TYPE_6__ {unsigned int* v6; } ;
struct TYPE_5__ {unsigned int* v6; } ;
struct iptnl_info {unsigned short family; scalar_t__ dmac; TYPE_3__ daddr; TYPE_2__ saddr; } ;
struct ether_addr {int dummy; } ;
struct bpf_prog_load_attr {char* file; int prog_type; } ;
struct bpf_prog_info {int id; } ;
struct bpf_object {int dummy; } ;
typedef int info ;
typedef int filename ;
typedef int __u32 ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,struct vip*,struct iptnl_info*,int ) ;
 int FUNC_2 (int,struct bpf_prog_info*,int*) ;
 void* FUNC_3 (struct bpf_object*,char*) ;
 scalar_t__ FUNC_4 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 scalar_t__ FUNC_5 (void*,int,int ) ;
 int VAR_11 ;
 int FUNC_6 (char*,struct ether_addr*) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int,char**,char const*) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (char*) ;
 void* VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 void* FUNC_11 (char*,unsigned int*) ;
 int FUNC_12 (char*,int*,int*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (char*,...) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_16 (int ,struct rlimit*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (char*,int,char*,char*) ;
 int VAR_17 ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (char*) ;
 int VAR_18 ;

int FUNC_22(int VAR_19, char **VAR_20)
{
 struct bpf_prog_load_attr VAR_21 = {
  .prog_type = VAR_2,
 };
 struct rlimit VAR_22 = {VAR_5, VAR_5};
 int VAR_23 = 0, VAR_24 = 0, VAR_25;
 const char *VAR_26 = "i:a:p:s:d:m:T:P:FSNh";
 unsigned char VAR_27[256] = {};
 struct bpf_prog_info VAR_28 = {};
 __u32 VAR_29 = sizeof(VAR_28);
 unsigned int VAR_30 = 0;
 struct iptnl_info VAR_31 = {};
 struct bpf_object *VAR_32;
 struct vip VAR_33 = {};
 char VAR_34[256];
 int VAR_35, VAR_36;
 int VAR_37, VAR_38;

 VAR_31.family = VAR_0;
 VAR_33.protocol = VAR_3;

 for (VAR_37 = 0; VAR_37 < FUNC_20(VAR_26); VAR_37++)
  if (VAR_26[VAR_37] != 'h' && 'a' <= VAR_26[VAR_37] && VAR_26[VAR_37] <= 'z')
   VAR_27[(unsigned char)VAR_26[VAR_37]] = 1;

 while ((VAR_35 = FUNC_8(VAR_19, VAR_20, VAR_26)) != -1) {
  unsigned short VAR_39;
  unsigned int *VAR_40;

  switch (VAR_35) {
  case 'i':
   VAR_12 = FUNC_10(VAR_14);
   if (!VAR_12)
    VAR_12 = FUNC_0(VAR_14);
   break;
  case 'a':
   VAR_33.family = FUNC_11(VAR_14, VAR_33.daddr.v6);
   if (VAR_33.family == VAR_0)
    return 1;
   break;
  case 'p':
   if (FUNC_12(VAR_14, &VAR_23, &VAR_24))
    return 1;
   break;
  case 'P':
   VAR_33.protocol = FUNC_0(VAR_14);
   break;
  case 's':
  case 'd':
   if (VAR_35 == 's')
    VAR_40 = VAR_31.saddr.v6;
   else
    VAR_40 = VAR_31.daddr.v6;

   VAR_39 = FUNC_11(VAR_14, VAR_40);
   if (VAR_39 == VAR_0)
    return 1;
   if (VAR_31.family == VAR_0) {
    VAR_31.family = VAR_39;
   } else if (VAR_31.family != VAR_39) {
    FUNC_7(VAR_17,
     "The IP version of the src and dst addresses used in the IP encapsulation does not match\n");
    return 1;
   }
   break;
  case 'm':
   if (!FUNC_6(VAR_14,
       (struct ether_addr *)VAR_31.dmac)) {
    FUNC_7(VAR_17, "Invalid mac address:%s\n",
     VAR_14);
    return 1;
   }
   break;
  case 'T':
   VAR_30 = FUNC_0(VAR_14);
   break;
  case 'S':
   VAR_18 |= VAR_9;
   break;
  case 'N':
   VAR_18 |= VAR_8;
   break;
  case 'F':
   VAR_18 &= ~VAR_10;
   break;
  default:
   FUNC_21(VAR_20[0]);
   return 1;
  }
  VAR_27[VAR_35] = 0;
 }

 for (VAR_37 = 0; VAR_37 < FUNC_20(VAR_26); VAR_37++) {
  if (VAR_27[(unsigned int)VAR_26[VAR_37]]) {
   FUNC_7(VAR_17, "Missing argument -%c\n", VAR_26[VAR_37]);
   FUNC_21(VAR_20[0]);
   return 1;
  }
 }

 if (FUNC_16(VAR_4, &VAR_22)) {
  FUNC_13("setrlimit(RLIMIT_MEMLOCK, RLIM_INFINITY)");
  return 1;
 }

 if (!VAR_12) {
  FUNC_7(VAR_17, "Invalid ifname\n");
  return 1;
 }

 FUNC_18(VAR_34, sizeof(VAR_34), "%s_kern.o", VAR_20[0]);
 VAR_21.file = VAR_34;

 if (FUNC_4(&VAR_21, &VAR_32, &VAR_36))
  return 1;

 if (!VAR_36) {
  FUNC_15("load_bpf_file: %s\n", FUNC_19(VAR_11));
  return 1;
 }

 VAR_16 = FUNC_3(VAR_32, "rxcnt");
 VAR_25 = FUNC_3(VAR_32, "vip2tnl");
 if (VAR_25 < 0 || VAR_16 < 0) {
  FUNC_15("bpf_object__find_map_fd_by_name failed\n");
  return 1;
 }

 FUNC_17(VAR_6, VAR_13);
 FUNC_17(VAR_7, VAR_13);

 while (VAR_23 <= VAR_24) {
  VAR_33.dport = FUNC_9(VAR_23++);
  if (FUNC_1(VAR_25, &VAR_33, &VAR_31,
     VAR_1)) {
   FUNC_13("bpf_map_update_elem(&vip2tnl)");
   return 1;
  }
 }

 if (FUNC_5(VAR_12, VAR_36, VAR_18) < 0) {
  FUNC_15("link set xdp fd failed\n");
  return 1;
 }

 VAR_38 = FUNC_2(VAR_36, &VAR_28, &VAR_29);
 if (VAR_38) {
  FUNC_15("can't get prog info - %s\n", FUNC_19(VAR_11));
  return VAR_38;
 }
 VAR_15 = VAR_28.id;

 FUNC_14(VAR_30);

 FUNC_5(VAR_12, -1, VAR_18);

 return 0;
}
