
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* input; int cmd_select; int cmd_class; } ;
struct dell_wmi_smbios_buffer {TYPE_1__ std; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct dell_wmi_smbios_buffer*) ;

__attribute__((used)) static int FUNC_3(struct dell_wmi_smbios_buffer *VAR_2,
     __u16 VAR_3)
{
 __u16 VAR_4;
 __u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, &VAR_4, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_1("unable to find token %04x\n", VAR_3);
  return 1;
 }
 VAR_2->std.cmd_class = VAR_0;
 VAR_2->std.cmd_select = VAR_1;
 VAR_2->std.input[0] = VAR_4;
 VAR_2->std.input[1] = 1;
 VAR_6 = FUNC_2(VAR_2);
 return VAR_6;
}
