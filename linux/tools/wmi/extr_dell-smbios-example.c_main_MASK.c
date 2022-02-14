
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* input; int cmd_select; int cmd_class; } ;
struct dell_wmi_smbios_buffer {TYPE_1__ std; scalar_t__ length; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct dell_wmi_smbios_buffer*,int ) ;
 int FUNC_1 (struct dell_wmi_smbios_buffer*) ;
 struct dell_wmi_smbios_buffer* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,struct dell_wmi_smbios_buffer*) ;
 int FUNC_6 (struct dell_wmi_smbios_buffer*) ;
 int FUNC_7 (struct dell_wmi_smbios_buffer*) ;

int FUNC_8(void)
{
 struct dell_wmi_smbios_buffer *VAR_7;
 int VAR_8;
 __u64 VAR_9 = 0;

 VAR_8 = FUNC_4(&VAR_9);
 if (VAR_8 == VAR_4 || !VAR_9) {
  FUNC_3("Unable to read buffer size\n");
  goto out;
 }
 FUNC_3("Detected required buffer size %lld\n", VAR_9);

 VAR_7 = FUNC_2(VAR_9);
 if (VAR_7 == ((void*)0)) {
  FUNC_3("failed to alloc memory for ioctl\n");
  VAR_8 = -VAR_3;
  goto out;
 }
 VAR_7->length = VAR_9;


 VAR_7->std.cmd_class = VAR_2;
 VAR_7->std.cmd_select = VAR_6;
 VAR_7->std.input[0] = 2;
 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8) {
  FUNC_3("smbios ioctl failed: %d\n", VAR_8);
  VAR_8 = VAR_4;
  goto out;
 }
 FUNC_7(VAR_7);


 VAR_8 = FUNC_5(VAR_1, VAR_7);
 FUNC_3("UEFI Capsule enabled token is: %d\n", VAR_8);
 VAR_8 = FUNC_5(VAR_0, VAR_7);
 FUNC_3("UEFI Capsule disabled token is: %d\n", VAR_8);


 if (VAR_8) {
  FUNC_3("Enabling UEFI capsule token");
  if (FUNC_0(VAR_7, VAR_1)) {
   FUNC_3("activate failed\n");
   VAR_8 = -1;
   goto out;
  }
 }
 VAR_8 = VAR_5;
out:
 FUNC_1(VAR_7);
 return VAR_8;
}
