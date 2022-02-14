
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_minor {int type; int card; int device; struct snd_card* card_ptr; void* private_data; struct file_operations const* f_ops; } ;
struct snd_card {scalar_t__ number; } ;
struct file_operations {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_3 (struct snd_minor*) ;
 struct snd_minor* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct file_operations const*,int,struct device*) ;
 struct device* FUNC_8 (struct snd_card*) ;
 int FUNC_9 (int,struct snd_card*,int) ;
 struct snd_minor** VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int) ;

int FUNC_11(int VAR_9, struct snd_card *VAR_10, int VAR_11,
       const struct file_operations *VAR_12, void *VAR_13)
{
 int VAR_14 = FUNC_9(VAR_9, VAR_10, VAR_11);
 int VAR_15;
 struct snd_minor *VAR_16;
 int VAR_17 = FUNC_1(VAR_14);
 int VAR_18 = -1;
 int VAR_19 = -1, VAR_20 = -1;
 struct device *VAR_21 = FUNC_8(VAR_10);

 if (VAR_10 && VAR_10->number >= VAR_4)
  return 0;
 if (VAR_14 < 0)
  return VAR_14;
 VAR_16 = FUNC_4(sizeof(struct snd_minor), VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;
 VAR_16->type = VAR_9;
 VAR_16->card = VAR_10 ? VAR_10->number : -1;
 VAR_16->device = VAR_11;
 VAR_16->f_ops = VAR_12;
 VAR_16->private_data = VAR_13;
 VAR_16->card_ptr = VAR_10;
 FUNC_5(&VAR_8);
 VAR_7[VAR_14] = VAR_16;
 VAR_15 = FUNC_2(VAR_14);
 switch (VAR_15) {
 case 128:
  VAR_18 = FUNC_0(VAR_17, VAR_3);
  break;
 case 130:
  VAR_18 = FUNC_0(VAR_17, VAR_5);
  break;
 case 129:
  VAR_18 = FUNC_0(VAR_17, VAR_6);
  break;
 }
 VAR_19 = FUNC_7(VAR_12, VAR_14, VAR_21);
 if (VAR_19 != VAR_14)
  goto __end;
 if (VAR_18 >= 0) {
  VAR_20 = FUNC_7(VAR_12, VAR_18,
         VAR_21);
  if (VAR_20 != VAR_18)
   goto __end;
  VAR_7[VAR_18] = VAR_16;
 }
 FUNC_6(&VAR_8);
 return 0;

      __end:
       if (VAR_20 >= 0)
        FUNC_10(VAR_20);
       if (VAR_19 >= 0)
        FUNC_10(VAR_19);
 VAR_7[VAR_14] = ((void*)0);
 FUNC_6(&VAR_8);
 FUNC_3(VAR_16);
       return -VAR_0;
}
