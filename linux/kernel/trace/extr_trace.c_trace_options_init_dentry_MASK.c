
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {struct dentry* options; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*) ;
 struct dentry* FUNC_2 (char*,struct dentry*) ;
 struct dentry* FUNC_3 (struct trace_array*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct trace_array *VAR_0)
{
 struct dentry *VAR_1;

 if (VAR_0->options)
  return VAR_0->options;

 VAR_1 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_1))
  return ((void*)0);

 VAR_0->options = FUNC_2("options", VAR_1);
 if (!VAR_0->options) {
  FUNC_1("Could not create tracefs directory 'options'\n");
  return ((void*)0);
 }

 return VAR_0->options;
}
