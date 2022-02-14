
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_buffer {int dummy; } ;
struct aa_ns {int dummy; } ;
struct aa_label {scalar_t__ hname; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,struct aa_ns*,struct aa_label*,int,int ) ;
 int FUNC_3 (struct audit_buffer*,char const*,int) ;
 int FUNC_4 (struct audit_buffer*,char const*,int) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 scalar_t__ FUNC_6 (struct aa_ns*,struct aa_label*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct aa_ns*,struct aa_label*,int) ;

void FUNC_10(struct audit_buffer *VAR_0, struct aa_ns *VAR_1,
       struct aa_label *VAR_2, int VAR_3, gfp_t VAR_4)
{
 const char *VAR_5;
 char *VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_2);

 if (!FUNC_9(VAR_1, VAR_2, VAR_3) ||
     FUNC_6(VAR_1, VAR_2, VAR_3)) {
  VAR_7 = FUNC_2(&VAR_6, VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_7 == -1) {
   FUNC_1("label print error");
   return;
  }
  VAR_5 = VAR_6;
 } else {
  VAR_5 = (char *) VAR_2->hname;
  VAR_7 = FUNC_8(VAR_5);
 }
 if (FUNC_5(VAR_5, VAR_7))
  FUNC_3(VAR_0, VAR_5, VAR_7);
 else
  FUNC_4(VAR_0, VAR_5, VAR_7);

 FUNC_7(VAR_6);
}
