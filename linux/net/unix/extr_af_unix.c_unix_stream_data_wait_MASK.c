
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; scalar_t__ sk_err; int sk_receive_queue; } ;
struct sk_buff {unsigned int len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 long FUNC_2 (long) ;
 int FUNC_3 (int ,int *,int ) ;
 long FUNC_4 (long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (int ,struct sock*) ;
 int FUNC_8 (struct sock*) ;
 struct sk_buff* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int VAR_5 ;

__attribute__((used)) static long FUNC_13(struct sock *VAR_6, long VAR_7,
      struct sk_buff *VAR_8, unsigned int VAR_9,
      bool VAR_10)
{
 struct sk_buff *VAR_11;
 FUNC_0(VAR_5);

 FUNC_11(VAR_6);

 for (;;) {
  FUNC_3(FUNC_8(VAR_6), &VAR_5, VAR_3);

  VAR_11 = FUNC_9(&VAR_6->sk_receive_queue);
  if (VAR_11 != VAR_8 ||
      (VAR_11 && VAR_11->len != VAR_9) ||
      VAR_6->sk_err ||
      (VAR_6->sk_shutdown & VAR_0) ||
      FUNC_5(VAR_4) ||
      !VAR_7)
   break;

  FUNC_7(VAR_1, VAR_6);
  FUNC_12(VAR_6);
  if (VAR_10)
   VAR_7 = FUNC_2(VAR_7);
  else
   VAR_7 = FUNC_4(VAR_7);
  FUNC_11(VAR_6);

  if (FUNC_10(VAR_6, VAR_2))
   break;

  FUNC_6(VAR_1, VAR_6);
 }

 FUNC_1(FUNC_8(VAR_6), &VAR_5);
 FUNC_12(VAR_6);
 return VAR_7;
}
