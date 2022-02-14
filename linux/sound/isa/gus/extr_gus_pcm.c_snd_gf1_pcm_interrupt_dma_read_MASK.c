
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_gus_card {int * pcm_cap_substream; scalar_t__ c_period_size; int c_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_gus_card*,int ) ;
 int FUNC_1 (struct snd_gus_card*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct snd_gus_card * VAR_2)
{
 FUNC_1(VAR_2, VAR_0, 0);
 FUNC_0(VAR_2, VAR_0);
 if (VAR_2->pcm_cap_substream != ((void*)0)) {
  FUNC_2(VAR_2->pcm_cap_substream);
  FUNC_3(VAR_2->pcm_cap_substream, VAR_1);
  VAR_2->c_pos += VAR_2->c_period_size;
  FUNC_4(VAR_2->pcm_cap_substream);
 }
}
