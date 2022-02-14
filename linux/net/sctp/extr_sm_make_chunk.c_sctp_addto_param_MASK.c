
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int skb; int chunk_end; TYPE_1__* chunk_hdr; } ;
struct TYPE_2__ {int length; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void const*,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(struct sctp_chunk *VAR_0, int VAR_1,
         const void *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_0->chunk_hdr->length);
 void *VAR_4;

 VAR_4 = FUNC_4(VAR_0->skb, VAR_1);

 if (VAR_2)
  FUNC_1(VAR_4, VAR_2, VAR_1);
 else
  FUNC_2(VAR_4, 0, VAR_1);


 VAR_0->chunk_hdr->length = FUNC_0(VAR_3 + VAR_1);
 VAR_0->chunk_end = FUNC_5(VAR_0->skb);

 return VAR_4;
}
