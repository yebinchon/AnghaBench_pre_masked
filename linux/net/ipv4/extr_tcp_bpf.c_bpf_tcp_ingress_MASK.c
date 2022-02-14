
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_psock {int dummy; } ;
struct TYPE_2__ {int start; int end; int size; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct scatterlist {scalar_t__ length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_msg*) ;
 struct sk_msg* FUNC_2 (int,int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,scalar_t__) ;
 struct scatterlist* FUNC_6 (struct sk_msg*,int) ;
 int FUNC_7 (struct sock*,struct sk_msg*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct sk_msg*,int) ;
 int FUNC_10 (struct sk_msg*,struct sk_msg*,int,scalar_t__) ;
 int FUNC_11 (struct sock*,struct sk_psock*) ;
 int FUNC_12 (struct sk_psock*,struct sk_msg*) ;
 int FUNC_13 (struct sock*,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_3, struct sk_psock *VAR_4,
      struct sk_msg *VAR_5, u32 VAR_6, int VAR_7)
{
 bool VAR_8 = VAR_6;
 struct scatterlist *VAR_9;
 u32 VAR_10, VAR_11 = 0;
 struct sk_msg *VAR_12;
 int VAR_13, VAR_14 = 0;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_2 | VAR_1);
 if (FUNC_14(!VAR_12))
  return -VAR_0;

 FUNC_3(VAR_3);
 VAR_12->sg.start = VAR_5->sg.start;
 VAR_13 = VAR_5->sg.start;
 do {
  VAR_9 = FUNC_6(VAR_5, VAR_13);
  VAR_10 = (VAR_8 && VAR_6 < VAR_9->length) ?
   VAR_6 : VAR_9->length;
  if (!FUNC_13(VAR_3, VAR_10)) {
   if (!VAR_11)
    VAR_14 = -VAR_0;
   break;
  }

  FUNC_5(VAR_3, VAR_10);
  FUNC_10(VAR_12, VAR_5, VAR_13, VAR_10);
  VAR_11 += VAR_10;
  if (VAR_9->length)
   FUNC_0(FUNC_9(VAR_12, VAR_13));
  FUNC_8(VAR_13);
  VAR_12->sg.end = VAR_13;
  if (VAR_8) {
   VAR_6 -= VAR_10;
   if (!VAR_6)
    break;
  }
 } while (VAR_13 != VAR_5->sg.end);

 if (!VAR_14) {
  VAR_5->sg.start = VAR_13;
  VAR_5->sg.size -= VAR_6;
  FUNC_12(VAR_4, VAR_12);
  FUNC_11(VAR_3, VAR_4);
 } else {
  FUNC_7(VAR_3, VAR_12);
  FUNC_1(VAR_12);
 }

 FUNC_4(VAR_3);
 return VAR_14;
}
