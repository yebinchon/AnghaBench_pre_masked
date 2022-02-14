
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct tls_sw_context_tx {struct tls_rec* open_rec; } ;
struct TYPE_2__ {size_t size; } ;
struct sk_msg {size_t cork_bytes; int apply_bytes; TYPE_1__ sg; } ;
struct tls_rec {struct sk_msg msg_plaintext; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;
struct sk_psock {int eval; struct sock* sk_redir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_msg*,struct sk_msg*,int) ;
 int FUNC_3 (struct sock*) ;
 size_t FUNC_4 (struct sock*,struct sk_msg*) ;
 size_t FUNC_5 (struct sock*,struct sk_msg*) ;
 int FUNC_6 (struct sock*,struct sk_msg*,int) ;
 int FUNC_7 (struct sk_msg*) ;
 int FUNC_8 (struct sock*,struct sk_msg*,int) ;
 struct sk_psock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct sk_psock*,struct sk_msg*) ;
 int FUNC_11 (struct sock*,struct sk_psock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct sk_msg*,int,int) ;
 int FUNC_14 (struct sock*) ;
 struct tls_context* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int,int ) ;
 struct tls_sw_context_tx* FUNC_17 (struct tls_context*) ;

__attribute__((used)) static int FUNC_18(struct sk_msg *VAR_4, struct sock *VAR_5,
          bool VAR_6, u8 VAR_7,
          size_t *VAR_8, int VAR_9)
{
 struct tls_context *VAR_10 = FUNC_15(VAR_5);
 struct tls_sw_context_tx *VAR_11 = FUNC_17(VAR_10);
 struct sk_msg VAR_12 = { };
 struct sk_psock *VAR_13;
 struct sock *VAR_14;
 struct tls_rec *VAR_15;
 bool VAR_16, VAR_17;
 int VAR_18 = 0, VAR_19;
 u32 VAR_20 = 0;

 VAR_17 = !(VAR_9 & VAR_2);
 VAR_13 = FUNC_9(VAR_5);
 if (!VAR_13 || !VAR_17)
  return FUNC_16(VAR_5, VAR_9, VAR_7);
more_data:
 VAR_16 = FUNC_7(VAR_4);
 if (VAR_13->eval == VAR_3) {
  VAR_20 = VAR_4->sg.size;
  VAR_13->eval = FUNC_10(VAR_5, VAR_13, VAR_4);
  if (VAR_20 < VAR_4->sg.size)
   VAR_20 -= VAR_4->sg.size;
  else
   VAR_20 = 0;
 }
 if (VAR_4->cork_bytes && VAR_4->cork_bytes > VAR_4->sg.size &&
     !VAR_16 && !VAR_6) {
  VAR_18 = -VAR_1;
  goto out_err;
 }
 VAR_4->cork_bytes = 0;
 VAR_19 = VAR_4->sg.size;
 if (VAR_4->apply_bytes && VAR_4->apply_bytes < VAR_19)
  VAR_19 = VAR_4->apply_bytes;

 switch (VAR_13->eval) {
 case 129:
  VAR_18 = FUNC_16(VAR_5, VAR_9, VAR_7);
  if (VAR_18 < 0) {
   *VAR_8 -= FUNC_4(VAR_5, VAR_4);
   FUNC_14(VAR_5);
   goto out_err;
  }
  break;
 case 128:
  VAR_14 = VAR_13->sk_redir;
  FUNC_2(&VAR_12, VAR_4, sizeof(*VAR_4));
  if (VAR_4->apply_bytes < VAR_19)
   VAR_4->apply_bytes = 0;
  else
   VAR_4->apply_bytes -= VAR_19;
  FUNC_8(VAR_5, VAR_4, VAR_19);
  VAR_4->sg.size -= VAR_19;
  FUNC_3(VAR_5);
  VAR_18 = FUNC_13(VAR_14, &VAR_12, VAR_19, VAR_9);
  FUNC_1(VAR_5);
  if (VAR_18 < 0) {
   *VAR_8 -= FUNC_5(VAR_5, &VAR_12);
   VAR_4->sg.size = 0;
  }
  if (VAR_4->sg.size == 0)
   FUNC_14(VAR_5);
  break;
 case 130:
 default:
  FUNC_6(VAR_5, VAR_4, VAR_19);
  if (VAR_4->apply_bytes < VAR_19)
   VAR_4->apply_bytes = 0;
  else
   VAR_4->apply_bytes -= VAR_19;
  if (VAR_4->sg.size == 0)
   FUNC_14(VAR_5);
  *VAR_8 -= (VAR_19 + VAR_20);
  VAR_18 = -VAR_0;
 }

 if (FUNC_0(!VAR_18)) {
  bool VAR_21 = !VAR_11->open_rec;

  VAR_15 = VAR_11->open_rec;
  if (VAR_15) {
   VAR_4 = &VAR_15->msg_plaintext;
   if (!VAR_4->apply_bytes)
    VAR_21 = 1;
  }
  if (VAR_21) {
   VAR_13->eval = VAR_3;
   if (VAR_13->sk_redir) {
    FUNC_12(VAR_13->sk_redir);
    VAR_13->sk_redir = ((void*)0);
   }
  }
  if (VAR_15)
   goto more_data;
 }
 out_err:
 FUNC_11(VAR_5, VAR_13);
 return VAR_18;
}
