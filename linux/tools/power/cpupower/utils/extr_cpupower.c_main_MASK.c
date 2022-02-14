
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {char const* machine; } ;
struct stat {int dummy; } ;
struct cmd_struct {char const* cmd; unsigned int (* main ) (int,char const**) ;scalar_t__ needs_root; } ;


 unsigned int FUNC_0 (struct cmd_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 struct cmd_struct* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,char const***) ;
 int FUNC_8 () ;
 int VAR_8 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (char const*,char const*) ;
 unsigned int FUNC_14 (int,char const**) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ) ;
 unsigned int FUNC_18 (struct utsname*) ;

int FUNC_19(int VAR_10, const char *VAR_11[])
{
 const char *VAR_12;
 unsigned int VAR_13, VAR_14;
 struct stat VAR_15;
 struct utsname VAR_16;
 char VAR_17[32];

 VAR_7 = FUNC_2(FUNC_15(VAR_3));

 VAR_10--;
 VAR_11 += 1;

 FUNC_7(&VAR_10, &VAR_11);

 VAR_12 = VAR_11[0];

 if (VAR_10 < 1) {
  FUNC_8();
  return VAR_0;
 }

 FUNC_10(VAR_1, "");
 FUNC_17(VAR_2);


 if (VAR_10 > 1 && !FUNC_13(VAR_11[1], "--help")) {
  VAR_11[1] = VAR_11[0];
  VAR_11[0] = VAR_12 = "help";
 }

 VAR_4 = FUNC_9();
 if (VAR_4 < 0) {
  FUNC_4(VAR_9, "%s", FUNC_1("No valid cpus found.\n"));
  return VAR_0;
 }

 FUNC_5(&VAR_6);
 VAR_8 = !FUNC_6();
 if (VAR_8) {
  VAR_14 = FUNC_18(&VAR_16);
  FUNC_11(VAR_17, "/dev/cpu/%d/msr", VAR_4);
  if (!VAR_14 && !FUNC_13(VAR_16.machine, "x86_64") &&
      FUNC_12(VAR_17, &VAR_15) != 0) {
   if (FUNC_16("modprobe msr") == -1)
 FUNC_4(VAR_9, "%s", FUNC_1("MSR access not available.\n"));
  }
 }

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
  struct cmd_struct *VAR_18 = VAR_5 + VAR_13;
  if (FUNC_13(VAR_18->cmd, VAR_12))
   continue;
  if (!VAR_8 && VAR_18->needs_root) {
   FUNC_4(VAR_9, FUNC_1("Subcommand %s needs root "
       "privileges\n"), VAR_12);
   return VAR_0;
  }
  VAR_14 = VAR_18->main(VAR_10, VAR_11);
  if (VAR_7)
   FUNC_3(VAR_7);
  return VAR_14;
 }
 FUNC_8();
 return VAR_0;
}
