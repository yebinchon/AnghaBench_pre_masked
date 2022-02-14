
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int runtime; } ;
struct adau1977 {int slot_width; int max_master_fs; scalar_t__ master; int constraints; scalar_t__ right_j; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ) ;
 struct adau1977* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6,
 struct snd_soc_dai *VAR_7)
{
 struct adau1977 *VAR_8 = FUNC_3(VAR_7->component);
 u64 VAR_9 = 0;

 if (VAR_8->slot_width == 16)
  VAR_9 = VAR_1 | VAR_0;
 else if (VAR_8->right_j || VAR_8->slot_width == 24)
  VAR_9 = VAR_1 | VAR_0 |
   VAR_3 | VAR_2;

 FUNC_0(VAR_6->runtime, 0,
  VAR_5, &VAR_8->constraints);

 if (VAR_8->master)
  FUNC_2(VAR_6->runtime,
   VAR_5, 8000, VAR_8->max_master_fs);

 if (VAR_9 != 0)
  FUNC_1(VAR_6->runtime,
   VAR_4, VAR_9);

 return 0;
}
