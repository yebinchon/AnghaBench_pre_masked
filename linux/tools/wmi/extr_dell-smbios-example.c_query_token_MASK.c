
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dell_wmi_smbios_buffer {int dummy; } ;
typedef int __u16 ;


 int FUNC_0 (int,int*,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int*,struct dell_wmi_smbios_buffer*) ;

__attribute__((used)) static int FUNC_3(__u16 VAR_0, struct dell_wmi_smbios_buffer *VAR_1)
{
 __u16 VAR_2;
 __u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4 != 0) {
  FUNC_1("unable to find token %04x\n", VAR_0);
  return 1;
 }
 return FUNC_2(&VAR_2, &VAR_3, VAR_1);
}
