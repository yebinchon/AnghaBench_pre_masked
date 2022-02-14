
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int skb; int chunk_end; TYPE_1__* chunk_hdr; } ;
struct iov_iter {int dummy; } ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int,struct iov_iter*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct sctp_chunk *VAR_1, int VAR_2,
     struct iov_iter *VAR_3)
{
 void *VAR_4;


 VAR_4 = FUNC_3(VAR_1->skb, VAR_2);


 if (!FUNC_0(VAR_4, VAR_2, VAR_3))
  return -VAR_0;


 VAR_1->chunk_hdr->length =
  FUNC_1(FUNC_2(VAR_1->chunk_hdr->length) + VAR_2);
 VAR_1->chunk_end = FUNC_4(VAR_1->skb);

 return 0;
}
