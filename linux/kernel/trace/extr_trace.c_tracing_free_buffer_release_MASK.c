
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_array {int trace_flags; } ;
struct inode {struct trace_array* i_private; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_array*) ;
 int FUNC_1 (struct trace_array*) ;
 int FUNC_2 (struct trace_array*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct trace_array *VAR_4 = VAR_2->i_private;


 if (VAR_4->trace_flags & VAR_1)
  FUNC_1(VAR_4);

 FUNC_2(VAR_4, 0, VAR_0);

 FUNC_0(VAR_4);

 return 0;
}
