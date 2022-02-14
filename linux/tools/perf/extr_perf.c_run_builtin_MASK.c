
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct cmd_struct {int option; int (* fn ) (int,char const**) ;int cmd; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 scalar_t__ FUNC_12 (int ,struct stat*) ;
 int FUNC_13 () ;
 int VAR_4 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int,char const**) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_17 (int ,char*,int) ;
 int FUNC_18 (int,char const**) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_19(struct cmd_struct *VAR_9, int VAR_10, const char **VAR_11)
{
 int VAR_12;
 struct stat VAR_13;
 char VAR_14[VAR_1];

 if (VAR_7 == -1)
  VAR_7 = FUNC_3(VAR_9->cmd);

 if (VAR_8 == -1 && VAR_9->option & VAR_0)
  VAR_8 = FUNC_4(VAR_9->cmd);
 if (VAR_8 == -1 && VAR_9->option & VAR_2)
  VAR_8 = 1;
 FUNC_5();

 FUNC_15(&VAR_4);
 FUNC_16(&VAR_4, VAR_10, VAR_11);
 VAR_12 = VAR_9->fn(VAR_10, VAR_11);
 FUNC_13();
 FUNC_6(VAR_12);
 FUNC_14(&VAR_4);
 FUNC_2();

 if (VAR_12)
  return VAR_12 & 0xff;


 if (FUNC_12(FUNC_10(VAR_6), &VAR_13))
  return 0;

 if (FUNC_0(VAR_13.st_mode) || FUNC_1(VAR_13.st_mode))
  return 0;

 VAR_12 = 1;

 if (FUNC_9(VAR_6)) {
  FUNC_11(VAR_5, "write failure on standard output: %s",
   FUNC_17(VAR_3, VAR_14, sizeof(VAR_14)));
  goto out;
 }
 if (FUNC_8(VAR_6)) {
  FUNC_11(VAR_5, "unknown write failure on standard output");
  goto out;
 }
 if (FUNC_7(VAR_6)) {
  FUNC_11(VAR_5, "close failed on standard output: %s",
   FUNC_17(VAR_3, VAR_14, sizeof(VAR_14)));
  goto out;
 }
 VAR_12 = 0;
out:
 return VAR_12;
}
