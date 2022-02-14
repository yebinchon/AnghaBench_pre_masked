
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int ref_count; int pcm_release; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct snd_pcm {int dummy; } ;
struct file {struct snd_pcm_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_pcm_file* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm*,int,struct file*,struct snd_pcm_substream**) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3,
        struct snd_pcm *VAR_4,
        int VAR_5)
{
 struct snd_pcm_file *VAR_6;
 struct snd_pcm_substream *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_7);
  return -VAR_0;
 }
 VAR_6->substream = VAR_7;
 if (VAR_7->ref_count == 1)
  VAR_7->pcm_release = VAR_2;
 VAR_3->private_data = VAR_6;

 return 0;
}
