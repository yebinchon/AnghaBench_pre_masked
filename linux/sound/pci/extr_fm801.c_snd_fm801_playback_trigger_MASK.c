
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct fm801 {int ply_ctrl; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (struct fm801*,int ,int) ;
 int FUNC_1 () ;
 struct fm801* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7,
          int VAR_8)
{
 struct fm801 *VAR_9 = FUNC_2(VAR_7);

 FUNC_3(&VAR_9->reg_lock);
 switch (VAR_8) {
 case 130:
  VAR_9->ply_ctrl &= ~(VAR_1 |
         VAR_2 |
         VAR_4);
  VAR_9->ply_ctrl |= VAR_5 |
       VAR_3;
  break;
 case 129:
  VAR_9->ply_ctrl &= ~(VAR_5 | VAR_4);
  break;
 case 133:
 case 128:
  VAR_9->ply_ctrl |= VAR_4;
  break;
 case 132:
 case 131:
  VAR_9->ply_ctrl &= ~VAR_4;
  break;
 default:
  FUNC_4(&VAR_9->reg_lock);
  FUNC_1();
  return -VAR_0;
 }
 FUNC_0(VAR_9, VAR_6, VAR_9->ply_ctrl);
 FUNC_4(&VAR_9->reg_lock);
 return 0;
}
