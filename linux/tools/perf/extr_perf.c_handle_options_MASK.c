
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* long_name; } ;
struct cmd_struct {char* cmd; } ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 void* VAR_4 ;
 scalar_t__ FUNC_4 (char const*) ;
 int VAR_5 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int VAR_6 ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char const*,int ) ;
 int FUNC_13 (int ) ;
 char* FUNC_14 () ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_17(const char ***VAR_9, int *VAR_10, int *VAR_11)
{
 int VAR_12 = 0;

 while (*VAR_10 > 0) {
  const char *VAR_13 = (*VAR_9)[0];
  if (VAR_13[0] != '-')
   break;






  if (!FUNC_10(VAR_13, "--help") || !FUNC_10(VAR_13, "--version"))
   break;





  if (!FUNC_10(VAR_13, "-h")) {
   (*VAR_9)[0] = "--help";
   break;
  }

  if (!FUNC_10(VAR_13, "-v")) {
   (*VAR_9)[0] = "--version";
   break;
  }

  if (!FUNC_10(VAR_13, "-vv")) {
   (*VAR_9)[0] = "version";
   VAR_8 = 1;
   break;
  }




  if (FUNC_12(VAR_13, VAR_1)) {
   VAR_13 += FUNC_11(VAR_1);
   if (*VAR_13 == '=')
    FUNC_8(VAR_13 + 1);
   else {
    FUNC_7(FUNC_3());
    FUNC_1(0);
   }
  } else if (!FUNC_10(VAR_13, "--html-path")) {
   FUNC_7(FUNC_13(VAR_2));
   FUNC_1(0);
  } else if (!FUNC_10(VAR_13, "-p") || !FUNC_10(VAR_13, "--paginate")) {
   VAR_7 = 1;
  } else if (!FUNC_10(VAR_13, "--no-pager")) {
   VAR_7 = 0;
   if (VAR_11)
    *VAR_11 = 1;
  } else if (!FUNC_10(VAR_13, "--debugfs-dir")) {
   if (*VAR_10 < 2) {
    FUNC_2(VAR_6, "No directory given for --debugfs-dir.\n");
    FUNC_16(VAR_5);
   }
   FUNC_15((*VAR_9)[1]);
   if (VAR_11)
    *VAR_11 = 1;
   (*VAR_9)++;
   (*VAR_10)--;
  } else if (!FUNC_10(VAR_13, "--buildid-dir")) {
   if (*VAR_10 < 2) {
    FUNC_2(VAR_6, "No directory given for --buildid-dir.\n");
    FUNC_16(VAR_5);
   }
   FUNC_9((*VAR_9)[1]);
   if (VAR_11)
    *VAR_11 = 1;
   (*VAR_9)++;
   (*VAR_10)--;
  } else if (FUNC_12(VAR_13, VAR_0)) {
   FUNC_15(VAR_13 + FUNC_11(VAR_0));
   FUNC_2(VAR_6, "dir: %s\n", FUNC_14());
   if (VAR_11)
    *VAR_11 = 1;
  } else if (!FUNC_10(VAR_13, "--list-cmds")) {
   unsigned int VAR_14;

   for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_3); VAR_14++) {
    struct cmd_struct *VAR_15 = VAR_3+VAR_14;
    FUNC_5("%s ", VAR_15->cmd);
   }
   FUNC_6('\n');
   FUNC_1(0);
  } else if (!FUNC_10(VAR_13, "--list-opts")) {
   unsigned int VAR_16;

   for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_4)-1; VAR_16++) {
    struct option *VAR_17 = VAR_4+VAR_16;
    FUNC_5("--%s ", VAR_17->long_name);
   }
   FUNC_6('\n');
   FUNC_1(0);
  } else if (!FUNC_10(VAR_13, "--debug")) {
   if (*VAR_10 < 2) {
    FUNC_2(VAR_6, "No variable specified for --debug.\n");
    FUNC_16(VAR_5);
   }
   if (FUNC_4((*VAR_9)[1]))
    FUNC_16(VAR_5);

   (*VAR_9)++;
   (*VAR_10)--;
  } else {
   FUNC_2(VAR_6, "Unknown option: %s\n", VAR_13);
   FUNC_16(VAR_5);
  }

  (*VAR_9)++;
  (*VAR_10)--;
  VAR_12++;
 }
 return VAR_12;
}
