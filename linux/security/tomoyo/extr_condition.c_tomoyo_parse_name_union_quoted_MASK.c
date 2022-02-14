
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_name_union {int * filename; } ;
struct tomoyo_acl_param {char* data; } ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (struct tomoyo_acl_param*,struct tomoyo_name_union*) ;

__attribute__((used)) static bool FUNC_2(struct tomoyo_acl_param *VAR_0,
        struct tomoyo_name_union *VAR_1)
{
 char *VAR_2 = VAR_0->data;

 if (*VAR_2 == '@')
  return FUNC_1(VAR_0, VAR_1);
 VAR_1->filename = FUNC_0(VAR_2);
 return VAR_1->filename != ((void*)0);
}
