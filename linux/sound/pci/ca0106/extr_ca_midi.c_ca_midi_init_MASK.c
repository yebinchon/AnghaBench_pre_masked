
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi {int info_flags; int private_free; struct snd_ca_midi* private_data; int name; } ;
struct snd_ca_midi {struct snd_rawmidi* rmidi; int output_lock; int input_lock; int open_lock; int interrupt; void* dev_id; int (* get_dev_id_card ) (void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int,int,int,struct snd_rawmidi**) ;
 int FUNC_1 (struct snd_rawmidi*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (void*) ;

int FUNC_5(void *VAR_9, struct snd_ca_midi *VAR_10, int VAR_11, char *VAR_12)
{
 struct snd_rawmidi *VAR_13;
 int VAR_14;

 if ((VAR_14 = FUNC_0(VAR_10->get_dev_id_card(VAR_10->dev_id), VAR_12, VAR_11, 1, 1, &VAR_13)) < 0)
  return VAR_14;

 VAR_10->dev_id = VAR_9;
 VAR_10->interrupt = VAR_6;

 FUNC_2(&VAR_10->open_lock);
 FUNC_2(&VAR_10->input_lock);
 FUNC_2(&VAR_10->output_lock);

 FUNC_3(VAR_13->name, VAR_12);
 FUNC_1(VAR_13, VAR_4, &VAR_7);
 FUNC_1(VAR_13, VAR_3, &VAR_5);
 VAR_13->info_flags |= VAR_2 |
                      VAR_1 |
                      VAR_0;
 VAR_13->private_data = VAR_10;
 VAR_13->private_free = VAR_8;

 VAR_10->rmidi = VAR_13;
 return 0;
}
