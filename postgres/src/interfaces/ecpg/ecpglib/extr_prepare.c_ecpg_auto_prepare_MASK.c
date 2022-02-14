
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prepared_statement {int dummy; } ;
struct connection {int dummy; } ;
struct TYPE_2__ {char* stmtID; int execs; } ;


 int FUNC_0 (int,char*,char const*,int const,char const*) ;
 int FUNC_1 (int,char const*,int ,char*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;
 struct prepared_statement* FUNC_3 (char*,struct connection*,int *) ;
 struct connection* FUNC_4 (char const*) ;
 int FUNC_5 (char*,int,...) ;
 char* FUNC_6 (char*,int) ;
 int VAR_1 ;
 int FUNC_7 (int,struct connection*,char*,char const*) ;
 int FUNC_8 (char*,char*,int ) ;
 TYPE_1__* VAR_2 ;

bool
FUNC_9(int VAR_3, const char *VAR_4, const int VAR_5, char **VAR_6, const char *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_2(VAR_7);


 if (VAR_8)
 {
  char *VAR_9;
  struct connection *VAR_10;
  struct prepared_statement *VAR_11;

  FUNC_5("ecpg_auto_prepare on line %d: statement found in cache; entry %d\n", VAR_3, VAR_8);

  VAR_9 = VAR_2[VAR_8].stmtID;

  VAR_10 = FUNC_4(VAR_4);
  VAR_11 = FUNC_3(VAR_9, VAR_10, ((void*)0));

  if (!VAR_11 && !FUNC_7(VAR_3, VAR_10, VAR_9, VAR_7))
   return 0;

  *VAR_6 = FUNC_6(VAR_9, VAR_3);
 }
 else
 {
  char VAR_12[VAR_0];

  FUNC_5("ecpg_auto_prepare on line %d: statement not in cache; inserting\n", VAR_3);


  FUNC_8(VAR_12, "ecpg%d", VAR_1++);

  if (!FUNC_1(VAR_3, VAR_4, 0, VAR_12, VAR_7))
   return 0;

  VAR_8 = FUNC_0(VAR_3, VAR_12, VAR_4, VAR_5, VAR_7);
  if (VAR_8 < 0)
   return 0;

  *VAR_6 = FUNC_6(VAR_12, VAR_3);
 }


 VAR_2[VAR_8].execs++;

 return 1;
}
