
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_minor {int type; int card; int device; struct device* dev; struct snd_card* card_ptr; void* private_data; struct file_operations const* f_ops; } ;
struct snd_card {int number; } ;
struct file_operations {int dummy; } ;
struct device {int devt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct snd_minor*) ;
 struct snd_minor* FUNC_3 (int,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,struct snd_card*,int) ;
 struct snd_minor** VAR_4 ;
 int VAR_5 ;

int FUNC_8(int VAR_6, struct snd_card *VAR_7, int VAR_8,
   const struct file_operations *VAR_9,
   void *VAR_10, struct device *VAR_11)
{
 int VAR_12;
 int VAR_13 = 0;
 struct snd_minor *VAR_14;

 if (FUNC_6(!VAR_11))
  return -VAR_0;

 VAR_14 = FUNC_3(sizeof *VAR_14, VAR_2);
 if (VAR_14 == ((void*)0))
  return -VAR_1;
 VAR_14->type = VAR_6;
 VAR_14->card = VAR_7 ? VAR_7->number : -1;
 VAR_14->device = VAR_8;
 VAR_14->f_ops = VAR_9;
 VAR_14->private_data = VAR_10;
 VAR_14->card_ptr = VAR_7;
 FUNC_4(&VAR_5);
 VAR_12 = FUNC_7(VAR_6, VAR_7, VAR_8);
 if (VAR_12 < 0) {
  VAR_13 = VAR_12;
  goto error;
 }

 VAR_14->dev = VAR_11;
 VAR_11->devt = FUNC_0(VAR_3, VAR_12);
 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13 < 0)
  goto error;

 VAR_4[VAR_12] = VAR_14;
 error:
 FUNC_5(&VAR_5);
 if (VAR_13 < 0)
  FUNC_2(VAR_14);
 return VAR_13;
}
