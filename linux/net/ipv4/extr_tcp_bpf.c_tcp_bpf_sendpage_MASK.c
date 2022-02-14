
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_psock {size_t cork_bytes; int eval; struct sk_msg* cork; } ;
struct sk_msg {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,size_t) ;
 int FUNC_3 (struct sk_msg*) ;
 int FUNC_4 (struct sk_msg*) ;
 int FUNC_5 (struct sk_msg*,struct page*,size_t,int) ;
 struct sk_psock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,struct sk_psock*) ;
 int FUNC_8 (struct sock*,struct sk_psock*,struct sk_msg*,int*,int) ;
 int FUNC_9 (struct sock*,struct page*,int,size_t,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_1, struct page *VAR_2, int VAR_3,
       size_t VAR_4, int VAR_5)
{
 struct sk_msg VAR_6, *VAR_7 = ((void*)0);
 int VAR_8 = 0, VAR_9 = 0;
 struct sk_psock *VAR_10;
 bool VAR_11 = 0;

 VAR_10 = FUNC_6(VAR_1);
 if (FUNC_10(!VAR_10))
  return FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_1);
 if (VAR_10->cork) {
  VAR_7 = VAR_10->cork;
 } else {
  VAR_7 = &VAR_6;
  FUNC_4(VAR_7);
 }


 if (FUNC_10(FUNC_3(VAR_7)))
  goto out_err;

 FUNC_5(VAR_7, VAR_2, VAR_4, VAR_3);
 FUNC_2(VAR_1, VAR_4);
 VAR_9 = VAR_4;
 if (FUNC_3(VAR_7))
  VAR_11 = 1;
 if (VAR_10->cork_bytes) {
  if (VAR_4 > VAR_10->cork_bytes)
   VAR_10->cork_bytes = 0;
  else
   VAR_10->cork_bytes -= VAR_4;
  if (VAR_10->cork_bytes && !VAR_11)
   goto out_err;

  VAR_10->eval = VAR_0;
  VAR_10->cork_bytes = 0;
 }

 VAR_8 = FUNC_8(VAR_1, VAR_10, VAR_7, &VAR_9, VAR_5);
out_err:
 FUNC_1(VAR_1);
 FUNC_7(VAR_1, VAR_10);
 return VAR_9 ? VAR_9 : VAR_8;
}
