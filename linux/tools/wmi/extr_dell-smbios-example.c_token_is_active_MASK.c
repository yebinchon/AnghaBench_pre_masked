
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* output; scalar_t__* input; int cmd_select; int cmd_class; } ;
struct dell_wmi_smbios_buffer {TYPE_1__ std; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dell_wmi_smbios_buffer*) ;

__attribute__((used)) static int FUNC_1(__u16 *VAR_2, __u16 *VAR_3,
      struct dell_wmi_smbios_buffer *VAR_4)
{
 int VAR_5;

 VAR_4->std.cmd_class = VAR_0;
 VAR_4->std.cmd_select = VAR_1;
 VAR_4->std.input[0] = *VAR_2;
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 != 0 || VAR_4->std.output[0] != 0)
  return VAR_5;
 VAR_5 = (VAR_4->std.output[1] == *VAR_3);
 return VAR_5;
}
