
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct aa_revision* private_data; } ;
struct aa_revision {scalar_t__ last_read; TYPE_1__* ns; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {scalar_t__ revision; int lock; int wait; int level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t FUNC_3(struct file *VAR_2, poll_table *VAR_3)
{
 struct aa_revision *VAR_4 = VAR_2->private_data;
 __poll_t VAR_5 = 0;

 if (VAR_4) {
  FUNC_0(&VAR_4->ns->lock, VAR_4->ns->level);
  FUNC_2(VAR_2, &VAR_4->ns->wait, VAR_3);
  if (VAR_4->last_read < VAR_4->ns->revision)
   VAR_5 |= VAR_0 | VAR_1;
  FUNC_1(&VAR_4->ns->lock);
 }

 return VAR_5;
}
