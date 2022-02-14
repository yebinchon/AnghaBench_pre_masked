
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ end; scalar_t__ start; scalar_t__ copybreak; scalar_t__ curr; } ;
struct sk_msg {scalar_t__ apply_bytes; TYPE_1__ sg; } ;
struct tls_rec {struct sk_msg msg_plaintext; int msg_encrypted; } ;
struct sock {int dummy; } ;
struct scatterlist {scalar_t__ length; scalar_t__ offset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct sock*,int *,scalar_t__,int ) ;
 struct scatterlist* FUNC_6 (struct sk_msg*,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sock*,struct tls_rec*) ;
 struct tls_rec* FUNC_9 (struct sock*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_1, struct tls_rec *VAR_2,
     struct tls_rec **VAR_3, struct sk_msg *VAR_4,
     struct sk_msg *VAR_5, u32 VAR_6,
     u32 VAR_7, u32 *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11 = 0, VAR_12 = VAR_4->apply_bytes;
 struct scatterlist *VAR_13, *VAR_14, *VAR_15;
 u32 VAR_16 = VAR_4->sg.size;
 struct scatterlist VAR_17 = { };
 struct sk_msg *VAR_18;
 struct tls_rec *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_9(VAR_1);
 if (!VAR_19)
  return -VAR_0;
 VAR_20 = FUNC_5(VAR_1, &VAR_19->msg_encrypted, VAR_4->sg.size +
      VAR_7, 0);
 if (VAR_20 < 0) {
  FUNC_8(VAR_1, VAR_19);
  return VAR_20;
 }

 *VAR_8 = VAR_4->sg.end;
 VAR_9 = VAR_4->sg.start;
 VAR_13 = FUNC_6(VAR_4, VAR_9);
 while (VAR_12 && VAR_13->length) {
  if (VAR_13->length > VAR_12) {
   u32 VAR_21 = VAR_13->length - VAR_12;

   FUNC_0(FUNC_2(VAR_13));
   FUNC_3(&VAR_17, FUNC_2(VAR_13), VAR_21,
        VAR_13->offset + VAR_12);
   VAR_13->length = VAR_12;
   VAR_11 += VAR_12;
   VAR_12 = 0;
  } else {
   VAR_12 -= VAR_13->length;
   VAR_11 += VAR_13->length;
  }

  FUNC_7(VAR_9);
  if (VAR_9 == VAR_4->sg.end)
   break;
  VAR_13 = FUNC_6(VAR_4, VAR_9);
 }

 VAR_4->sg.end = VAR_9;
 VAR_4->sg.curr = VAR_9;
 VAR_4->sg.copybreak = 0;
 VAR_4->apply_bytes = 0;
 VAR_4->sg.size = VAR_11;

 VAR_18 = &VAR_19->msg_plaintext;
 VAR_18->apply_bytes = VAR_12;
 VAR_18->sg.size = VAR_16 - VAR_11;

 VAR_10 = VAR_18->sg.start;
 VAR_15 = FUNC_6(VAR_18, VAR_10);
 if (VAR_17.length) {
  FUNC_1(VAR_15, &VAR_17, sizeof(*VAR_15));
  FUNC_7(VAR_10);
  VAR_15 = FUNC_6(VAR_18, VAR_10);
 }

 VAR_14 = FUNC_6(VAR_4, VAR_9);
 while (VAR_14->length) {
  FUNC_1(VAR_15, VAR_14, sizeof(*VAR_15));
  FUNC_4(VAR_15);
  FUNC_7(VAR_9);
  FUNC_7(VAR_10);
  if (VAR_9 == *VAR_8)
   break;
  VAR_14 = FUNC_6(VAR_4, VAR_9);
  VAR_15 = FUNC_6(VAR_18, VAR_10);
 }

 VAR_18->sg.end = VAR_10;
 VAR_18->sg.curr = VAR_10;
 VAR_18->sg.copybreak = 0;

 *VAR_3 = VAR_19;
 return 0;
}
