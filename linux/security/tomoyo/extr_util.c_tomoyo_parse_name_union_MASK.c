
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_name_union {int * filename; int * group; } ;
struct tomoyo_acl_param {char* data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (struct tomoyo_acl_param*,int ) ;
 int * FUNC_2 (char*) ;
 char* FUNC_3 (struct tomoyo_acl_param*) ;

bool FUNC_4(struct tomoyo_acl_param *VAR_1,
        struct tomoyo_name_union *VAR_2)
{
 char *VAR_3;

 if (VAR_1->data[0] == '@') {
  VAR_1->data++;
  VAR_2->group = FUNC_1(VAR_1, VAR_0);
  return VAR_2->group != ((void*)0);
 }
 VAR_3 = FUNC_3(VAR_1);
 if (!FUNC_0(VAR_3))
  return 0;
 VAR_2->filename = FUNC_2(VAR_3);
 return VAR_2->filename != ((void*)0);
}
