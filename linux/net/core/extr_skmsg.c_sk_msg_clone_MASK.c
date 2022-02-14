
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct TYPE_2__ {int start; int end; int size; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {scalar_t__ length; scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scatterlist*) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct sock*,scalar_t__) ;
 struct scatterlist* FUNC_3 (struct sk_msg*,int) ;
 int FUNC_4 (struct sk_msg*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sk_msg*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_7(struct sock *VAR_1, struct sk_msg *VAR_2, struct sk_msg *VAR_3,
   u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = VAR_3->sg.start;
 struct scatterlist *VAR_7 = FUNC_3(VAR_3, VAR_6);
 struct scatterlist *VAR_8 = ((void*)0);
 u32 VAR_9, VAR_10;

 while (VAR_4) {
  if (VAR_7->length > VAR_4)
   break;
  VAR_4 -= VAR_7->length;
  FUNC_5(VAR_6);
  if (VAR_6 == VAR_3->sg.end && VAR_4)
   return -VAR_0;
  VAR_7 = FUNC_3(VAR_3, VAR_6);
 }

 while (VAR_5) {
  VAR_9 = VAR_7->length - VAR_4;
  if (VAR_9 > VAR_5)
   VAR_9 = VAR_5;

  if (VAR_2->sg.end)
   VAR_8 = FUNC_3(VAR_2, VAR_2->sg.end - 1);

  if (VAR_8 &&
      (FUNC_0(VAR_7) == FUNC_0(VAR_8)) &&
      (FUNC_1(VAR_7) + VAR_4 == FUNC_1(VAR_8) + VAR_8->length)) {
   VAR_8->length += VAR_9;
   VAR_2->sg.size += VAR_9;
  } else if (!FUNC_4(VAR_2)) {
   VAR_10 = VAR_7->offset + VAR_4;
   FUNC_6(VAR_2, FUNC_0(VAR_7), VAR_9, VAR_10);
  } else {
   return -VAR_0;
  }

  VAR_4 = 0;
  VAR_5 -= VAR_9;
  FUNC_2(VAR_1, VAR_9);
  FUNC_5(VAR_6);
  if (VAR_6 == VAR_3->sg.end && VAR_5)
   return -VAR_0;
  VAR_7 = FUNC_3(VAR_3, VAR_6);
 }

 return 0;
}
