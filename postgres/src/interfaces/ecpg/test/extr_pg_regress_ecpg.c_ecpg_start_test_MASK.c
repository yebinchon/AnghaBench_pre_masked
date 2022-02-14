
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int insource ;
typedef int inprg ;
typedef int expectfile_stdout ;
typedef int expectfile_stderr ;
typedef int expectfile_source ;
typedef int cmd ;
typedef int _stringlist ;
typedef scalar_t__ PID_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int **,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*,int,char*,char const*,...) ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_4 ;
 char* FUNC_11 (char const*) ;
 int FUNC_12 (char*) ;

__attribute__((used)) static PID_TYPE
FUNC_13(const char *VAR_5,
    _stringlist **VAR_6,
    _stringlist **VAR_7,
    _stringlist **VAR_8)
{
 PID_TYPE VAR_9;
 char VAR_10[VAR_1];
 char VAR_11[VAR_1];
 char *VAR_12,
    VAR_13[VAR_1];
 char *VAR_14,
    VAR_15[VAR_1];
 char *VAR_16,
    VAR_17[VAR_1];
 char VAR_18[VAR_1 * 3];
 char *VAR_19;
 char *VAR_20;

 FUNC_9(VAR_10, sizeof(VAR_10), "%s/%s", VAR_2, VAR_5);

 VAR_19 = FUNC_11(VAR_5);
 FUNC_8(VAR_19, "/", "-");
 FUNC_9(VAR_13, sizeof(VAR_13),
    "%s/expected/%s.stdout",
    VAR_3, VAR_19);
 FUNC_9(VAR_15, sizeof(VAR_15),
    "%s/expected/%s.stderr",
    VAR_3, VAR_19);
 FUNC_9(VAR_17, sizeof(VAR_17),
    "%s/expected/%s.c",
    VAR_3, VAR_19);





 VAR_12 = FUNC_11(VAR_13);
 FUNC_8(VAR_12, "/expected/", "/results/");
 VAR_14 = FUNC_11(VAR_15);
 FUNC_8(VAR_14, "/expected/", "/results/");
 VAR_16 = FUNC_11(VAR_17);
 FUNC_8(VAR_16, "/expected/", "/results/");

 FUNC_1(VAR_6, VAR_12);
 FUNC_1(VAR_7, VAR_13);
 FUNC_1(VAR_8, "stdout");

 FUNC_1(VAR_6, VAR_14);
 FUNC_1(VAR_7, VAR_15);
 FUNC_1(VAR_8, "stderr");

 FUNC_1(VAR_6, VAR_16);
 FUNC_1(VAR_7, VAR_17);
 FUNC_1(VAR_8, "source");

 FUNC_9(VAR_11, sizeof(VAR_11), "%s.c", VAR_5);
 FUNC_2(VAR_11, VAR_16);

 FUNC_9(VAR_10, sizeof(VAR_10), "%s/%s", VAR_2, VAR_5);

 FUNC_9(VAR_18, sizeof(VAR_18),
    "\"%s\" >\"%s\" 2>\"%s\"",
    VAR_10,
    VAR_12,
    VAR_14);

 VAR_20 = FUNC_6("PGAPPNAME=ecpg/%s", VAR_19);
 FUNC_7(VAR_20);

 VAR_9 = FUNC_10(VAR_18);

 if (VAR_9 == VAR_0)
 {
  FUNC_4(VAR_4, FUNC_0("could not start process for test %s\n"),
    VAR_5);
  FUNC_3(2);
 }

 FUNC_12("PGAPPNAME");
 FUNC_5(VAR_20);

 FUNC_5(VAR_19);
 FUNC_5(VAR_12);
 FUNC_5(VAR_14);
 FUNC_5(VAR_16);

 return VAR_9;
}
