
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_format_field {char* alias; char* name; } ;
struct bt_ctf_field_type {int dummy; } ;
struct bt_ctf_event_class {int dummy; } ;


 int FUNC_0 (struct bt_ctf_event_class*,struct bt_ctf_field_type*,char*) ;
 struct bt_ctf_field_type* FUNC_1 (struct bt_ctf_event_class*,char*) ;
 int FUNC_2 (struct bt_ctf_field_type*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct bt_ctf_event_class *VAR_0,
  struct bt_ctf_field_type *VAR_1,
  struct tep_format_field *VAR_2)
{
 struct bt_ctf_field_type *VAR_3 = ((void*)0);
 char *VAR_4;
 int VAR_5 = 1;
 int VAR_6;


 if (VAR_2->alias != VAR_2->name)
  return FUNC_0(VAR_0, VAR_1,
    (char *)VAR_2->alias);

 VAR_4 = VAR_2->name;


 if (FUNC_3(VAR_4))
  VAR_4 = FUNC_4(VAR_4, VAR_2->name, -1);

 if (!VAR_4) {
  FUNC_5("Failed to fix invalid identifier.");
  return -1;
 }
 while ((VAR_3 = FUNC_1(VAR_0, VAR_4))) {
  FUNC_2(VAR_3);
  VAR_4 = FUNC_4(VAR_4, VAR_2->name, VAR_5++);
  if (!VAR_4) {
   FUNC_5("Failed to create dup name for '%s'\n", VAR_2->name);
   return -1;
  }
 }

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_4);
 if (!VAR_6)
  VAR_2->alias = VAR_4;

 return VAR_6;
}
