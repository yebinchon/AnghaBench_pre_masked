
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_seq_oss_arg {struct snd_emux_port* private_data; } ;
struct TYPE_2__ {int port; int client; } ;
struct snd_emux_port {TYPE_1__ chset; struct snd_emux* emu; } ;
struct snd_emux {int sflist; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_emux*) ;
 int FUNC_3 (struct snd_emux_port*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct snd_seq_oss_arg *VAR_1)
{
 struct snd_emux *VAR_2;
 struct snd_emux_port *VAR_3;

 if (FUNC_1(!VAR_1))
  return -VAR_0;
 VAR_3 = VAR_1->private_data;
 if (FUNC_1(!VAR_3))
  return -VAR_0;

 VAR_2 = VAR_3->emu;
 if (FUNC_1(!VAR_2))
  return -VAR_0;

 FUNC_3(VAR_3);
 FUNC_5(VAR_2->sflist, FUNC_0(VAR_3->chset.port));
 FUNC_4(VAR_3->chset.client, VAR_3->chset.port);
 FUNC_2(VAR_2);

 return 0;
}
