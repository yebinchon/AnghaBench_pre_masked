
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;

const char *
FUNC_5(__u32 VAR_2, __u64 VAR_3, __u64 VAR_4,
        const char **VAR_5)
{
 char VAR_6[VAR_0];
 int VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6)) {
  FUNC_1("Can't get net device name for ifindex %d: %s", VAR_2,
        FUNC_4(VAR_1));
  return ((void*)0);
 }

 VAR_7 = FUNC_3(VAR_6, "vendor");
 if (VAR_7 < 0) {
  FUNC_1("Can't get device vendor id for %s", VAR_6);
  return ((void*)0);
 }

 switch (VAR_7) {
 case 0x19ee:
  VAR_8 = FUNC_3(VAR_6, "device");
  if (VAR_8 != 0x4000 &&
      VAR_8 != 0x6000 &&
      VAR_8 != 0x6003)
   FUNC_2("Unknown NFP device ID, assuming it is NFP-6xxx arch");
  *VAR_5 = "ctx4";
  return "NFP-6xxx";
 default:
  FUNC_1("Can't get bfd arch name for device vendor id 0x%04x",
        VAR_7);
  return ((void*)0);
 }
}
