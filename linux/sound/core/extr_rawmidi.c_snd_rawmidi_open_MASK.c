
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
struct snd_rawmidi_file {TYPE_4__* output; TYPE_2__* input; } ;
struct snd_rawmidi {struct snd_card* card; int open_mutex; int open_wait; } ;
struct snd_card {int module; scalar_t__ shutdown; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct snd_rawmidi_file* private_data; } ;
struct TYPE_8__ {TYPE_3__* runtime; } ;
struct TYPE_7__ {int oss; } ;
struct TYPE_6__ {TYPE_1__* runtime; } ;
struct TYPE_5__ {int oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,int *) ;
 int VAR_16 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct snd_rawmidi_file*) ;
 struct snd_rawmidi_file* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct snd_rawmidi*,int,unsigned short,struct snd_rawmidi_file*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct snd_card*,struct file*) ;
 int FUNC_15 (struct snd_card*,struct file*) ;
 int FUNC_16 (struct snd_card*) ;
 int FUNC_17 (struct snd_card*,int ) ;
 struct snd_rawmidi* FUNC_18 (int ,int ) ;
 struct snd_rawmidi* FUNC_19 (int ,int ) ;
 int VAR_17 ;
 unsigned short FUNC_20 (struct file*) ;
 int FUNC_21 (struct inode*,struct file*) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_18, struct file *VAR_19)
{
 int VAR_20 = FUNC_1(VAR_18);
 struct snd_card *VAR_21;
 int VAR_22;
 unsigned short VAR_23;
 int VAR_24;
 struct snd_rawmidi *VAR_25;
 struct snd_rawmidi_file *VAR_26 = ((void*)0);
 wait_queue_entry_t VAR_27;

 if ((VAR_19->f_flags & VAR_8) && !(VAR_19->f_flags & VAR_9))
  return -VAR_2;

 VAR_24 = FUNC_21(VAR_18, VAR_19);
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_20 == VAR_17) {
  VAR_25 = FUNC_18(FUNC_2(VAR_18),
           VAR_10);





 } else
  return -VAR_5;

 if (VAR_25 == ((void*)0))
  return -VAR_3;

 if (!FUNC_22(VAR_25->card->module)) {
  FUNC_16(VAR_25->card);
  return -VAR_5;
 }

 FUNC_7(&VAR_25->open_mutex);
 VAR_21 = VAR_25->card;
 VAR_24 = FUNC_14(VAR_21, VAR_19);
 if (VAR_24 < 0)
  goto __error_card;
 VAR_23 = FUNC_20(VAR_19);
 if ((VAR_19->f_flags & VAR_8) || VAR_20 == VAR_14)
  VAR_23 |= VAR_12;
 VAR_26 = FUNC_5(sizeof(*VAR_26), VAR_7);
 if (VAR_26 == ((void*)0)) {
  VAR_24 = -VAR_4;
  goto __error;
 }
 FUNC_3(&VAR_27, VAR_16);
 FUNC_0(&VAR_25->open_wait, &VAR_27);
 while (1) {
  VAR_22 = FUNC_17(VAR_21, VAR_13);
  VAR_24 = FUNC_9(VAR_25, VAR_22, VAR_23, VAR_26);
  if (VAR_24 >= 0)
   break;
  if (VAR_24 == -VAR_0) {
   if (VAR_19->f_flags & VAR_9) {
    VAR_24 = -VAR_1;
    break;
   }
  } else
   break;
  FUNC_12(VAR_15);
  FUNC_8(&VAR_25->open_mutex);
  FUNC_11();
  FUNC_7(&VAR_25->open_mutex);
  if (VAR_25->card->shutdown) {
   VAR_24 = -VAR_3;
   break;
  }
  if (FUNC_13(VAR_16)) {
   VAR_24 = -VAR_6;
   break;
  }
 }
 FUNC_10(&VAR_25->open_wait, &VAR_27);
 if (VAR_24 < 0) {
  FUNC_4(VAR_26);
  goto __error;
 }






 VAR_19->private_data = VAR_26;
 FUNC_8(&VAR_25->open_mutex);
 FUNC_16(VAR_25->card);
 return 0;

 __error:
 FUNC_15(VAR_21, VAR_19);
 __error_card:
 FUNC_8(&VAR_25->open_mutex);
 FUNC_6(VAR_25->card->module);
 FUNC_16(VAR_25->card);
 return VAR_24;
}
