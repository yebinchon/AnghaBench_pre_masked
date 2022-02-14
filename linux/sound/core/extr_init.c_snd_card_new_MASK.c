
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; int ** groups; int release; int class; struct device* parent; } ;
struct snd_card {char* private_data; int number; TYPE_1__ card_dev; struct device* dev; int irq_descr; int ** dev_groups; int remove_sleep; int power_sleep; int files_list; int files_lock; int ctl_files; int controls; int ctl_files_rwlock; int controls_rwsem; int devices; struct module* module; int id; } ;
struct module {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,...) ;
 char* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,int ,struct module*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct snd_card*) ;
 int FUNC_9 (int *,char*,int) ;
 struct snd_card* FUNC_10 (int,int ) ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int ) ;
 scalar_t__ FUNC_16 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (struct snd_card*) ;
 int FUNC_18 (struct snd_card*) ;
 int VAR_12 ;
 int FUNC_19 (struct snd_card*) ;
 int FUNC_20 (int ,int,char*,char*,char*) ;
 int VAR_13 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,char const*,int) ;
 scalar_t__ FUNC_23 (int,int ) ;

int FUNC_24(struct device *VAR_14, int VAR_15, const char *VAR_16,
      struct module *VAR_17, int VAR_18,
      struct snd_card **VAR_19)
{
 struct snd_card *VAR_20;
 int VAR_21;

 if (FUNC_16(!VAR_19))
  return -VAR_1;
 *VAR_19 = ((void*)0);

 if (VAR_18 < 0)
  VAR_18 = 0;
 VAR_20 = FUNC_10(sizeof(*VAR_20) + VAR_18, VAR_4);
 if (!VAR_20)
  return -VAR_3;
 if (VAR_18 > 0)
  VAR_20->private_data = (char *)VAR_20 + sizeof(struct snd_card);
 if (VAR_16)
  FUNC_22(VAR_20->id, VAR_16, sizeof(VAR_20->id));
 VAR_21 = 0;
 FUNC_11(&VAR_10);
 if (VAR_15 < 0)
  VAR_15 = FUNC_5(VAR_15, VAR_8, VAR_17);
 if (VAR_15 < 0)
  VAR_15 = FUNC_5(VAR_15, VAR_7, VAR_17);
 if (VAR_15 < 0)
  VAR_21 = -VAR_2;
 else if (VAR_15 < VAR_12) {
  if (FUNC_23(VAR_15, VAR_11))
   VAR_21 = -VAR_0;
 } else if (VAR_15 >= VAR_5)
  VAR_21 = -VAR_2;
 if (VAR_21 < 0) {
  FUNC_12(&VAR_10);
  FUNC_2(VAR_14, "cannot find the slot for index %d (range 0-%i), error: %d\n",
    VAR_15, VAR_12 - 1, VAR_21);
  FUNC_8(VAR_20);
  return VAR_21;
 }
 FUNC_15(VAR_15, VAR_11);
 if (VAR_15 >= VAR_12)
  VAR_12 = VAR_15 + 1;
 FUNC_12(&VAR_10);
 VAR_20->dev = VAR_14;
 VAR_20->number = VAR_15;
 VAR_20->module = VAR_17;
 FUNC_0(&VAR_20->devices);
 FUNC_6(&VAR_20->controls_rwsem);
 FUNC_14(&VAR_20->ctl_files_rwlock);
 FUNC_0(&VAR_20->controls);
 FUNC_0(&VAR_20->ctl_files);
 FUNC_21(&VAR_20->files_lock);
 FUNC_0(&VAR_20->files_list);



 FUNC_7(&VAR_20->remove_sleep);

 FUNC_4(&VAR_20->card_dev);
 VAR_20->card_dev.parent = VAR_14;
 VAR_20->card_dev.class = VAR_13;
 VAR_20->card_dev.release = VAR_9;
 VAR_20->card_dev.groups = VAR_20->dev_groups;
 VAR_20->dev_groups[0] = &VAR_6;
 VAR_21 = FUNC_9(&VAR_20->card_dev.kobj, "card%d", VAR_15);
 if (VAR_21 < 0)
  goto __error;

 FUNC_20(VAR_20->irq_descr, sizeof(VAR_20->irq_descr), "%s:%s",
   FUNC_1(VAR_20->dev), FUNC_3(&VAR_20->card_dev));



 VAR_21 = FUNC_17(VAR_20);
 if (VAR_21 < 0) {
  FUNC_2(VAR_14, "unable to register control minors\n");
  goto __error;
 }
 VAR_21 = FUNC_19(VAR_20);
 if (VAR_21 < 0) {
  FUNC_2(VAR_14, "unable to create card info\n");
  goto __error_ctl;
 }
 *VAR_19 = VAR_20;
 return 0;

      __error_ctl:
 FUNC_18(VAR_20);
      __error:
 FUNC_13(&VAR_20->card_dev);
   return VAR_21;
}
