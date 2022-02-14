
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_oss_reg {struct snd_emux* private_data; int oper; int nvoices; int subtype; int type; } ;
struct snd_seq_device {int name; } ;
struct snd_emux {int card; int max_voices; int name; struct snd_seq_device* oss_synth; } ;


 int VAR_0 ;
 struct snd_seq_oss_reg* FUNC_0 (struct snd_seq_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct snd_seq_device*) ;
 scalar_t__ FUNC_2 (int ,int,int ,int,struct snd_seq_device**) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(struct snd_emux *VAR_4)
{
 struct snd_seq_oss_reg *VAR_5;
 struct snd_seq_device *VAR_6;


 if (FUNC_2(VAR_4->card, 1, VAR_1,
          sizeof(struct snd_seq_oss_reg), &VAR_6) < 0)
  return;

 VAR_4->oss_synth = VAR_6;
 FUNC_3(VAR_6->name, VAR_4->name);
 VAR_5 = FUNC_0(VAR_6);
 VAR_5->type = VAR_2;
 VAR_5->subtype = VAR_0;
 VAR_5->nvoices = VAR_4->max_voices;
 VAR_5->oper = VAR_3;
 VAR_5->private_data = VAR_4;


 FUNC_1(VAR_4->card, VAR_6);
}
