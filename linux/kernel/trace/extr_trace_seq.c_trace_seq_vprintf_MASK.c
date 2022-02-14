
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {unsigned int len; } ;
struct trace_seq {int full; TYPE_1__ seq; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(struct trace_seq *VAR_0, const char *VAR_1, va_list VAR_2)
{
 unsigned int VAR_3 = VAR_0->seq.len;

 if (VAR_0->full)
  return;

 FUNC_0(VAR_0);

 FUNC_2(&VAR_0->seq, VAR_1, VAR_2);


 if (FUNC_3(FUNC_1(&VAR_0->seq))) {
  VAR_0->seq.len = VAR_3;
  VAR_0->full = 1;
 }
}
