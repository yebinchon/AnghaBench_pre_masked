
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,char**,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct seq_file*,char*,char*) ;
 int FUNC_3 (struct seq_file*,char) ;
 scalar_t__ FUNC_4 (char*,char) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_1, u32 VAR_2)
{
 char *VAR_3 = ((void*)0);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_0, VAR_2,
          &VAR_3, &VAR_4);
 if (!VAR_5) {
  bool VAR_6 = VAR_3 && FUNC_4(VAR_3, ',');

  FUNC_3(VAR_1, '=');
  if (VAR_6)
   FUNC_3(VAR_1, '\"');
  FUNC_2(VAR_1, VAR_3, "\"\n\\");
  if (VAR_6)
   FUNC_3(VAR_1, '\"');
 }
 FUNC_0(VAR_3);
 return VAR_5;
}
