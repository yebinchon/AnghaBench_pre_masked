
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sof_ipc_fw_version {scalar_t__ abi_version; int time; int date; int build; int tag; int micro; int minor; int major; } ;
struct sof_ipc_fw_ready {int flags; struct sof_ipc_fw_version version; } ;
struct snd_sof_dev {int fw_version; int dev; struct sof_ipc_fw_ready fw_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ,int ,int ,char*,...) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,struct sof_ipc_fw_version*,int) ;

int FUNC_9(struct snd_sof_dev *VAR_10)
{
 struct sof_ipc_fw_ready *VAR_11 = &VAR_10->fw_ready;
 struct sof_ipc_fw_version *VAR_12 = &VAR_11->version;

 FUNC_6(VAR_10->dev,
   "Firmware info: version %d:%d:%d-%s\n", VAR_12->major, VAR_12->minor,
   VAR_12->micro, VAR_12->tag);
 FUNC_6(VAR_10->dev,
   "Firmware: ABI %d:%d:%d Kernel ABI %d:%d:%d\n",
   FUNC_2(VAR_12->abi_version),
   FUNC_3(VAR_12->abi_version),
   FUNC_4(VAR_12->abi_version),
   VAR_2, VAR_3, VAR_4);

 if (FUNC_1(VAR_5, VAR_12->abi_version)) {
  FUNC_5(VAR_10->dev, "error: incompatible FW ABI version\n");
  return -VAR_1;
 }

 if (VAR_12->abi_version > VAR_5) {
  if (!FUNC_0(VAR_0)) {
   FUNC_7(VAR_10->dev, "warn: FW ABI is more recent than kernel\n");
  } else {
   FUNC_5(VAR_10->dev, "error: FW ABI is more recent than kernel\n");
   return -VAR_1;
  }
 }

 if (VAR_11->flags & VAR_6) {
  FUNC_6(VAR_10->dev,
    "Firmware debug build %d on %s-%s - options:\n"
    " GDB: %s\n"
    " lock debug: %s\n"
    " lock vdebug: %s\n",
    VAR_12->build, VAR_12->date, VAR_12->time,
    (VAR_11->flags & VAR_7) ?
    "enabled" : "disabled",
    (VAR_11->flags & VAR_8) ?
    "enabled" : "disabled",
    (VAR_11->flags & VAR_9) ?
    "enabled" : "disabled");
 }


 FUNC_8(&VAR_10->fw_version, VAR_12, sizeof(*VAR_12));

 return 0;
}
