
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_params {int dummy; } ;
struct snd_cs4231 {int* image; int mce_mutex; int lock; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_cs4231*,int) ;
 int FUNC_3 (struct snd_cs4231*) ;
 int FUNC_4 (struct snd_cs4231*) ;
 int FUNC_5 (struct snd_cs4231*,size_t,unsigned char) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct snd_cs4231 *VAR_4,
          struct snd_pcm_hw_params *VAR_5,
          unsigned char VAR_6)
{
 unsigned long VAR_7;

 FUNC_0(&VAR_4->mce_mutex);
 FUNC_2(VAR_4, 1);

 FUNC_4(VAR_4);

 FUNC_6(&VAR_4->lock, VAR_7);
 if (!(VAR_4->image[VAR_0] & VAR_1)) {
  FUNC_5(VAR_4, VAR_2,
          ((VAR_4->image[VAR_2]) & 0xf0) |
          (VAR_6 & 0x0f));
  FUNC_7(&VAR_4->lock, VAR_7);
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
  FUNC_6(&VAR_4->lock, VAR_7);
 }
 FUNC_5(VAR_4, VAR_3, VAR_6);
 FUNC_7(&VAR_4->lock, VAR_7);

 FUNC_3(VAR_4);

 FUNC_2(VAR_4, 0);
 FUNC_1(&VAR_4->mce_mutex);
}
