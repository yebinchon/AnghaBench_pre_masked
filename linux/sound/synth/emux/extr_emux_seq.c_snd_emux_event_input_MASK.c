
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {int dummy; } ;
struct snd_emux_port {int chset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,struct snd_seq_event*,int *) ;

int
FUNC_2(struct snd_seq_event *VAR_2, int VAR_3, void *VAR_4,
       int VAR_5, int VAR_6)
{
 struct snd_emux_port *VAR_7;

 VAR_7 = VAR_4;
 if (FUNC_0(!VAR_7 || !VAR_2))
  return -VAR_0;

 FUNC_1(&VAR_1, VAR_2, &VAR_7->chset);

 return 0;
}
