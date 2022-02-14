
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
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int **,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*,int ,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (char*,int,char*,char*,...) ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_10 ;
 int FUNC_11 (char*) ;

__attribute__((used)) static PID_TYPE
FUNC_12(const char *VAR_11,
      _stringlist **VAR_12,
      _stringlist **VAR_13,
      _stringlist **VAR_14)
{
 PID_TYPE VAR_15;
 char VAR_16[VAR_1];
 char VAR_17[VAR_1];
 char VAR_18[VAR_1];
 char VAR_19[VAR_1 * 3];
 size_t VAR_20 = 0;
 char *VAR_21;


 if (!VAR_7)
 {

  if (FUNC_4(VAR_9, "isolationtester",
       VAR_2, VAR_5) != 0)
  {
   FUNC_5(VAR_10, "%s", FUNC_0("could not find proper isolationtester binary\n"));
   FUNC_2(2);
  }
  VAR_7 = 1;
 }







 FUNC_9(VAR_16, sizeof(VAR_16), "%s/specs/%s.spec",
    VAR_8, VAR_11);
 if (!FUNC_3(VAR_16))
  FUNC_9(VAR_16, sizeof(VAR_16), "%s/specs/%s.spec",
     VAR_4, VAR_11);

 FUNC_9(VAR_17, sizeof(VAR_17), "%s/results/%s.out",
    VAR_8, VAR_11);

 FUNC_9(VAR_18, sizeof(VAR_18), "%s/expected/%s.out",
    VAR_8, VAR_11);
 if (!FUNC_3(VAR_18))
  FUNC_9(VAR_18, sizeof(VAR_18), "%s/expected/%s.out",
     VAR_4, VAR_11);

 FUNC_1(VAR_12, VAR_17);
 FUNC_1(VAR_13, VAR_18);

 if (VAR_6)
 {
  VAR_20 += FUNC_9(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
         "%s ", VAR_6);
  if (VAR_20 >= sizeof(VAR_19))
  {
   FUNC_5(VAR_10, "%s", FUNC_0("command too long\n"));
   FUNC_2(2);
  }
 }

 VAR_20 += FUNC_9(VAR_19 + VAR_20, sizeof(VAR_19) - VAR_20,
        "\"%s\" \"dbname=%s\" < \"%s\" > \"%s\" 2>&1",
        VAR_5,
        VAR_3->str,
        VAR_16,
        VAR_17);
 if (VAR_20 >= sizeof(VAR_19))
 {
  FUNC_5(VAR_10, "%s", FUNC_0("command too long\n"));
  FUNC_2(2);
 }

 VAR_21 = FUNC_7("PGAPPNAME=isolation/%s", VAR_11);
 FUNC_8(VAR_21);

 VAR_15 = FUNC_10(VAR_19);

 if (VAR_15 == VAR_0)
 {
  FUNC_5(VAR_10, FUNC_0("could not start process for test %s\n"),
    VAR_11);
  FUNC_2(2);
 }

 FUNC_11("PGAPPNAME");
 FUNC_6(VAR_21);

 return VAR_15;
}
