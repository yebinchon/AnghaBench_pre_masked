
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int start; int end; struct scatterlist* data; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {int length; } ;


 int FUNC_0 (struct sock*,int) ;
 int FUNC_1 (int) ;

void FUNC_2(struct sock *VAR_0, struct sk_msg *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->sg.start;

 do {
  struct scatterlist *VAR_4 = &VAR_1->sg.data[VAR_3];
  int VAR_5 = (VAR_2 < VAR_4->length) ? VAR_2 : VAR_4->length;

  FUNC_0(VAR_0, VAR_5);
  VAR_2 -= VAR_5;
  FUNC_1(VAR_3);
 } while (VAR_3 != VAR_1->sg.end);
}
