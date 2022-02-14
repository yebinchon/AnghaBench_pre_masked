
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist_config {char const* dirname; int file_only; } ;
struct strlist {int dummy; } ;
struct str_node {int s; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct strlist*) ;
 struct str_node* FUNC_3 (struct strlist*,int) ;
 struct strlist* FUNC_4 (char*,struct strlist_config*) ;
 int FUNC_5 (struct strlist*) ;

const char *FUNC_6(const char *VAR_2)
{
 struct strlist *VAR_3;
 struct str_node *VAR_4;
 char *VAR_5 = ((void*)0);
 struct strlist_config VAR_6 = {
  .dirname = VAR_2,
  .file_only = 1,
 };

 VAR_3 = FUNC_4("tips.txt", &VAR_6);
 if (VAR_3 == ((void*)0))
  return VAR_1 == VAR_0 ? ((void*)0) :
   "Tip: check path of tips.txt or get more memory! ;-p";

 if (FUNC_5(VAR_3) == 0)
  goto out;

 VAR_4 = FUNC_3(VAR_3, FUNC_1() % FUNC_5(VAR_3));
 if (FUNC_0(&VAR_5, "Tip: %d", VAR_4->s) < 0)
  VAR_5 = (char *)"Tip: get more memory! ;-)";

out:
 FUNC_2(VAR_3);

 return VAR_5;
}
