
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct cmipci {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cmipci*,int ,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct cmipci* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct cmipci *VAR_5 = FUNC_2(VAR_4);

 FUNC_3(&VAR_5->reg_lock);
 FUNC_0(VAR_5, VAR_1, VAR_0);
 FUNC_0(VAR_5, VAR_2, VAR_3);
 FUNC_4(&VAR_5->reg_lock);

 return FUNC_1(VAR_4);
}
