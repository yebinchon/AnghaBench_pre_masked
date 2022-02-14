
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct attribute_group {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kobject*,struct kobject*,char*,int ) ;
 int FUNC_1 (struct kobject*,int *) ;
 int FUNC_2 (struct kobject*) ;
 struct kobject* FUNC_3 (int,int ) ;
 int FUNC_4 (struct kobject*,struct attribute_group const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct kobject *VAR_3, hda_nid_t VAR_4,
      const struct attribute_group *VAR_5,
      struct kobject **VAR_6)
{
 struct kobject *VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 int VAR_8;

 if (!VAR_7)
  return -VAR_0;
 FUNC_1(VAR_7, &VAR_2);
 VAR_8 = FUNC_0(VAR_7, VAR_3, "%02x", VAR_4);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_8 = FUNC_4(VAR_7, VAR_5);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 *VAR_6 = VAR_7;
 return 0;
}
