
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {struct dentry* percpu_dir; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (int,char*,int) ;
 struct dentry* FUNC_2 (char*,struct dentry*) ;
 struct dentry* FUNC_3 (struct trace_array*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct trace_array *VAR_0, int VAR_1)
{
 struct dentry *VAR_2;

 if (VAR_0->percpu_dir)
  return VAR_0->percpu_dir;

 VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  return ((void*)0);

 VAR_0->percpu_dir = FUNC_2("per_cpu", VAR_2);

 FUNC_1(!VAR_0->percpu_dir,
    "Could not create tracefs directory 'per_cpu/%d'\n", VAR_1);

 return VAR_0->percpu_dir;
}
