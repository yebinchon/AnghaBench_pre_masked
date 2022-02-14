
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; } ;
struct snd_seq_event {TYPE_1__ source; int queue; } ;
struct snd_seq_client {int accept_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_seq_event*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_3 (int) ;
 int FUNC_4 (struct snd_seq_client*,struct snd_seq_event*,int,int) ;

int FUNC_5(int VAR_3, struct snd_seq_event * VAR_4,
       int VAR_5, int VAR_6)
{
 struct snd_seq_client *VAR_7;
 int VAR_8;

 if (FUNC_1(!VAR_4))
  return -VAR_0;


 VAR_4->queue = VAR_2;
 VAR_4->source.client = VAR_3;

 if (FUNC_0(VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 if (!VAR_7->accept_output)
  VAR_8 = -VAR_1;
 else
  VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_7);
 return VAR_8;
}
