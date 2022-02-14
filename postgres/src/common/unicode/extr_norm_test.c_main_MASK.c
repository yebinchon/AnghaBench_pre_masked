
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pg_wchar ;
struct TYPE_3__ {scalar_t__* input; scalar_t__* output; int linenum; } ;
typedef TYPE_1__ pg_unicode_test ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*) ;
 char* FUNC_2 (scalar_t__*) ;
 int FUNC_3 (char*,...) ;
 scalar_t__* FUNC_4 (scalar_t__*) ;

int
FUNC_5(int VAR_1, char **VAR_2)
{
 const pg_unicode_test *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->input[0] != 0; VAR_3++)
 {
  pg_wchar *VAR_4;

  VAR_4 = FUNC_4(VAR_3->input);

  if (FUNC_1(VAR_3->output, VAR_4) != 0)
  {
   FUNC_3("FAILURE (NormalizationTest.txt line %d):\n", VAR_3->linenum);
   FUNC_3("input:\t%s\n", FUNC_2(VAR_3->input));
   FUNC_3("expected:\t%s\n", FUNC_2(VAR_3->output));
   FUNC_3("got\t%s\n", FUNC_2(VAR_4));
   FUNC_3("\n");
   FUNC_0(1);
  }
 }

 FUNC_3("All tests successful!\n");
 FUNC_0(0);
}
