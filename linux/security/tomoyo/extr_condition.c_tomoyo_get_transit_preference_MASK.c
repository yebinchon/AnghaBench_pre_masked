
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_condition {scalar_t__ transit; } ;
struct tomoyo_acl_param {char* data; } ;


 char* FUNC_0 (char* const,char) ;
 int FUNC_1 (char* const,char*) ;
 scalar_t__ FUNC_2 (char* const) ;
 scalar_t__ FUNC_3 (struct tomoyo_acl_param*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct tomoyo_acl_param*) ;

__attribute__((used)) static char *FUNC_6(struct tomoyo_acl_param *VAR_0,
        struct tomoyo_condition *VAR_1)
{
 char * const VAR_2 = VAR_0->data;
 bool VAR_3;

 if (*VAR_2 == '<') {
  VAR_1->transit = FUNC_3(VAR_0);
  goto done;
 }
 {
  char *VAR_4 = FUNC_0(VAR_2, ' ');

  if (VAR_4)
   *VAR_4 = '\0';
  VAR_3 = FUNC_2(VAR_2) || !FUNC_1(VAR_2, "keep") ||
   !FUNC_1(VAR_2, "initialize") || !FUNC_1(VAR_2, "reset") ||
   !FUNC_1(VAR_2, "child") || !FUNC_1(VAR_2, "parent");
  if (VAR_4)
   *VAR_4 = ' ';
 }
 if (!VAR_3)
  return VAR_2;
 VAR_1->transit = FUNC_4(FUNC_5(VAR_0));
done:
 if (VAR_1->transit)
  return VAR_0->data;




 return "/";
}
