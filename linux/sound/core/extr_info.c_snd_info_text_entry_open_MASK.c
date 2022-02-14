
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_private_data {struct snd_info_private_data* rbuffer; } ;
struct snd_info_entry {int module; scalar_t__ size; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_info_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_info_private_data**) ;
 int VAR_2 ;
 int FUNC_2 (struct snd_info_private_data*) ;
 struct snd_info_private_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct file*,int ,struct snd_info_private_data*) ;
 int FUNC_8 (struct file*,int ,struct snd_info_private_data*,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4, struct file *VAR_5)
{
 struct snd_info_entry *VAR_6 = FUNC_0(VAR_4);
 struct snd_info_private_data *VAR_7;
 int VAR_8;

 FUNC_5(&VAR_2);
 VAR_8 = FUNC_1(VAR_6, &VAR_7);
 if (VAR_8 < 0)
  goto unlock;

 VAR_7->rbuffer = FUNC_3(sizeof(*VAR_7->rbuffer), VAR_1);
 if (!VAR_7->rbuffer) {
  VAR_8 = -VAR_0;
  goto error;
 }
 if (VAR_6->size)
  VAR_8 = FUNC_8(VAR_5, VAR_3, VAR_7,
           VAR_6->size);
 else
  VAR_8 = FUNC_7(VAR_5, VAR_3, VAR_7);
 if (VAR_8 < 0)
  goto error;
 FUNC_6(&VAR_2);
 return 0;

 error:
 FUNC_2(VAR_7->rbuffer);
 FUNC_2(VAR_7);
 FUNC_4(VAR_6->module);
 unlock:
 FUNC_6(&VAR_2);
 return VAR_8;
}
