
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct atiixp_modem {int reg_lock; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct atiixp_modem*,int ) ;
 int FUNC_1 (struct atiixp_modem*,int ,unsigned int) ;
 struct atiixp_modem* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct atiixp_modem *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5;

 FUNC_3(&VAR_4->reg_lock);

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_5 &= ~VAR_0;
 VAR_5 |= 0x04 << VAR_1;
 FUNC_1(VAR_4, VAR_2, VAR_5);
 FUNC_4(&VAR_4->reg_lock);
 return 0;
}
