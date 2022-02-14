
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbuf ;




 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,size_t,char*,char const*,...) ;
 char* FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 () ;
 char* VAR_1 ;
 char* FUNC_5 () ;

int FUNC_6(int VAR_2, char *VAR_3, size_t VAR_4,
       const char *VAR_5, const char *VAR_6)
{
 char VAR_7[128];
 char VAR_8[VAR_0];

 FUNC_1(VAR_8, VAR_0, "%s/%s", VAR_5, VAR_6 ?: "*");

 switch (VAR_2) {
 case 128:






  if (FUNC_0() || FUNC_4()) {

   if (!FUNC_3(VAR_8, "sdt_", 4)) {
    FUNC_1(VAR_3, VAR_4,
     "Error:\tFile %s/%s not found.\n"
     "Hint:\tSDT event cannot be directly recorded on.\n"
     "\tPlease first use 'perf probe %s:%s' before recording it.\n",
     VAR_1, VAR_8, VAR_5, VAR_6);
   } else {
    FUNC_1(VAR_3, VAR_4,
      "Error:\tFile %s/%s not found.\n"
      "Hint:\tPerhaps this kernel misses some CONFIG_ setting to enable this feature?.\n",
      VAR_1, VAR_8);
   }
   break;
  }
  FUNC_1(VAR_3, VAR_4, "%s",
    "Error:\tUnable to find debugfs/tracefs\n"
    "Hint:\tWas your kernel compiled with debugfs/tracefs support?\n"
    "Hint:\tIs the debugfs/tracefs filesystem mounted?\n"
    "Hint:\tTry 'sudo mount -t debugfs nodev /sys/kernel/debug'");
  break;
 case 129: {
  FUNC_1(VAR_3, VAR_4,
    "Error:\tNo permissions to read %s/%s\n"
    "Hint:\tTry 'sudo mount -o remount,mode=755 %s'\n",
    VAR_1, VAR_8, FUNC_5());
 }
  break;
 default:
  FUNC_1(VAR_3, VAR_4, "%s", FUNC_2(VAR_2, VAR_7, sizeof(VAR_7)));
  break;
 }

 return 0;
}
