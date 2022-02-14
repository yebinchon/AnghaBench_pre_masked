
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chn; int cmd; int parm; int note; int dev; } ;
union evrec {TYPE_1__ v; } ;
struct snd_seq_event {int dummy; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct seq_oss_devinfo*,int ,int,int ,int ,struct snd_seq_event*) ;
 int FUNC_1 (struct seq_oss_devinfo*,int ,int,int ,int ,struct snd_seq_event*) ;
 int FUNC_2 (struct seq_oss_devinfo*,int ,int ,int,int ,int ,struct snd_seq_event*) ;

__attribute__((used)) static int
FUNC_3(struct seq_oss_devinfo *VAR_2, union evrec *VAR_3, struct snd_seq_event *VAR_4)
{
 if (VAR_3->v.chn >= 32)
  return -VAR_0;
 switch (VAR_3->v.cmd) {
 case 128:
  return FUNC_1(VAR_2, VAR_3->v.dev, VAR_3->v.chn, VAR_3->v.note, VAR_3->v.parm, VAR_4);

 case 129:
  return FUNC_0(VAR_2, VAR_3->v.dev, VAR_3->v.chn, VAR_3->v.note, VAR_3->v.parm, VAR_4);

 case 130:
  return FUNC_2(VAR_2, VAR_3->v.dev, VAR_1,
           VAR_3->v.chn, VAR_3->v.note, VAR_3->v.parm, VAR_4);

 }
 return -VAR_0;
}
