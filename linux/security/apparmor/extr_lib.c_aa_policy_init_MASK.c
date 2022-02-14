
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_policy {char* hname; int profiles; int list; int name; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char const*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

bool FUNC_6(struct aa_policy *VAR_0, const char *VAR_1,
      const char *VAR_2, gfp_t VAR_3)
{
 char *VAR_4;


 if (VAR_1) {
  VAR_4 = FUNC_1(FUNC_5(VAR_1) + FUNC_5(VAR_2) + 3, VAR_3);
  if (VAR_4)
   FUNC_3(VAR_4, "%s//%s", VAR_1, VAR_2);
 } else {
  VAR_4 = FUNC_1(FUNC_5(VAR_2) + 1, VAR_3);
  if (VAR_4)
   FUNC_4(VAR_4, VAR_2);
 }
 if (!VAR_4)
  return 0;
 VAR_0->hname = VAR_4;

 VAR_0->name = FUNC_2(VAR_0->hname);
 FUNC_0(&VAR_0->list);
 FUNC_0(&VAR_0->profiles);

 return 1;
}
