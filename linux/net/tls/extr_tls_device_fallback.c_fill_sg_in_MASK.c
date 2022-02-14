
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tls_record_info {int * frags; } ;
struct tls_offload_context_tx {int lock; } ;
struct sk_buff {int len; } ;
struct scatterlist {int length; } ;
typedef int skb_frag_t ;
typedef int s32 ;
struct TYPE_2__ {int seq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scatterlist*,int ,scalar_t__,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,struct scatterlist*,int,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 struct tls_record_info* FUNC_12 (struct tls_offload_context_tx*,int,int *) ;
 int FUNC_13 (struct tls_record_info*) ;
 int FUNC_14 (struct tls_record_info*) ;

__attribute__((used)) static int FUNC_15(struct scatterlist *VAR_1,
        struct sk_buff *VAR_2,
        struct tls_offload_context_tx *VAR_3,
        u64 *VAR_4,
        s32 *VAR_5,
        int *VAR_6)
{
 int VAR_7 = FUNC_7(VAR_2) + FUNC_11(VAR_2);
 int VAR_8 = VAR_2->len - VAR_7;
 u32 VAR_9 = FUNC_1(FUNC_10(VAR_2)->seq);
 struct tls_record_info *VAR_10;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_8(&VAR_3->lock, VAR_11);
 VAR_10 = FUNC_12(VAR_3, VAR_9, VAR_4);
 if (!VAR_10) {
  FUNC_9(&VAR_3->lock, VAR_11);
  return -VAR_0;
 }

 *VAR_5 = VAR_9 - FUNC_14(VAR_10);
 if (*VAR_5 < 0) {
  int VAR_14 = FUNC_13(VAR_10);

  FUNC_9(&VAR_3->lock, VAR_11);
  if (!VAR_14)
   *VAR_5 = 0;
  return -VAR_0;
 }

 VAR_12 = *VAR_5;
 for (VAR_13 = 0; VAR_12 > 0; VAR_13++) {
  skb_frag_t *VAR_15 = &VAR_10->frags[VAR_13];

  FUNC_0(VAR_15);
  FUNC_2(VAR_1 + VAR_13, FUNC_4(VAR_15),
       FUNC_5(VAR_15), FUNC_3(VAR_15));

  VAR_12 -= FUNC_5(VAR_15);

  if (VAR_12 < 0)
   VAR_1[VAR_13].length += VAR_12;
 }
 *VAR_6 = VAR_13;

 FUNC_9(&VAR_3->lock, VAR_11);
 if (FUNC_6(VAR_2, &VAR_1[VAR_13], VAR_7, VAR_8) < 0)
  return -VAR_0;

 return 0;
}
