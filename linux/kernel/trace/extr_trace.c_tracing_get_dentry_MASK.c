
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int flags; struct dentry* dir; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct dentry *FUNC_2(struct trace_array *VAR_2)
{
 if (FUNC_1(!VAR_2->dir))
  return FUNC_0(-VAR_0);


 if (VAR_2->flags & VAR_1)
  return ((void*)0);


 return VAR_2->dir;
}
