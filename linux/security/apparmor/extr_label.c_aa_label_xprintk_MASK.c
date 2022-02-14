
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {int dummy; } ;
struct aa_label {char* hname; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,struct aa_ns*,struct aa_label*,int,int ) ;
 scalar_t__ FUNC_3 (struct aa_ns*,struct aa_label*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct aa_ns*,struct aa_label*,int) ;
 int FUNC_6 (char*,char*,...) ;
 int FUNC_7 (struct aa_ns*,struct aa_label*,int) ;

void FUNC_8(struct aa_ns *VAR_0, struct aa_label *VAR_1, int VAR_2,
        gfp_t VAR_3)
{
 FUNC_0(!VAR_1);

 if (!FUNC_7(VAR_0, VAR_1, VAR_2)) {
  char *VAR_4;
  int VAR_5;

  VAR_5 = FUNC_2(&VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_5 == -1) {
   FUNC_1("label print error");
   return;
  }
  FUNC_6("%s", VAR_4);
  FUNC_4(VAR_4);
 } else if (FUNC_3(VAR_0, VAR_1, VAR_2))
  FUNC_6("%s (%s)", VAR_1->hname,
         FUNC_5(VAR_0, VAR_1, VAR_2));
 else
  FUNC_6("%s", VAR_1->hname);
}
