
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ copybreak; void* curr; void* end; void* start; } ;
struct sk_msg {TYPE_1__ sg; scalar_t__ apply_bytes; } ;
struct tls_rec {int msg_encrypted; struct sk_msg msg_plaintext; } ;
struct sock {int dummy; } ;
struct scatterlist {scalar_t__ offset; scalar_t__ length; } ;


 int FUNC_0 (struct tls_rec*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct sk_msg*,void*) ;
 int FUNC_4 (struct sock*,int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, struct tls_rec *VAR_1,
      struct tls_rec *VAR_2, u32 VAR_3)
{
 struct sk_msg *VAR_4 = &VAR_2->msg_plaintext;
 struct sk_msg *VAR_5 = &VAR_1->msg_plaintext;
 struct scatterlist *VAR_6, *VAR_7;
 u32 VAR_8, VAR_9;

 VAR_8 = VAR_5->sg.end;
 FUNC_5(VAR_8);
 VAR_9 = VAR_4->sg.start;

 VAR_6 = FUNC_3(VAR_5, VAR_8);
 VAR_7 = FUNC_3(VAR_4, VAR_9);

 if (FUNC_2(VAR_6) == FUNC_2(VAR_7) &&
     VAR_6->offset + VAR_6->length == VAR_7->offset) {
  VAR_6->length += VAR_7->length;
  FUNC_1(FUNC_2(VAR_7));
 }

 VAR_5->sg.end = VAR_3;
 VAR_5->sg.curr = VAR_3;
 VAR_5->sg.copybreak = 0;
 VAR_5->apply_bytes = VAR_5->sg.size + VAR_4->sg.size;
 VAR_5->sg.size += VAR_4->sg.size;

 FUNC_4(VAR_0, &VAR_1->msg_encrypted);
 FUNC_6(&VAR_1->msg_encrypted, &VAR_2->msg_encrypted);

 FUNC_0(VAR_2);
}
