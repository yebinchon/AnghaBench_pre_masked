
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padata_sysfs_entry {int (* store ) (struct padata_instance*,struct attribute*,char const*,size_t) ;scalar_t__ show; } ;
struct padata_instance {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct padata_sysfs_entry* FUNC_0 (struct attribute*) ;
 struct padata_instance* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct padata_instance*,struct attribute*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1, struct attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct padata_instance *VAR_5;
 struct padata_sysfs_entry *VAR_6;
 ssize_t VAR_7 = -VAR_0;

 VAR_5 = FUNC_1(VAR_1);
 VAR_6 = FUNC_0(VAR_2);
 if (VAR_6->show)
  VAR_7 = VAR_6->store(VAR_5, VAR_2, VAR_3, VAR_4);

 return VAR_7;
}
