
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,char const*,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(const char* VAR_4)
{
 FUNC_0("Version %s\n"
             "Usage: %s [options]\n"
      "\t-v <version string>\t - firmware version information, default: %s\n"
      "\t-o <output file>\t - firmware output file, default: %s\n"
      "\t-m <magic>\t - firmware magic, default: %s\n"
      "\t-k <kernel file>\t\t - kernel file\n"
      "\t-r <rootfs file>\t\t - rootfs file\n"
      "\t-B <board name>\t\t - choose firmware layout for specified board (XS2, XS5, RS, XM)\n"
      "\t-h\t\t\t - this help\n", VAR_3,
      VAR_4, VAR_1, VAR_0, VAR_2);
}
