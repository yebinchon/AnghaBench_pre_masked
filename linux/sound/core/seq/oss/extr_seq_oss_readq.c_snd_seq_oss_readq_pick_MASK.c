
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union evrec {int dummy; } evrec ;
struct seq_oss_readq {scalar_t__ qlen; size_t head; int * q; } ;


 int VAR_0 ;
 int FUNC_0 (union evrec*,int *,int) ;

int
FUNC_1(struct seq_oss_readq *VAR_1, union evrec *VAR_2)
{
 if (VAR_1->qlen == 0)
  return -VAR_0;
 FUNC_0(VAR_2, &VAR_1->q[VAR_1->head], sizeof(*VAR_2));
 return 0;
}
