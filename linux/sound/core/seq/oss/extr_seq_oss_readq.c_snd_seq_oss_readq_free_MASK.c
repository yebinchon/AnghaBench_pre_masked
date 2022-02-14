
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_readq {scalar_t__ qlen; int head; int maxlen; } ;



void
FUNC_0(struct seq_oss_readq *VAR_0)
{
 if (VAR_0->qlen > 0) {
  VAR_0->head = (VAR_0->head + 1) % VAR_0->maxlen;
  VAR_0->qlen--;
 }
}
