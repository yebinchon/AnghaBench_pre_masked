
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct aa_ns {int dummy; } ;
struct aa_label {char* hname; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,struct aa_ns*,struct aa_label*,int,int ) ;
 scalar_t__ FUNC_3 (struct aa_ns*,struct aa_label*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct aa_ns*,struct aa_label*,int) ;
 int FUNC_6 (struct seq_file*,char*,char*,...) ;
 int FUNC_7 (struct aa_ns*,struct aa_label*,int) ;

void FUNC_8(struct seq_file *VAR_0, struct aa_ns *VAR_1,
    struct aa_label *VAR_2, int VAR_3, gfp_t VAR_4)
{
 FUNC_0(!VAR_0);
 FUNC_0(!VAR_2);

 if (!FUNC_7(VAR_1, VAR_2, VAR_3)) {
  char *VAR_5;
  int VAR_6;

  VAR_6 = FUNC_2(&VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_6 == -1) {
   FUNC_1("label print error");
   return;
  }
  FUNC_6(VAR_0, "%s", VAR_5);
  FUNC_4(VAR_5);
 } else if (FUNC_3(VAR_1, VAR_2, VAR_3))
  FUNC_6(VAR_0, "%s (%s)", VAR_2->hname,
      FUNC_5(VAR_1, VAR_2, VAR_3));
 else
  FUNC_6(VAR_0, "%s", VAR_2->hname);
}
