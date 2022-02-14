
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statement {char* command; int lineno; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static bool
FUNC_5(int VAR_0, int VAR_1, struct statement *VAR_2, char *VAR_3)
{
 char *VAR_4;

 if (!(VAR_4 = (char *) FUNC_0(FUNC_4(VAR_2->command)
          + FUNC_4(VAR_3)
          + 1, VAR_2->lineno)))
 {
  FUNC_1(VAR_3);
  return 0;
 }

 FUNC_3(VAR_4, VAR_2->command);
 FUNC_3(VAR_4 + VAR_0 - 1, VAR_3);





 FUNC_2(VAR_4,
     VAR_2->command
     + VAR_0
     + VAR_1 - 1);

 FUNC_1(VAR_2->command);
 VAR_2->command = VAR_4;

 FUNC_1(VAR_3);
 return 1;
}
