
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct aa_ns {int sub_ns; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct aa_ns* FUNC_1 (int ) ;
 struct aa_ns* FUNC_2 (struct aa_ns*,char const*,struct dentry*) ;
 int FUNC_3 (int *,char const*) ;
 struct aa_ns* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

struct aa_ns *FUNC_6(struct aa_ns *VAR_1, const char *VAR_2,
         struct dentry *VAR_3)
{
 struct aa_ns *VAR_4;

 FUNC_0(!FUNC_5(&VAR_1->lock));



 VAR_4 = FUNC_4(FUNC_3(&VAR_1->sub_ns, VAR_2));
 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_1(-VAR_0);


 return VAR_4;
}
