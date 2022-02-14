
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tomoyo_number_union {unsigned long* values; scalar_t__* value_type; int * group; } ;
struct tomoyo_acl_param {char* data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tomoyo_number_union*,int ,int) ;
 int * FUNC_1 (struct tomoyo_acl_param*,int ) ;
 scalar_t__ FUNC_2 (unsigned long*,char**) ;
 char* FUNC_3 (struct tomoyo_acl_param*) ;

bool FUNC_4(struct tomoyo_acl_param *VAR_2,
          struct tomoyo_number_union *VAR_3)
{
 char *VAR_4;
 u8 VAR_5;
 unsigned long VAR_6;

 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 if (VAR_2->data[0] == '@') {
  VAR_2->data++;
  VAR_3->group = FUNC_1(VAR_2, VAR_0);
  return VAR_3->group != ((void*)0);
 }
 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_2(&VAR_6, &VAR_4);
 if (VAR_5 == VAR_1)
  return 0;
 VAR_3->values[0] = VAR_6;
 VAR_3->value_type[0] = VAR_5;
 if (!*VAR_4) {
  VAR_3->values[1] = VAR_6;
  VAR_3->value_type[1] = VAR_5;
  return 1;
 }
 if (*VAR_4++ != '-')
  return 0;
 VAR_5 = FUNC_2(&VAR_6, &VAR_4);
 if (VAR_5 == VAR_1 || *VAR_4 || VAR_3->values[0] > VAR_6)
  return 0;
 VAR_3->values[1] = VAR_6;
 VAR_3->value_type[1] = VAR_5;
 return 1;
}
