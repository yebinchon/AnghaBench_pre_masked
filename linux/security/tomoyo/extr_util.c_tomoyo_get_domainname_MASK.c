
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_path_info {int dummy; } ;
struct tomoyo_acl_param {char* data; } ;


 scalar_t__ FUNC_0 (char*) ;
 struct tomoyo_path_info const* FUNC_1 (char*) ;

const struct tomoyo_path_info *FUNC_2
(struct tomoyo_acl_param *VAR_0)
{
 char *VAR_1 = VAR_0->data;
 char *VAR_2 = VAR_1;

 while (*VAR_2) {
  if (*VAR_2++ != ' ' || *VAR_2++ == '/')
   continue;
  VAR_2 -= 2;
  *VAR_2++ = '\0';
  break;
 }
 VAR_0->data = VAR_2;
 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);
 return ((void*)0);
}
