
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int len; } ;
struct trace_seq {int full; TYPE_1__ seq; } ;


 unsigned int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,void const*,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct trace_seq *VAR_0, const void *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_0->seq.len;

 if (VAR_0->full)
  return;

 FUNC_1(VAR_0);


 if (VAR_2 * 2 > FUNC_0(VAR_0)) {
  VAR_0->full = 1;
  return;
 }


 FUNC_3(&VAR_0->seq, VAR_1, VAR_2);

 if (FUNC_4(FUNC_2(&VAR_0->seq))) {
  VAR_0->seq.len = VAR_3;
  VAR_0->full = 1;
  return;
 }
}
