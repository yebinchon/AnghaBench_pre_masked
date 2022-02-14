
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd_class; int cmd_select; int* input; int* output; } ;
struct dell_wmi_smbios_buffer {TYPE_1__ std; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct dell_wmi_smbios_buffer *VAR_0)
{
 FUNC_0("Call: %x/%x [%x,%x,%x,%x]\nResults: [%8x,%8x,%8x,%8x]\n",
 VAR_0->std.cmd_class, VAR_0->std.cmd_select,
 VAR_0->std.input[0], VAR_0->std.input[1],
 VAR_0->std.input[2], VAR_0->std.input[3],
 VAR_0->std.output[0], VAR_0->std.output[1],
 VAR_0->std.output[2], VAR_0->std.output[3]);
}
