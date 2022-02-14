
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pollfd {int fd; scalar_t__ revents; int events; } ;
struct option {char* member_0; char member_3; int member_2; int const member_1; } ;
struct TYPE_2__ {int operation; } ;
struct hv_vss_msg {int error; TYPE_1__ vss_hdr; } ;
typedef int kernel_modver ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;

 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*,struct option*,int*) ;
 int FUNC_4 () ;

 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (struct pollfd*,int,int) ;
 int FUNC_8 (char**) ;
 int FUNC_9 (int,struct hv_vss_msg*,int) ;
 char* FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int const) ;
 int FUNC_13 (int,struct hv_vss_msg*,int) ;

int FUNC_14(int VAR_11, char *VAR_12[])
{
 int VAR_13, VAR_14;
 int VAR_15;
 struct pollfd VAR_16;
 int VAR_17;
 struct hv_vss_msg VAR_18[1];
 int VAR_19 = 1, VAR_20 = 0, VAR_21;
 int VAR_22 = 1;
 __u32 VAR_23;

 static struct option VAR_24[] = {
  {"help", 128, 0, 'h' },
  {"no-daemon", 128, 0, 'n' },
  {0, 0, 0, 0 }
 };

 while ((VAR_21 = FUNC_3(VAR_11, VAR_12, "hn", VAR_24,
      &VAR_20)) != -1) {
  switch (VAR_21) {
  case 'n':
   VAR_19 = 0;
   break;
  case 'h':
   FUNC_8(VAR_12);
   FUNC_2(0);
  default:
   FUNC_8(VAR_12);
   FUNC_2(VAR_1);
  }
 }

 if (VAR_19 && FUNC_1(1, 0))
  return 1;

 FUNC_6("Hyper-V VSS", 0, VAR_6);
 FUNC_11(VAR_5, "VSS starting; pid is:%d", FUNC_4());

 VAR_13 = FUNC_5("/dev/vmbus/hv_vss", VAR_7);
 if (VAR_13 < 0) {
  FUNC_11(VAR_4, "open /dev/vmbus/hv_vss failed; error: %d %s",
         VAR_10, FUNC_10(VAR_10));
  FUNC_2(VAR_1);
 }



 VAR_18->vss_hdr.operation = VAR_9;

 VAR_14 = FUNC_13(VAR_13, VAR_18, sizeof(struct hv_vss_msg));
 if (VAR_14 < 0) {
  FUNC_11(VAR_4, "registration to kernel failed; error: %d %s",
         VAR_10, FUNC_10(VAR_10));
  FUNC_0(VAR_13);
  FUNC_2(VAR_1);
 }

 VAR_16.fd = VAR_13;

 while (1) {
  VAR_16.events = VAR_8;
  VAR_16.revents = 0;

  if (FUNC_7(&VAR_16, 1, -1) < 0) {
   FUNC_11(VAR_4, "poll failed; error:%d %s", VAR_10, FUNC_10(VAR_10));
   if (VAR_10 == VAR_0) {
    FUNC_0(VAR_13);
    FUNC_2(VAR_1);
   }
   else
    continue;
  }

  VAR_14 = FUNC_9(VAR_13, VAR_18, sizeof(struct hv_vss_msg));

  if (VAR_22) {
   if (VAR_14 != sizeof(VAR_23)) {
    FUNC_11(VAR_4, "invalid version negotiation");
    FUNC_2(VAR_1);
   }
   VAR_23 = *(__u32 *)VAR_18;
   VAR_22 = 0;
   FUNC_11(VAR_5, "VSS: kernel module version: %d",
          VAR_23);
   continue;
  }

  if (VAR_14 != sizeof(struct hv_vss_msg)) {
   FUNC_11(VAR_4, "read failed; error:%d %s",
          VAR_10, FUNC_10(VAR_10));
   FUNC_0(VAR_13);
   return VAR_1;
  }

  VAR_17 = VAR_18->vss_hdr.operation;
  VAR_15 = VAR_3;

  switch (VAR_17) {
  case 131:
  case 129:
   VAR_15 = FUNC_12(VAR_17);
   FUNC_11(VAR_5, "VSS: op=%s: %s\n",
    VAR_17 == 131 ? "FREEZE" : "THAW",
    VAR_15 ? "failed" : "succeeded");

   if (VAR_15) {
    VAR_15 = VAR_2;
    FUNC_11(VAR_4, "op=%d failed!", VAR_17);
    FUNC_11(VAR_4, "report it with these files:");
    FUNC_11(VAR_4, "/etc/fstab and /proc/mounts");
   }
   break;
  case 130:
   FUNC_11(VAR_5, "VSS: op=CHECK HOT BACKUP\n");
   break;
  default:
   FUNC_11(VAR_4, "Illegal op:%d\n", VAR_17);
  }
  VAR_18->error = VAR_15;
  VAR_14 = FUNC_13(VAR_13, VAR_18, sizeof(struct hv_vss_msg));
  if (VAR_14 != sizeof(struct hv_vss_msg)) {
   FUNC_11(VAR_4, "write failed; error: %d %s", VAR_10,
          FUNC_10(VAR_10));

   if (VAR_17 == 131)
    FUNC_12(129);
  }
 }

 FUNC_0(VAR_13);
 FUNC_2(0);
}
