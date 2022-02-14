
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, struct seq_file *VAR_1,
      void *VAR_2, char *VAR_3)
{
 long VAR_4 = (long)VAR_2;

 FUNC_2(VAR_1, VAR_0);

 if (VAR_4 == -1)
  FUNC_2(VAR_1, ":unlimited");
 else
  FUNC_0(VAR_1, ":count=%ld", VAR_4);

 if (VAR_3)
  FUNC_0(VAR_1, " if %s\n", VAR_3);
 else
  FUNC_1(VAR_1, '\n');

 return 0;
}
