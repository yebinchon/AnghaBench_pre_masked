
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char const*,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(const char* VAR_5)
{
 FUNC_0("Version %s\n"
             "Usage: %s [options]\n"
      "\t-v <version string>\t - firmware version information, default: %s\n"
      "\t-m <magic>\t\t - firmware magic, default: %s\n"
      "\t-f <flash base>\t\t - flash base address, default: 0x%08x\n"
      "\t-o <output file>\t - firmware output file, default: %s\n"
      "\t-p <name>:<offset>:<len>:<memaddr>:<entry>:<file>\n "
      "\t\t\t\t - create a partition from <file>\n"
      "\t-z\t\t\t - set partition offsets to zero\n"
      "\t-h\t\t\t - this help\n",
      VAR_4, VAR_5, VAR_2, VAR_3,
      VAR_0, VAR_1);
}
