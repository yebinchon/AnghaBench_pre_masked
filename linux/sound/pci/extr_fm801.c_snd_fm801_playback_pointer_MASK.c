
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct fm801 {int ply_ctrl; int ply_pos; int ply_count; size_t ply_size; int reg_lock; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct fm801*,int ) ;
 struct fm801* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct fm801 *VAR_5 = FUNC_2(VAR_4);
 size_t VAR_6;

 if (!(VAR_5->ply_ctrl & VAR_1))
  return 0;
 FUNC_3(&VAR_5->reg_lock);
 VAR_6 = VAR_5->ply_pos + (VAR_5->ply_count - 1) - FUNC_1(VAR_5, VAR_3);
 if (FUNC_1(VAR_5, VAR_2) & VAR_0) {
  VAR_6 += VAR_5->ply_count;
  VAR_6 %= VAR_5->ply_size;
 }
 FUNC_4(&VAR_5->reg_lock);
 return FUNC_0(VAR_4->runtime, VAR_6);
}
