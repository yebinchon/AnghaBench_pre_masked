
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_3__ {int overhead; int tsize; int cell_align; int cell_log; int size_log; } ;
struct qdisc_size_table {int* data; TYPE_1__ szopts; } ;
struct TYPE_4__ {int pkt_len; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct sk_buff *VAR_0,
          const struct qdisc_size_table *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = VAR_0->len + VAR_1->szopts.overhead;
 if (FUNC_2(!VAR_1->szopts.tsize))
  goto out;

 VAR_3 = VAR_2 + VAR_1->szopts.cell_align;
 if (FUNC_2(VAR_3 < 0))
  VAR_3 = 0;

 VAR_3 >>= VAR_1->szopts.cell_log;
 if (FUNC_0(VAR_3 < VAR_1->szopts.tsize))
  VAR_2 = VAR_1->data[VAR_3];
 else
  VAR_2 = VAR_1->data[VAR_1->szopts.tsize - 1] *
    (VAR_3 / VAR_1->szopts.tsize) +
    VAR_1->data[VAR_3 % VAR_1->szopts.tsize];

 VAR_2 <<= VAR_1->szopts.size_log;
out:
 if (FUNC_2(VAR_2 < 1))
  VAR_2 = 1;
 FUNC_1(VAR_0)->pkt_len = VAR_2;
}
