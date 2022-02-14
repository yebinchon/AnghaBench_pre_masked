
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {int number; int running; } ;
struct snd_trident {scalar_t__ device; int reg_lock; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int buffer_size; struct snd_trident_voice* private_data; } ;
typedef unsigned int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct snd_trident* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(struct snd_pcm_substream *VAR_4)
{
 struct snd_trident *VAR_5 = FUNC_4(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct snd_trident_voice *VAR_7 = VAR_6->private_data;
 unsigned int VAR_8;

 if (!VAR_7->running)
  return 0;

 FUNC_5(&VAR_5->reg_lock);

 FUNC_3(VAR_7->number, FUNC_0(VAR_5, VAR_2));

 if (VAR_5->device != VAR_3) {
  VAR_8 = FUNC_2(FUNC_0(VAR_5, VAR_0 + 2));
 } else {
  VAR_8 = (unsigned int) FUNC_1(FUNC_0(VAR_5, VAR_1)) & 0x00ffffff;
 }

 FUNC_6(&VAR_5->reg_lock);

 if (VAR_8 >= VAR_6->buffer_size)
  VAR_8 = 0;

 return VAR_8;
}
