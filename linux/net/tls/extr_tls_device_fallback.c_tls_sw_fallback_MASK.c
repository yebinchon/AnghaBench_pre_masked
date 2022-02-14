
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tls_offload_context_tx {int dummy; } ;
struct tls_context {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct scatterlist {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct scatterlist*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct scatterlist*,struct sk_buff*,struct tls_offload_context_tx*,int *,int*,int*) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct scatterlist* FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct scatterlist*,int) ;
 int FUNC_8 (struct scatterlist*) ;
 struct sk_buff* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 struct sk_buff* FUNC_12 (struct tls_context*,struct scatterlist*,struct scatterlist*,struct sk_buff*,int,int ) ;
 struct tls_context* FUNC_13 (struct sock*) ;
 struct tls_offload_context_tx* FUNC_14 (struct tls_context*) ;

__attribute__((used)) static struct sk_buff *FUNC_15(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = FUNC_10(VAR_3) + FUNC_11(VAR_3);
 struct tls_context *VAR_5 = FUNC_13(VAR_2);
 struct tls_offload_context_tx *VAR_6 = FUNC_14(VAR_5);
 int VAR_7 = VAR_3->len - VAR_4;
 struct scatterlist *VAR_8, VAR_9[3];
 struct sk_buff *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12 = 0;
 s32 VAR_13 = 0;
 u64 VAR_14;





 VAR_11 = 2 * VAR_1 + 1;

 if (!VAR_7)
  return VAR_3;

 VAR_8 = FUNC_5(VAR_11, sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  goto free_orig;

 FUNC_7(VAR_8, VAR_11);
 FUNC_7(VAR_9, FUNC_0(VAR_9));

 if (FUNC_2(VAR_8, VAR_3, VAR_6, &VAR_14, &VAR_13, &VAR_12)) {

  if (VAR_13 < 0 && VAR_7 <= -VAR_13)
   VAR_10 = FUNC_9(VAR_3);
  goto put_sg;
 }

 VAR_10 = FUNC_12(VAR_5, VAR_9, VAR_8, VAR_3, VAR_13, VAR_14);

put_sg:
 while (VAR_12)
  FUNC_6(FUNC_8(&VAR_8[--VAR_12]));
 FUNC_3(VAR_8);
free_orig:
 if (VAR_10)
  FUNC_1(VAR_3);
 else
  FUNC_4(VAR_3);
 return VAR_10;
}
