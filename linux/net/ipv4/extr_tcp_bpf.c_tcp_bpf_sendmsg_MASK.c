
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int sk_err; TYPE_2__* sk_socket; } ;
struct sk_psock {size_t cork_bytes; struct sk_msg* cork; int eval; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ end; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct msghdr {int msg_flags; int msg_iter; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct msghdr*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sock*,struct sk_msg*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct sock*,struct sk_msg*) ;
 int FUNC_6 (struct sk_msg*) ;
 int FUNC_7 (struct sock*,int *,struct sk_msg*,scalar_t__) ;
 int FUNC_8 (struct sock*,struct sk_msg*,scalar_t__) ;
 struct sk_psock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_psock*) ;
 int FUNC_11 (struct sock*,int,int) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,long*) ;
 long FUNC_14 (struct sock*,int) ;
 int FUNC_15 (struct sock*,struct sk_psock*,struct sk_msg*,int*,int) ;
 int FUNC_16 (struct sock*,struct msghdr*,size_t) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct sock *VAR_6, struct msghdr *VAR_7, size_t VAR_8)
{
 struct sk_msg VAR_9, *VAR_10 = ((void*)0);
 int VAR_11 = 0, VAR_12 = 0;
 struct sk_psock *VAR_13;
 long VAR_14;
 int VAR_15;


 VAR_15 = (VAR_7->msg_flags & ~VAR_3);
 VAR_15 |= VAR_2;

 VAR_13 = FUNC_9(VAR_6);
 if (FUNC_17(!VAR_13))
  return FUNC_16(VAR_6, VAR_7, VAR_8);

 FUNC_0(VAR_6);
 VAR_14 = FUNC_14(VAR_6, VAR_7->msg_flags & VAR_1);
 while (FUNC_1(VAR_7)) {
  bool VAR_16 = 0;
  u32 VAR_17, VAR_18;

  if (VAR_6->sk_err) {
   VAR_12 = -VAR_6->sk_err;
   goto out_err;
  }

  VAR_17 = FUNC_1(VAR_7);
  if (!FUNC_12(VAR_6))
   goto wait_for_sndbuf;
  if (VAR_13->cork) {
   VAR_10 = VAR_13->cork;
  } else {
   VAR_10 = &VAR_9;
   FUNC_6(VAR_10);
  }

  VAR_18 = VAR_10->sg.size;
  VAR_12 = FUNC_4(VAR_6, VAR_10, VAR_10->sg.size + VAR_17, VAR_10->sg.end - 1);
  if (VAR_12) {
   if (VAR_12 != -VAR_0)
    goto wait_for_memory;
   VAR_16 = 1;
   VAR_17 = VAR_10->sg.size - VAR_18;
  }

  VAR_12 = FUNC_7(VAR_6, &VAR_7->msg_iter, VAR_10,
            VAR_17);
  if (VAR_12 < 0) {
   FUNC_8(VAR_6, VAR_10, VAR_18);
   goto out_err;
  }

  VAR_11 += VAR_17;
  if (VAR_13->cork_bytes) {
   if (VAR_8 > VAR_13->cork_bytes)
    VAR_13->cork_bytes = 0;
   else
    VAR_13->cork_bytes -= VAR_8;
   if (VAR_13->cork_bytes && !VAR_16)
    goto out_err;

   VAR_13->eval = VAR_5;
   VAR_13->cork_bytes = 0;
  }

  VAR_12 = FUNC_15(VAR_6, VAR_13, VAR_10, &VAR_11, VAR_15);
  if (FUNC_17(VAR_12 < 0))
   goto out_err;
  continue;
wait_for_sndbuf:
  FUNC_3(VAR_4, &VAR_6->sk_socket->flags);
wait_for_memory:
  VAR_12 = FUNC_13(VAR_6, &VAR_14);
  if (VAR_12) {
   if (VAR_10 && VAR_10 != VAR_13->cork)
    FUNC_5(VAR_6, VAR_10);
   goto out_err;
  }
 }
out_err:
 if (VAR_12 < 0)
  VAR_12 = FUNC_11(VAR_6, VAR_7->msg_flags, VAR_12);
 FUNC_2(VAR_6);
 FUNC_10(VAR_6, VAR_13);
 return VAR_11 ? VAR_11 : VAR_12;
}
