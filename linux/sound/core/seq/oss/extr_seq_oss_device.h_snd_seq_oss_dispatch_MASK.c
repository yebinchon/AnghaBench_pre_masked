
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {int dummy; } ;
struct seq_oss_devinfo {int cseq; } ;


 int FUNC_0 (int ,struct snd_seq_event*,int,int) ;

__attribute__((used)) static inline int
FUNC_1(struct seq_oss_devinfo *VAR_0, struct snd_seq_event *VAR_1, int VAR_2, int VAR_3)
{
 return FUNC_0(VAR_0->cseq, VAR_1, VAR_2, VAR_3);
}
