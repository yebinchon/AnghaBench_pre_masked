
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int psql_cmd ;
typedef int outfile ;
typedef int infile ;
typedef int expectfile ;
typedef int _stringlist ;
struct TYPE_2__ {char* str; } ;
typedef scalar_t__ PID_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int **,char*) ;
 char* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_7 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static PID_TYPE
FUNC_11(const char *VAR_8,
    _stringlist **VAR_9,
    _stringlist **VAR_10,
    _stringlist **VAR_11)
{
 PID_TYPE VAR_12;
 char VAR_13[VAR_1];
 char VAR_14[VAR_1];
 char VAR_15[VAR_1];
 char VAR_16[VAR_1 * 3];
 size_t VAR_17 = 0;
 char *VAR_18;







 FUNC_8(VAR_13, sizeof(VAR_13), "%s/sql/%s.sql",
    VAR_6, VAR_8);
 if (!FUNC_3(VAR_13))
  FUNC_8(VAR_13, sizeof(VAR_13), "%s/sql/%s.sql",
     VAR_4, VAR_8);

 FUNC_8(VAR_14, sizeof(VAR_14), "%s/results/%s.out",
    VAR_6, VAR_8);

 FUNC_8(VAR_15, sizeof(VAR_15), "%s/expected/%s.out",
    VAR_6, VAR_8);
 if (!FUNC_3(VAR_15))
  FUNC_8(VAR_15, sizeof(VAR_15), "%s/expected/%s.out",
     VAR_4, VAR_8);

 FUNC_1(VAR_9, VAR_14);
 FUNC_1(VAR_10, VAR_15);

 if (VAR_5)
 {
  VAR_17 += FUNC_8(VAR_16 + VAR_17, sizeof(VAR_16) - VAR_17,
         "%s ", VAR_5);
  if (VAR_17 >= sizeof(VAR_16))
  {
   FUNC_4(VAR_7, "%s", FUNC_0("command too long\n"));
   FUNC_2(2);
  }
 }





 VAR_17 += FUNC_8(VAR_16 + VAR_17, sizeof(VAR_16) - VAR_17,
        "\"%s%spsql\" -X -a -q -d \"%s\" -v %s < \"%s\" > \"%s\" 2>&1",
        VAR_2 ? VAR_2 : "",
        VAR_2 ? "/" : "",
        VAR_3->str,
        "HIDE_TABLEAM=\"on\"",
        VAR_13,
        VAR_14);
 if (VAR_17 >= sizeof(VAR_16))
 {
  FUNC_4(VAR_7, "%s", FUNC_0("command too long\n"));
  FUNC_2(2);
 }

 VAR_18 = FUNC_6("PGAPPNAME=pg_regress/%s", VAR_8);
 FUNC_7(VAR_18);

 VAR_12 = FUNC_9(VAR_16);

 if (VAR_12 == VAR_0)
 {
  FUNC_4(VAR_7, FUNC_0("could not start process for test %s\n"),
    VAR_8);
  FUNC_2(2);
 }

 FUNC_10("PGAPPNAME");
 FUNC_5(VAR_18);

 return VAR_12;
}
