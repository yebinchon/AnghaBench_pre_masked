
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int number; int ref_count; int f_flags; int pid; int private_data; struct snd_pcm_runtime* runtime; struct snd_pcm_substream* next; } ;
struct snd_pcm_str {int substream_count; int substream_opened; struct snd_pcm_substream* substream; } ;
struct snd_pcm_runtime {TYPE_1__* status; int tsleep; int sleep; TYPE_1__* control; } ;
struct snd_pcm_mmap_status {int dummy; } ;
struct snd_pcm_mmap_control {int dummy; } ;
struct snd_pcm {int info_flags; int private_data; struct snd_pcm_str* streams; struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct file {int f_flags; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 void* FUNC_2 (size_t,int ) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_1__*,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_pcm_runtime*) ;
 struct snd_pcm_runtime* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_1__*,int ,size_t) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct snd_card*,int ) ;
 int FUNC_11 (int ) ;

int FUNC_12(struct snd_pcm *VAR_14, int VAR_15,
        struct file *VAR_16,
        struct snd_pcm_substream **VAR_17)
{
 struct snd_pcm_str * VAR_18;
 struct snd_pcm_substream *VAR_19;
 struct snd_pcm_runtime *VAR_20;
 struct snd_card *VAR_21;
 int VAR_22;
 size_t VAR_23;

 if (FUNC_9(!VAR_14 || !VAR_17))
  return -VAR_5;
 if (FUNC_9(VAR_15 != VAR_11 &&
         VAR_15 != VAR_10))
  return -VAR_2;
 *VAR_17 = ((void*)0);
 VAR_18 = &VAR_14->streams[VAR_15];
 if (VAR_18->substream == ((void*)0) || VAR_18->substream_count == 0)
  return -VAR_3;

 VAR_21 = VAR_14->card;
 VAR_22 = FUNC_10(VAR_21, VAR_12);

 if (VAR_14->info_flags & VAR_8) {
  int VAR_24 = !VAR_15;

  for (VAR_19 = VAR_14->streams[VAR_24].substream; VAR_19;
       VAR_19 = VAR_19->next) {
   if (FUNC_1(VAR_19))
    return -VAR_0;
  }
 }

 if (VAR_16->f_flags & VAR_7) {
  if (VAR_22 < 0) {
   if (VAR_18->substream_count > 1)
    return -VAR_2;
   VAR_19 = VAR_18->substream;
  } else {
   for (VAR_19 = VAR_18->substream; VAR_19;
        VAR_19 = VAR_19->next)
    if (VAR_19->number == VAR_22)
     break;
  }
  if (! VAR_19)
   return -VAR_3;
  if (! FUNC_1(VAR_19))
   return -VAR_1;
  VAR_19->ref_count++;
  *VAR_17 = VAR_19;
  return 0;
 }

 for (VAR_19 = VAR_18->substream; VAR_19; VAR_19 = VAR_19->next) {
  if (!FUNC_1(VAR_19) &&
      (VAR_22 == -1 ||
       VAR_19->number == VAR_22))
   break;
 }
 if (VAR_19 == ((void*)0))
  return -VAR_0;

 VAR_20 = FUNC_7(sizeof(*VAR_20), VAR_6);
 if (VAR_20 == ((void*)0))
  return -VAR_4;

 VAR_23 = FUNC_0(sizeof(struct snd_pcm_mmap_status));
 VAR_20->status = FUNC_2(VAR_23, VAR_6);
 if (VAR_20->status == ((void*)0)) {
  FUNC_6(VAR_20);
  return -VAR_4;
 }
 FUNC_8(VAR_20->status, 0, VAR_23);

 VAR_23 = FUNC_0(sizeof(struct snd_pcm_mmap_control));
 VAR_20->control = FUNC_2(VAR_23, VAR_6);
 if (VAR_20->control == ((void*)0)) {
  FUNC_3(VAR_20->status,
          FUNC_0(sizeof(struct snd_pcm_mmap_status)));
  FUNC_6(VAR_20);
  return -VAR_4;
 }
 FUNC_8(VAR_20->control, 0, VAR_23);

 FUNC_5(&VAR_20->sleep);
 FUNC_5(&VAR_20->tsleep);

 VAR_20->status->state = VAR_9;

 VAR_19->runtime = VAR_20;
 VAR_19->private_data = VAR_14->private_data;
 VAR_19->ref_count = 1;
 VAR_19->f_flags = VAR_16->f_flags;
 VAR_19->pid = FUNC_4(FUNC_11(VAR_13));
 VAR_18->substream_opened++;
 *VAR_17 = VAR_19;
 return 0;
}
