
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill_data {int mtx; int events; int read_wait; } ;
struct file {struct rfkill_data* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_4(struct file *VAR_4, poll_table *VAR_5)
{
 struct rfkill_data *VAR_6 = VAR_4->private_data;
 __poll_t VAR_7 = VAR_1 | VAR_3;

 FUNC_3(VAR_4, &VAR_6->read_wait, VAR_5);

 FUNC_1(&VAR_6->mtx);
 if (!FUNC_0(&VAR_6->events))
  VAR_7 = VAR_0 | VAR_2;
 FUNC_2(&VAR_6->mtx);

 return VAR_7;
}
