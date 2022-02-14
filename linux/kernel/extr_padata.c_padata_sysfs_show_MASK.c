
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padata_sysfs_entry {int (* show ) (struct padata_instance*,struct attribute*,char*) ;} ;
struct padata_instance {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct padata_sysfs_entry* FUNC_0 (struct attribute*) ;
 struct padata_instance* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct padata_instance*,struct attribute*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
     struct attribute *VAR_2, char *VAR_3)
{
 struct padata_instance *VAR_4;
 struct padata_sysfs_entry *VAR_5;
 ssize_t VAR_6 = -VAR_0;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5->show)
  VAR_6 = VAR_5->show(VAR_4, VAR_2, VAR_3);

 return VAR_6;
}
