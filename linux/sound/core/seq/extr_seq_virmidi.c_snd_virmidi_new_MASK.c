
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_virmidi_dev {int device; int client; int seq_mode; int filelist; int filelist_lock; int filelist_sem; struct snd_rawmidi* rmidi; struct snd_card* card; } ;
struct snd_rawmidi {int info_flags; int * ops; int private_free; struct snd_virmidi_dev* private_data; int id; int name; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 struct snd_virmidi_dev* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_card*,struct snd_rawmidi*) ;
 int FUNC_5 (struct snd_card*,char*,int,int,int,struct snd_rawmidi**) ;
 int FUNC_6 (struct snd_rawmidi*,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct snd_card *VAR_12, int VAR_13, struct snd_rawmidi **VAR_14)
{
 struct snd_rawmidi *VAR_15;
 struct snd_virmidi_dev *VAR_16;
 int VAR_17;

 *VAR_14 = ((void*)0);
 if ((VAR_17 = FUNC_5(VAR_12, "VirMidi", VAR_13,
       16,
       16,
       &VAR_15)) < 0)
  return VAR_17;
 FUNC_7(VAR_15->name, VAR_15->id);
 VAR_16 = FUNC_2(sizeof(*VAR_16), VAR_1);
 if (VAR_16 == ((void*)0)) {
  FUNC_4(VAR_12, VAR_15);
  return -VAR_0;
 }
 VAR_16->card = VAR_12;
 VAR_16->rmidi = VAR_15;
 VAR_16->device = VAR_13;
 VAR_16->client = -1;
 FUNC_1(&VAR_16->filelist_sem);
 FUNC_3(&VAR_16->filelist_lock);
 FUNC_0(&VAR_16->filelist);
 VAR_16->seq_mode = VAR_7;
 VAR_15->private_data = VAR_16;
 VAR_15->private_free = VAR_8;
 VAR_15->ops = &VAR_9;
 FUNC_6(VAR_15, VAR_5, &VAR_10);
 FUNC_6(VAR_15, VAR_6, &VAR_11);
 VAR_15->info_flags = VAR_3 |
       VAR_4 |
       VAR_2;
 *VAR_14 = VAR_15;
 return 0;
}
