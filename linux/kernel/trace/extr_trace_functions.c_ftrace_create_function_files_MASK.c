
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int flags; int ops; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (int ,struct dentry*) ;

int FUNC_2(struct trace_array *VAR_1,
     struct dentry *VAR_2)
{
 int VAR_3;





 if (VAR_1->flags & VAR_0)
  return 0;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_1->ops, VAR_2);

 return 0;
}
