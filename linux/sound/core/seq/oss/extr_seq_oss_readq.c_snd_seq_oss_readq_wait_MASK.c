
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_readq {scalar_t__ qlen; scalar_t__ head; scalar_t__ tail; int pre_event_timeout; int midi_sleep; } ;


 int FUNC_0 (int ,int,int ) ;

void
FUNC_1(struct seq_oss_readq *VAR_0)
{
 FUNC_0(VAR_0->midi_sleep,
      (VAR_0->qlen > 0 || VAR_0->head == VAR_0->tail),
      VAR_0->pre_event_timeout);
}
