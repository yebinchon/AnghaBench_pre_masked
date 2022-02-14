
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (struct dentry*,struct trace_array*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dentry *VAR_2, struct trace_array *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_0);

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  goto out;

 FUNC_2(&VAR_1);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_1);

 out:
 return VAR_4;
}
