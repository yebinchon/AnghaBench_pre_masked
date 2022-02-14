
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_entry {scalar_t__ content; struct proc_dir_entry* p; int size; int mode; int name; TYPE_1__* parent; } ;
struct proc_dir_entry {int dummy; } ;
struct file_operations {int dummy; } ;
struct TYPE_4__ {struct proc_dir_entry* p; } ;
struct TYPE_3__ {struct proc_dir_entry* p; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct proc_dir_entry* FUNC_3 (int ,int ,struct proc_dir_entry*,struct file_operations const*,struct snd_info_entry*) ;
 struct proc_dir_entry* FUNC_4 (int ,int ,struct proc_dir_entry*) ;
 int FUNC_5 (struct proc_dir_entry*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 struct file_operations VAR_4 ;
 struct file_operations VAR_5 ;
 TYPE_2__* VAR_6 ;

__attribute__((used)) static int FUNC_7(struct snd_info_entry *VAR_7)
{
 struct proc_dir_entry *VAR_8, *VAR_9 = ((void*)0);

 if (FUNC_6(!VAR_7))
  return -VAR_1;
 VAR_8 = VAR_7->parent == ((void*)0) ? VAR_6->p : VAR_7->parent->p;
 FUNC_1(&VAR_3);
 if (VAR_7->p || !VAR_8)
  goto unlock;
 if (FUNC_0(VAR_7->mode)) {
  VAR_9 = FUNC_4(VAR_7->name, VAR_7->mode, VAR_8);
  if (!VAR_9) {
   FUNC_2(&VAR_3);
   return -VAR_0;
  }
 } else {
  const struct file_operations *VAR_10;
  if (VAR_7->content == VAR_2)
   VAR_10 = &VAR_4;
  else
   VAR_10 = &VAR_5;
  VAR_9 = FUNC_3(VAR_7->name, VAR_7->mode, VAR_8,
         VAR_10, VAR_7);
  if (!VAR_9) {
   FUNC_2(&VAR_3);
   return -VAR_0;
  }
  FUNC_5(VAR_9, VAR_7->size);
 }
 VAR_7->p = VAR_9;
 unlock:
 FUNC_2(&VAR_3);
 return 0;
}
