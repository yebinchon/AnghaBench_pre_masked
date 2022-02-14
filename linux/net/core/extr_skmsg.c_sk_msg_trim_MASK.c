
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sock {int dummy; } ;
struct TYPE_4__ {int size; size_t end; size_t curr; int copybreak; size_t start; TYPE_1__* data; } ;
struct sk_msg {TYPE_2__ sg; } ;
struct TYPE_3__ {int length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*,int) ;
 int FUNC_2 (struct sock*,struct sk_msg*,size_t,int) ;
 scalar_t__ FUNC_3 (size_t,size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;

void FUNC_6(struct sock *VAR_0, struct sk_msg *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->sg.size - VAR_2;
 u32 VAR_4 = VAR_1->sg.end;

 if (VAR_3 <= 0) {
  FUNC_0(VAR_3 < 0);
  return;
 }

 FUNC_5(VAR_4);
 VAR_1->sg.size = VAR_2;
 while (VAR_1->sg.data[VAR_4].length &&
        VAR_3 >= VAR_1->sg.data[VAR_4].length) {
  VAR_3 -= VAR_1->sg.data[VAR_4].length;
  FUNC_2(VAR_0, VAR_1, VAR_4, 1);
  FUNC_5(VAR_4);
  if (!VAR_3)
   goto out;
 }

 VAR_1->sg.data[VAR_4].length -= VAR_3;
 FUNC_1(VAR_0, VAR_3);

 if (VAR_1->sg.curr == VAR_4 && VAR_1->sg.copybreak > VAR_1->sg.data[VAR_4].length)
  VAR_1->sg.copybreak = VAR_1->sg.data[VAR_4].length;
out:
 FUNC_4(VAR_4);
 VAR_1->sg.end = VAR_4;







 if (!VAR_1->sg.size) {
  VAR_1->sg.curr = VAR_1->sg.start;
  VAR_1->sg.copybreak = 0;
 } else if (FUNC_3(VAR_1->sg.start, VAR_1->sg.curr) >=
     FUNC_3(VAR_1->sg.start, VAR_1->sg.end)) {
  FUNC_5(VAR_4);
  VAR_1->sg.curr = VAR_4;
  VAR_1->sg.copybreak = VAR_1->sg.data[VAR_4].length;
 }
}
