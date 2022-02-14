
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; } ;
struct trace_seq {int full; TYPE_1__ seq; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int,unsigned long const*) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct trace_seq *VAR_0, const unsigned long *VAR_1,
        int VAR_2)
{
 unsigned int VAR_3 = VAR_0->seq.len;

 if (VAR_0->full)
  return;

 FUNC_0(VAR_0);

 FUNC_2(&VAR_0->seq, "%*pb", VAR_2, VAR_1);

 if (FUNC_3(FUNC_1(&VAR_0->seq))) {
  VAR_0->seq.len = VAR_3;
  VAR_0->full = 1;
 }
}
