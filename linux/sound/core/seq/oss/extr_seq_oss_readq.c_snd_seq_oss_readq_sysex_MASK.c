
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {int flags; } ;
struct seq_oss_readq {int dummy; } ;
struct readq_sysex_ctx {int dev; struct seq_oss_readq* readq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_seq_event*,int ,struct readq_sysex_ctx*) ;

int FUNC_1(struct seq_oss_readq *VAR_3, int VAR_4,
       struct snd_seq_event *VAR_5)
{
 struct readq_sysex_ctx VAR_6 = {
  .readq = VAR_3,
  .dev = VAR_4
 };

 if ((VAR_5->flags & VAR_0) != VAR_1)
  return 0;
 return FUNC_0(VAR_5, VAR_2, &VAR_6);
}
