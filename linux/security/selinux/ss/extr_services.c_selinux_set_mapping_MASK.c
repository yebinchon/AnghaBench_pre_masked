
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct selinux_mapping {unsigned int num_perms; int * perms; int value; } ;
struct selinux_map {size_t size; struct selinux_mapping* mapping; } ;
struct security_class_mapping {char* name; int ** perms; } ;
struct policydb {scalar_t__ allow_unknown; scalar_t__ reject_unknown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct selinux_mapping* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (struct selinux_mapping*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct policydb*,int ,int *) ;
 int FUNC_5 (struct policydb*,char*) ;

__attribute__((used)) static int FUNC_6(struct policydb *VAR_3,
          struct security_class_mapping *VAR_4,
          struct selinux_map *VAR_5)
{
 u16 VAR_6, VAR_7;
 unsigned VAR_8;
 bool VAR_9 = 0;


 if (!VAR_4)
  return -VAR_0;
 VAR_6 = 0;
 while (VAR_4[VAR_6].name)
  VAR_6++;


 VAR_5->mapping = FUNC_0(++VAR_6, sizeof(*VAR_5->mapping), VAR_2);
 if (!VAR_5->mapping)
  return -VAR_1;


 VAR_7 = 0;
 while (VAR_4[VAR_7].name) {
  struct security_class_mapping *VAR_10 = VAR_4 + (VAR_7++);
  struct selinux_mapping *VAR_11 = VAR_5->mapping + VAR_7;


  if (!FUNC_3(VAR_10->name, "")) {
   VAR_11->num_perms = 0;
   continue;
  }

  VAR_11->value = FUNC_5(VAR_3, VAR_10->name);
  if (!VAR_11->value) {
   FUNC_2("SELinux:  Class %s not defined in policy.\n",
          VAR_10->name);
   if (VAR_3->reject_unknown)
    goto err;
   VAR_11->num_perms = 0;
   VAR_9 = 1;
   continue;
  }

  VAR_8 = 0;
  while (VAR_10->perms[VAR_8]) {

   if (!*VAR_10->perms[VAR_8]) {
    VAR_8++;
    continue;
   }
   VAR_11->perms[VAR_8] = FUNC_4(VAR_3, VAR_11->value,
           VAR_10->perms[VAR_8]);
   if (!VAR_11->perms[VAR_8]) {
    FUNC_2("SELinux:  Permission %s in class %s not defined in policy.\n",
           VAR_10->perms[VAR_8], VAR_10->name);
    if (VAR_3->reject_unknown)
     goto err;
    VAR_9 = 1;
   }

   VAR_8++;
  }
  VAR_11->num_perms = VAR_8;
 }

 if (VAR_9)
  FUNC_2("SELinux: the above unknown classes and permissions will be %s\n",
         VAR_3->allow_unknown ? "allowed" : "denied");

 VAR_5->size = VAR_6;
 return 0;
err:
 FUNC_1(VAR_5->mapping);
 VAR_5->mapping = ((void*)0);
 return -VAR_0;
}
