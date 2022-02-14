
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_oss_setup {scalar_t__ disable; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
struct snd_pcm {int info_flags; TYPE_1__* streams; } ;
struct file {int f_mode; struct snd_pcm_oss_file* private_data; int f_flags; } ;
typedef int fmode_t ;
struct TYPE_2__ {int substream_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct snd_pcm_oss_file* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_pcm*,int,struct file*,struct snd_pcm_substream**) ;
 int FUNC_2 (struct snd_pcm_substream*,struct snd_pcm_oss_setup*,int) ;
 int FUNC_3 (struct snd_pcm_oss_file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8,
     struct snd_pcm *VAR_9,
     struct snd_pcm_oss_file **VAR_10,
     int VAR_11,
     struct snd_pcm_oss_setup *VAR_12)
{
 int VAR_13, VAR_14;
 struct snd_pcm_oss_file *VAR_15;
 struct snd_pcm_substream *VAR_16;
 fmode_t VAR_17 = VAR_8->f_mode;

 if (VAR_10)
  *VAR_10 = ((void*)0);

 VAR_15 = FUNC_0(sizeof(*VAR_15), VAR_4);
 if (VAR_15 == ((void*)0))
  return -VAR_1;

 if ((VAR_17 & (VAR_3|VAR_2)) == (VAR_3|VAR_2) &&
     (VAR_9->info_flags & VAR_6))
  VAR_17 = VAR_3;

 VAR_8->f_flags &= ~VAR_5;
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  if (VAR_12[VAR_13].disable)
   continue;
  if (! VAR_9->streams[VAR_13].substream_count)
   continue;
  if (VAR_13 == VAR_7) {
   if (! (VAR_17 & VAR_3))
    continue;
  } else {
   if (! (VAR_17 & VAR_2))
    continue;
  }
  VAR_14 = FUNC_1(VAR_9, VAR_13, VAR_8, &VAR_16);
  if (VAR_14 < 0) {
   FUNC_3(VAR_15);
   return VAR_14;
  }

  VAR_15->streams[VAR_13] = VAR_16;
  FUNC_2(VAR_16, &VAR_12[VAR_13], VAR_11);
 }

 if (!VAR_15->streams[0] && !VAR_15->streams[1]) {
  FUNC_3(VAR_15);
  return -VAR_0;
 }

 VAR_8->private_data = VAR_15;
 if (VAR_10)
  *VAR_10 = VAR_15;
 return 0;
}
