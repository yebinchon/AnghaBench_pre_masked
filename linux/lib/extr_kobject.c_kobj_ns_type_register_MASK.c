
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_ns_type_operations {int type; } ;
typedef enum kobj_ns_type { ____Placeholder_kobj_ns_type } kobj_ns_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct kobj_ns_type_operations const** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(const struct kobj_ns_type_operations *VAR_6)
{
 enum kobj_ns_type VAR_7 = VAR_6->type;
 int VAR_8;

 FUNC_0(&VAR_5);

 VAR_8 = -VAR_1;
 if (VAR_7 >= VAR_2)
  goto out;

 VAR_8 = -VAR_1;
 if (VAR_7 <= VAR_3)
  goto out;

 VAR_8 = -VAR_0;
 if (VAR_4[VAR_7])
  goto out;

 VAR_8 = 0;
 VAR_4[VAR_7] = VAR_6;

out:
 FUNC_1(&VAR_5);
 return VAR_8;
}
