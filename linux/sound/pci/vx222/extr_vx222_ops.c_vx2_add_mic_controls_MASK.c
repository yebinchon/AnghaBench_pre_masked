
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {scalar_t__ type; int card; } ;
struct snd_vx222 {scalar_t__ mic_level; scalar_t__* input_level; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct snd_vx222*) ;
 struct snd_vx222* FUNC_2 (struct vx_core*) ;
 int FUNC_3 (struct snd_vx222*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct vx_core *VAR_3)
{
 struct snd_vx222 *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_3->type != VAR_0)
  return 0;


 VAR_4->input_level[0] = VAR_4->input_level[1] = 0;
 VAR_4->mic_level = 0;
 FUNC_3(VAR_4);


 if ((VAR_5 = FUNC_0(VAR_3->card, FUNC_1(&VAR_1, VAR_4))) < 0)
  return VAR_5;
 if ((VAR_5 = FUNC_0(VAR_3->card, FUNC_1(&VAR_2, VAR_4))) < 0)
  return VAR_5;

 return 0;
}
