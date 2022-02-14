
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int hardware; int* image; int mce_mutex; int reg_lock; int single_dma; } ;
struct snd_pcm_hw_params {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_wss*) ;
 int FUNC_4 (struct snd_wss*) ;
 int FUNC_5 (struct snd_wss*,size_t,unsigned char) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct snd_wss *VAR_12,
           struct snd_pcm_hw_params *VAR_13,
           unsigned char VAR_14)
{
 unsigned long VAR_15;
 int VAR_16 = 1;

 FUNC_0(&VAR_12->mce_mutex);
 if (VAR_12->hardware == VAR_8 ||
     (VAR_12->hardware & VAR_9)) {
  FUNC_6(&VAR_12->reg_lock, VAR_15);
  if ((VAR_12->image[VAR_4] & 0x0f) == (VAR_14 & 0x0f)) {
   FUNC_5(VAR_12, VAR_2,
        VAR_12->image[VAR_2] | 0x10);
   VAR_12->image[VAR_4] = VAR_14;
   FUNC_5(VAR_12, VAR_4,
        VAR_12->image[VAR_4]);
   FUNC_5(VAR_12, VAR_2,
        VAR_12->image[VAR_2] &= ~0x10);
   FUNC_8(100);
   VAR_16 = 0;
  }
  FUNC_7(&VAR_12->reg_lock, VAR_15);
 } else if (VAR_12->hardware == VAR_7) {
  unsigned VAR_17 = FUNC_2(VAR_13);
  FUNC_6(&VAR_12->reg_lock, VAR_15);
  FUNC_5(VAR_12, VAR_4, (VAR_14 & 0xf0));
  FUNC_5(VAR_12, VAR_1, (VAR_17 >> 8) & 0xff);
  FUNC_5(VAR_12, VAR_0, VAR_17 & 0xff);
  VAR_16 = 0;
  FUNC_7(&VAR_12->reg_lock, VAR_15);
 }
 if (VAR_16) {
  FUNC_4(VAR_12);
  FUNC_6(&VAR_12->reg_lock, VAR_15);
  if (VAR_12->hardware != VAR_10 && !VAR_12->single_dma) {
   if (VAR_12->image[VAR_3] & VAR_5)
    VAR_14 = (VAR_14 & 0xf0) |
           (VAR_12->image[VAR_6] & 0x0f);
  } else {
   VAR_12->image[VAR_4] = VAR_14;
  }
  FUNC_5(VAR_12, VAR_4, VAR_14);
  FUNC_7(&VAR_12->reg_lock, VAR_15);
  if (VAR_12->hardware == VAR_11)
   FUNC_8(100);
  FUNC_3(VAR_12);
 }
 FUNC_1(&VAR_12->mce_mutex);
}
