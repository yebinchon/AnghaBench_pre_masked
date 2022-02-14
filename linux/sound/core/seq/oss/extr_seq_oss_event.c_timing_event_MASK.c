
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; int time; } ;
union evrec {int echo; TYPE_1__ t; } ;
typedef int tmp ;
struct snd_seq_event {int dummy; } ;
struct seq_oss_devinfo {int timer; int seq_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (union evrec*,int ,int) ;
 int FUNC_1 (struct seq_oss_devinfo*,union evrec*,struct snd_seq_event*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct seq_oss_devinfo *VAR_3, union evrec *VAR_4, struct snd_seq_event *VAR_5)
{
 switch (VAR_4->t.cmd) {
 case 130:
  if (VAR_3->seq_mode == VAR_2)
   return FUNC_1(VAR_3, VAR_4, VAR_5);
  else {
   union evrec VAR_6;
   FUNC_0(&VAR_6, 0, sizeof(VAR_6));

   VAR_6.echo = (VAR_4->t.time << 8) | VAR_1;
   return FUNC_1(VAR_3, &VAR_6, VAR_5);
  }

 case 129:
  if (VAR_3->seq_mode)
   return FUNC_3(VAR_3->timer);
  return 0;

 case 131:
  if (VAR_3->seq_mode)
   return FUNC_2(VAR_3->timer);
  return 0;

 case 128:
  if (VAR_3->seq_mode)
   return FUNC_4(VAR_3->timer, VAR_4->t.time);
  return 0;
 }

 return -VAR_0;
}
