
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_psock {int eval; scalar_t__ cork_bytes; scalar_t__ apply_bytes; struct sock* sk_redir; int * cork; } ;
struct TYPE_4__ {size_t start; size_t end; scalar_t__ size; TYPE_1__* data; } ;
struct sk_msg {scalar_t__ cork_bytes; TYPE_2__ sg; } ;
struct TYPE_3__ {scalar_t__ length; scalar_t__ page_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int FUNC_0 (struct sk_msg*) ;
 int * FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,struct sk_msg*,int) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_psock*,scalar_t__) ;
 int FUNC_7 (struct sock*,struct sk_msg*) ;
 int FUNC_8 (struct sock*,struct sk_msg*) ;
 int FUNC_9 (struct sock*,struct sk_msg*,scalar_t__) ;
 int FUNC_10 (struct sock*,struct sk_msg*,scalar_t__) ;
 int FUNC_11 (struct sock*,struct sk_psock*,struct sk_msg*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct sk_msg*,scalar_t__,int,int) ;
 int FUNC_14 (struct sock*,struct sk_msg*,scalar_t__,int) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_5, struct sk_psock *VAR_6,
    struct sk_msg *VAR_7, int *VAR_8, int VAR_9)
{
 bool VAR_10 = 0, VAR_11 = VAR_7->sg.start == VAR_7->sg.end;
 struct sock *VAR_12;
 u32 VAR_13, VAR_14 = 0;
 int VAR_15;

more_data:
 if (VAR_6->eval == VAR_4) {





  VAR_14 = VAR_7->sg.size;
  VAR_6->eval = FUNC_11(VAR_5, VAR_6, VAR_7);
  if (VAR_7->sg.size < VAR_14)
   VAR_14 -= VAR_7->sg.size;
  else
   VAR_14 = 0;
 }

 if (VAR_7->cork_bytes &&
     VAR_7->cork_bytes > VAR_7->sg.size && !VAR_11) {
  VAR_6->cork_bytes = VAR_7->cork_bytes - VAR_7->sg.size;
  if (!VAR_6->cork) {
   VAR_6->cork = FUNC_1(sizeof(*VAR_6->cork),
           VAR_2 | VAR_3);
   if (!VAR_6->cork)
    return -VAR_1;
  }
  FUNC_4(VAR_6->cork, VAR_7, sizeof(*VAR_7));
  return 0;
 }

 VAR_13 = VAR_7->sg.size;
 if (VAR_6->apply_bytes && VAR_6->apply_bytes < VAR_13)
  VAR_13 = VAR_6->apply_bytes;

 switch (VAR_6->eval) {
 case 129:
  VAR_15 = FUNC_13(VAR_5, VAR_7, VAR_13, VAR_9, 1);
  if (FUNC_15(VAR_15)) {
   *VAR_8 -= FUNC_7(VAR_5, VAR_7);
   break;
  }
  FUNC_6(VAR_6, VAR_13);
  break;
 case 128:
  VAR_12 = VAR_6->sk_redir;
  FUNC_6(VAR_6, VAR_13);
  if (VAR_6->cork) {
   VAR_10 = 1;
   VAR_6->cork = ((void*)0);
  }
  FUNC_10(VAR_5, VAR_7, VAR_13);
  FUNC_5(VAR_5);
  VAR_15 = FUNC_14(VAR_12, VAR_7, VAR_13, VAR_9);
  FUNC_3(VAR_5);
  if (FUNC_15(VAR_15 < 0)) {
   int VAR_16 = FUNC_8(VAR_5, VAR_7);

   if (!VAR_10)
    *VAR_8 -= VAR_16;
  }
  if (VAR_10) {
   FUNC_7(VAR_5, VAR_7);
   FUNC_0(VAR_7);
   VAR_7 = ((void*)0);
   VAR_15 = 0;
  }
  break;
 case 130:
 default:
  FUNC_9(VAR_5, VAR_7, VAR_13);
  FUNC_6(VAR_6, VAR_13);
  *VAR_8 -= (VAR_13 + VAR_14);
  return -VAR_0;
 }

 if (FUNC_2(!VAR_15)) {
  if (!VAR_6->apply_bytes) {
   VAR_6->eval = VAR_4;
   if (VAR_6->sk_redir) {
    FUNC_12(VAR_6->sk_redir);
    VAR_6->sk_redir = ((void*)0);
   }
  }
  if (VAR_7 &&
      VAR_7->sg.data[VAR_7->sg.start].page_link &&
      VAR_7->sg.data[VAR_7->sg.start].length)
   goto more_data;
 }
 return VAR_15;
}
