
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int dummy; } ;
struct inode {struct trace_array* i_private; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*,int ,struct trace_array*) ;
 int FUNC_1 (struct trace_array*) ;
 int FUNC_2 (struct trace_array*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 struct trace_array *VAR_3 = VAR_1->i_private;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0, VAR_1->i_private);
 if (VAR_4 < 0)
  FUNC_1(VAR_3);

 return VAR_4;
}
