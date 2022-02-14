
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {scalar_t__ dir; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*,int *,int ,int *) ;
 int FUNC_4 () ;
 struct trace_array VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;

struct dentry *FUNC_6(void)
{
 struct trace_array *VAR_4 = &VAR_2;


 if (VAR_4->dir)
  return ((void*)0);

 if (FUNC_2(!FUNC_5()) ||
  (FUNC_1(VAR_0) &&
   FUNC_2(!FUNC_4())))
  return FUNC_0(-VAR_1);







 VAR_4->dir = FUNC_3("tracing", ((void*)0),
        VAR_3, ((void*)0));

 return ((void*)0);
}
