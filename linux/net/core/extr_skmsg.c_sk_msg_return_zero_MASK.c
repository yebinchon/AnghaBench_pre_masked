
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int start; int end; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {int length; scalar_t__ offset; } ;


 int FUNC_0 (struct sock*,int) ;
 struct scatterlist* FUNC_1 (struct sk_msg*,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct sock *VAR_0, struct sk_msg *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_1->sg.start;

 do {
  struct scatterlist *VAR_4 = FUNC_1(VAR_1, VAR_3);

  if (VAR_2 < VAR_4->length) {
   VAR_4->length -= VAR_2;
   VAR_4->offset += VAR_2;
   FUNC_0(VAR_0, VAR_2);
   break;
  }

  FUNC_0(VAR_0, VAR_4->length);
  VAR_2 -= VAR_4->length;
  VAR_4->length = 0;
  VAR_4->offset = 0;
  FUNC_2(VAR_3);
 } while (VAR_2 && VAR_3 != VAR_1->sg.end);
 VAR_1->sg.start = VAR_3;
}
