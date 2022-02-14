
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ size; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {scalar_t__ length; scalar_t__ offset; } ;


 int FUNC_0 (struct sock*,scalar_t__) ;
 int FUNC_1 (struct sk_msg*,scalar_t__,scalar_t__) ;
 struct scatterlist* FUNC_2 (struct sk_msg*,scalar_t__) ;
 int FUNC_3 (struct sock*,struct sk_msg*,scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, struct sk_msg *VAR_1,
      u32 VAR_2, bool VAR_3)
{
 struct scatterlist *VAR_4;
 u32 VAR_5 = VAR_1->sg.start;

 while (VAR_2) {
  VAR_4 = FUNC_2(VAR_1, VAR_5);
  if (!VAR_4->length)
   break;
  if (VAR_2 < VAR_4->length) {
   if (VAR_3)
    FUNC_0(VAR_0, VAR_2);
   VAR_4->length -= VAR_2;
   VAR_4->offset += VAR_2;
   VAR_1->sg.size -= VAR_2;
   break;
  }

  VAR_1->sg.size -= VAR_4->length;
  VAR_2 -= VAR_4->length;
  FUNC_3(VAR_0, VAR_1, VAR_5, VAR_3);
  FUNC_4(VAR_5);
  FUNC_1(VAR_1, VAR_5, VAR_2);
 }
 VAR_1->sg.start = VAR_5;
}
