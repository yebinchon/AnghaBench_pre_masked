
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd_struct {char const* cmd; } ;


 unsigned int FUNC_0 (struct cmd_struct*) ;
 struct cmd_struct* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cmd_struct*,int,char const**) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static void FUNC_4(int VAR_1, const char **VAR_2)
{
 const char *VAR_3 = VAR_2[0];
 unsigned int VAR_4;


 if (VAR_1 > 1 && !FUNC_3(VAR_2[1], "--help")) {
  VAR_2[1] = VAR_2[0];
  VAR_2[0] = VAR_3 = "help";
 }

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  struct cmd_struct *VAR_5 = VAR_0+VAR_4;
  if (FUNC_3(VAR_5->cmd, VAR_3))
   continue;
  FUNC_1(FUNC_2(VAR_5, VAR_1, VAR_2));
 }
}
