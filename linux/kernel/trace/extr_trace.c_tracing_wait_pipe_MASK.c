
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int mutex; scalar_t__ pos; int tr; } ;
struct file {int f_flags; struct trace_iterator* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct trace_iterator*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct trace_iterator*,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2)
{
 struct trace_iterator *VAR_3 = VAR_2->private_data;
 int VAR_4;

 while (FUNC_2(VAR_3)) {

  if ((VAR_2->f_flags & VAR_1)) {
   return -VAR_0;
  }
  if (!FUNC_3(VAR_3->tr) && VAR_3->pos)
   break;

  FUNC_1(&VAR_3->mutex);

  VAR_4 = FUNC_4(VAR_3, 0);

  FUNC_0(&VAR_3->mutex);

  if (VAR_4)
   return VAR_4;
 }

 return 1;
}
