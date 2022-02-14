
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int testir2 ;
typedef int testir1 ;
struct pollfd {int fd; int events; } ;
struct input_event {scalar_t__ type; scalar_t__ code; int value; } ;
struct bpf_object {int dummy; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int ,struct bpf_object**,int*) ;
 int FUNC_3 (int,int ,int ,int*,int*,int*) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct pollfd*,int,int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,struct input_event*,int) ;
 int FUNC_8 (int,int*,int) ;

int FUNC_9(int VAR_12, char **VAR_13)
{
 struct bpf_object *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0x1dead;
 int VAR_20 = 0x20101;
 u32 VAR_21[10], VAR_22[10], VAR_23;

 if (VAR_12 != 3) {
  FUNC_6("Usage: %s /dev/lircN /dev/input/eventM\n", VAR_13[0]);
  return 2;
 }

 VAR_15 = FUNC_2("test_lirc_mode2_kern.o",
       VAR_1, &VAR_14, &VAR_17);
 if (VAR_15) {
  FUNC_6("Failed to load bpf program\n");
  return 1;
 }

 VAR_16 = FUNC_4(VAR_13[1], VAR_8 | VAR_6);
 if (VAR_16 == -1) {
  FUNC_6("failed to open lirc device %s: %m\n", VAR_13[1]);
  return 1;
 }


 VAR_15 = FUNC_1(VAR_17, VAR_16, VAR_0);
 if (VAR_15 != -1 || VAR_11 != VAR_2) {
  FUNC_6("bpf_prog_detach2 not attached should fail: %m\n");
  return 1;
 }

 VAR_18 = FUNC_4(VAR_13[2], VAR_7 | VAR_6);
 if (VAR_18 == -1) {
  FUNC_6("failed to open input device %s: %m\n", VAR_13[1]);
  return 1;
 }

 VAR_23 = 10;
 VAR_15 = FUNC_3(VAR_16, VAR_0, 0, VAR_22, VAR_21,
        &VAR_23);
 if (VAR_15) {
  FUNC_6("Failed to query bpf programs on lirc device: %m\n");
  return 1;
 }

 if (VAR_23 != 0) {
  FUNC_6("Expected nothing to be attached\n");
  return 1;
 }

 VAR_15 = FUNC_0(VAR_17, VAR_16, VAR_0, 0);
 if (VAR_15) {
  FUNC_6("Failed to attach bpf to lirc device: %m\n");
  return 1;
 }


 VAR_15 = FUNC_8(VAR_16, &VAR_19, sizeof(VAR_19));
 if (VAR_15 != sizeof(VAR_19)) {
  FUNC_6("Failed to send test IR message: %m\n");
  return 1;
 }

 struct pollfd VAR_24 = { .fd = VAR_18, .events = VAR_9 };
 struct input_event VAR_25;

 for (;;) {
  FUNC_5(&VAR_24, 1, 100);


  VAR_15 = FUNC_7(VAR_18, &VAR_25, sizeof(VAR_25));
  if (VAR_15 != sizeof(VAR_25)) {
   FUNC_6("Failed to read decoded IR: %m\n");
   return 1;
  }

  if (VAR_25.type == VAR_3 && VAR_25.code == VAR_5 &&
      VAR_25.value == 0xdead) {
   break;
  }
 }


 VAR_15 = FUNC_8(VAR_16, &VAR_20, sizeof(VAR_20));
 if (VAR_15 != sizeof(VAR_20)) {
  FUNC_6("Failed to send test IR message: %m\n");
  return 1;
 }

 for (;;) {
  FUNC_5(&VAR_24, 1, 100);


  VAR_15 = FUNC_7(VAR_18, &VAR_25, sizeof(VAR_25));
  if (VAR_15 != sizeof(VAR_25)) {
   FUNC_6("Failed to read decoded IR: %m\n");
   return 1;
  }

  if (VAR_25.type == VAR_4 && VAR_25.code == VAR_10 &&
      VAR_25.value == 1 ) {
   break;
  }
 }

 VAR_23 = 10;
 VAR_15 = FUNC_3(VAR_16, VAR_0, 0, VAR_22, VAR_21,
        &VAR_23);
 if (VAR_15) {
  FUNC_6("Failed to query bpf programs on lirc device: %m\n");
  return 1;
 }

 if (VAR_23 != 1) {
  FUNC_6("Expected one program to be attached\n");
  return 1;
 }


 VAR_15 = FUNC_1(VAR_17, VAR_16, VAR_0);
 if (VAR_15) {
  FUNC_6("bpf_prog_detach2: returned %m\n");
  return 1;
 }

 return 0;
}
