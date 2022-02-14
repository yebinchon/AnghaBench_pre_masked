
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int * trace_flags_index; } ;
struct dentry {int dummy; } ;


 struct dentry* FUNC_0 (char const*,int,struct dentry*,void*,int *) ;
 int VAR_0 ;
 struct dentry* FUNC_1 (struct trace_array*) ;

__attribute__((used)) static struct dentry *
FUNC_2(struct trace_array *VAR_1,
         const char *VAR_2, long VAR_3)
{
 struct dentry *VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4)
  return ((void*)0);

 return FUNC_0(VAR_2, 0644, VAR_4,
     (void *)&VAR_1->trace_flags_index[VAR_3],
     &VAR_0);
}
