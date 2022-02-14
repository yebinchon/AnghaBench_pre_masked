
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int* image; int reg_lock; } ;
struct snd_pcm_hw_params {int rate_den; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int ) ;
 int FUNC_1 (struct snd_wss*,int ,unsigned char) ;
 int FUNC_2 (struct snd_wss*,size_t,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_wss *VAR_3,
          struct snd_pcm_hw_params *VAR_4,
          unsigned char VAR_5)
{
 unsigned long VAR_6;
 unsigned char VAR_7 = FUNC_0(VAR_4->rate_den);

 FUNC_3(&VAR_3->reg_lock, VAR_6);

 FUNC_2(VAR_3, VAR_0,
      VAR_3->image[VAR_0] | 0x20);
 FUNC_2(VAR_3, VAR_1, VAR_5 & 0xf0);
 FUNC_2(VAR_3, VAR_0,
      VAR_3->image[VAR_0] & ~0x20);
 FUNC_1(VAR_3, VAR_2, VAR_7);
 FUNC_4(&VAR_3->reg_lock, VAR_6);
}
