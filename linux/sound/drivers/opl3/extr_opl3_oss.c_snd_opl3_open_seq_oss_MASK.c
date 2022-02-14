
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int port; int client; } ;
struct snd_seq_oss_arg {TYPE_1__ addr; struct snd_opl3* private_data; } ;
struct snd_opl3 {int synth_mode; TYPE_2__* oss_chset; } ;
struct TYPE_4__ {int port; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_opl3*) ;
 int FUNC_2 (struct snd_opl3*) ;

__attribute__((used)) static int FUNC_3(struct snd_seq_oss_arg *VAR_2, void *VAR_3)
{
 struct snd_opl3 *VAR_4 = VAR_3;
 int VAR_5;

 if (FUNC_0(!VAR_2))
  return -VAR_0;

 if ((VAR_5 = FUNC_1(VAR_4)) < 0)
  return VAR_5;


 VAR_2->private_data = VAR_4;
 VAR_2->addr.client = VAR_4->oss_chset->client;
 VAR_2->addr.port = VAR_4->oss_chset->port;

 if ((VAR_5 = FUNC_2(VAR_4)) < 0)
  return VAR_5;

 VAR_4->synth_mode = VAR_1;
 return 0;
}
