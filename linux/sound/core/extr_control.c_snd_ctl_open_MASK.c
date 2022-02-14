
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_file {int* preferred_subdevice; int list; int pid; struct snd_card* card; int read_lock; int change_sleep; int events; } ;
struct snd_card {int module; int ctl_files_rwlock; int ctl_files; } ;
struct inode {int dummy; } ;
struct file {struct snd_ctl_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 struct snd_ctl_file* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct snd_card*,struct file*) ;
 int FUNC_8 (struct snd_card*,struct file*) ;
 int FUNC_9 (struct snd_card*) ;
 struct snd_card* FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*,struct file*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_7, struct file *VAR_8)
{
 unsigned long VAR_9;
 struct snd_card *VAR_10;
 struct snd_ctl_file *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = FUNC_12(VAR_7, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_10 = FUNC_10(FUNC_2(VAR_7), VAR_4);
 if (!VAR_10) {
  VAR_13 = -VAR_1;
  goto __error1;
 }
 VAR_13 = FUNC_7(VAR_10, VAR_8);
 if (VAR_13 < 0) {
  VAR_13 = -VAR_1;
  goto __error1;
 }
 if (!FUNC_14(VAR_10->module)) {
  VAR_13 = -VAR_0;
  goto __error2;
 }
 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_3);
 if (VAR_11 == ((void*)0)) {
  VAR_13 = -VAR_2;
  goto __error;
 }
 FUNC_0(&VAR_11->events);
 FUNC_3(&VAR_11->change_sleep);
 FUNC_11(&VAR_11->read_lock);
 VAR_11->card = VAR_10;
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  VAR_11->preferred_subdevice[VAR_12] = -1;
 VAR_11->pid = FUNC_1(FUNC_13(VAR_6));
 VAR_8->private_data = VAR_11;
 FUNC_15(&VAR_10->ctl_files_rwlock, VAR_9);
 FUNC_5(&VAR_11->list, &VAR_10->ctl_files);
 FUNC_16(&VAR_10->ctl_files_rwlock, VAR_9);
 FUNC_9(VAR_10);
 return 0;

      __error:
 FUNC_6(VAR_10->module);
      __error2:
 FUNC_8(VAR_10, VAR_8);
      __error1:
 if (VAR_10)
  FUNC_9(VAR_10);
       return VAR_13;
}
