
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct isst_if_mbox_cmds {int cmd_count; TYPE_1__* mbox_cmd; int member_0; } ;
struct TYPE_4__ {scalar_t__ mmio_supported; } ;
struct TYPE_3__ {unsigned int logical_cpu; unsigned char command; unsigned char sub_command; unsigned int parameter; unsigned int req_data; unsigned int resp_data; } ;


 unsigned int FUNC_0 (int ) ;




 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned int,...) ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (int ,char*,unsigned int,unsigned char,unsigned char,unsigned int,unsigned int) ;
 int FUNC_5 (int,int ,struct isst_if_mbox_cmds*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_6 (unsigned int,int ,int,unsigned int*) ;
 int FUNC_7 (char const*,int ) ;
 int VAR_8 ;
 int FUNC_8 (char*) ;

int FUNC_9(unsigned int VAR_9, unsigned char VAR_10,
      unsigned char VAR_11, unsigned int VAR_12,
      unsigned int VAR_13, unsigned int *VAR_14)
{
 const char *VAR_15 = "/dev/isst_interface";
 int VAR_16;
 struct isst_if_mbox_cmds VAR_17 = { 0 };

 FUNC_2(
  "mbox_send: cpu:%d command:%x sub_command:%x parameter:%x req_data:%x\n",
  VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

 if (VAR_7.mmio_supported && VAR_10 == VAR_0) {
  unsigned int VAR_18;
  int VAR_19 = 0;
  int VAR_20, VAR_21, VAR_22 = 0;

  FUNC_2("CPU %d\n", VAR_9);

  if (VAR_12 & FUNC_0(VAR_2)) {
   VAR_18 = VAR_13;
   VAR_19 = 1;
  }

  switch (VAR_11) {
  case 129:
   VAR_21 = VAR_12 & 0xff;
   VAR_22 = FUNC_6(
    VAR_9, VAR_6 + VAR_21 * 4, VAR_19,
    &VAR_18);
   if (!VAR_22 && !VAR_19)
    *VAR_14 = VAR_18;
   break;
  case 131:
   VAR_20 = VAR_12 & 0x03;
   VAR_22 = FUNC_6(
    VAR_9, VAR_4 + VAR_20 * 4, VAR_19,
    &VAR_18);
   if (!VAR_22 && !VAR_19)
    *VAR_14 = VAR_18;
   break;
  case 130:
   VAR_22 = FUNC_6(VAR_9, VAR_5,
           VAR_19, &VAR_18);
   if (!VAR_22 && !VAR_19)
    *VAR_14 = VAR_18;
   break;
  case 128:
   break;
  default:
   break;
  }
  return VAR_22;
 }

 VAR_17.cmd_count = 1;
 VAR_17.mbox_cmd[0].logical_cpu = VAR_9;
 VAR_17.mbox_cmd[0].command = VAR_10;
 VAR_17.mbox_cmd[0].sub_command = VAR_11;
 VAR_17.mbox_cmd[0].parameter = VAR_12;
 VAR_17.mbox_cmd[0].req_data = VAR_13;

 VAR_16 = FUNC_7(VAR_15, VAR_3);
 if (VAR_16 < 0)
  FUNC_3(-1, "%s open failed", VAR_15);

 if (FUNC_5(VAR_16, VAR_1, &VAR_17) == -1) {
  FUNC_8("ISST_IF_MBOX_COMMAND");
  FUNC_4(VAR_8,
   "Error: mbox_cmd cpu:%d command:%hhx sub_command:%hhx parameter:%x req_data:%x\n",
   VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 } else {
  *VAR_14 = VAR_17.mbox_cmd[0].resp_data;
  FUNC_2(
   "mbox_cmd response: cpu:%d command:%x sub_command:%x parameter:%x req_data:%x resp:%x\n",
   VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, *VAR_14);
 }

 FUNC_1(VAR_16);

 return 0;
}
