
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct trace_array*,scalar_t__,int) ;
 struct trace_array VAR_1 ;
 scalar_t__* VAR_2 ;
 struct dentry* FUNC_1 (struct trace_array*) ;

__attribute__((used)) static void FUNC_2(struct trace_array *VAR_3)
{
 struct dentry *VAR_4;
 bool VAR_5 = VAR_3 == &VAR_1;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4)
  return;

 for (VAR_6 = 0; VAR_2[VAR_6]; VAR_6++) {
  if (VAR_5 ||
      !((1 << VAR_6) & VAR_0))
   FUNC_0(VAR_3, VAR_2[VAR_6], VAR_6);
 }
}
