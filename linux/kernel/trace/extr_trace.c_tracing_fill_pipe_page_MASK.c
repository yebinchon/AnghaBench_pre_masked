
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct TYPE_5__ {TYPE_1__ seq; } ;
struct trace_iterator {int * ent; TYPE_2__ seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;
 int FUNC_2 (struct trace_iterator*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static size_t
FUNC_5(size_t VAR_2, struct trace_iterator *VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 int VAR_6;


 for (;;) {
  VAR_5 = VAR_3->seq.seq.len;
  VAR_6 = FUNC_0(VAR_3);

  if (FUNC_3(&VAR_3->seq)) {
   VAR_3->seq.seq.len = VAR_5;
   break;
  }






  if (VAR_6 == VAR_1) {
   VAR_3->seq.seq.len = VAR_5;
   break;
  }

  VAR_4 = FUNC_4(&VAR_3->seq) - VAR_5;
  if (VAR_2 < VAR_4) {
   VAR_2 = 0;
   VAR_3->seq.seq.len = VAR_5;
   break;
  }

  if (VAR_6 != VAR_0)
   FUNC_1(VAR_3);
  VAR_2 -= VAR_4;
  if (!FUNC_2(VAR_3)) {
   VAR_2 = 0;
   VAR_3->ent = ((void*)0);
   break;
  }
 }

 return VAR_2;
}
