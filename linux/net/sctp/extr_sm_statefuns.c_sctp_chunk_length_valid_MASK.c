
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {int pdiscard; TYPE_1__* chunk_hdr; } ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {int length; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline bool FUNC_2(struct sctp_chunk *VAR_0,
        __u16 VAR_1)
{
 __u16 VAR_2 = FUNC_0(VAR_0->chunk_hdr->length);


 if (FUNC_1(VAR_0->pdiscard))
  return 0;
 if (FUNC_1(VAR_2 < VAR_1))
  return 0;

 return 1;
}
