
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hwdep {struct snd_dg00x* private_data; } ;
struct snd_dg00x {int lock; scalar_t__ msg; scalar_t__ dev_lock_changed; int hwdep_wait; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct snd_hwdep *VAR_2, struct file *VAR_3,
          poll_table *VAR_4)
{
 struct snd_dg00x *VAR_5 = VAR_2->private_data;
 __poll_t VAR_6;

 FUNC_0(VAR_3, &VAR_5->hwdep_wait, VAR_4);

 FUNC_1(&VAR_5->lock);
 if (VAR_5->dev_lock_changed || VAR_5->msg)
  VAR_6 = VAR_0 | VAR_1;
 else
  VAR_6 = 0;
 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
