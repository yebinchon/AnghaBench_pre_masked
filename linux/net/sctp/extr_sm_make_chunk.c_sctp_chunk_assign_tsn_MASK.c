
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* data_hdr; } ;
struct sctp_chunk {int has_tsn; int asoc; TYPE_2__ subh; } ;
struct TYPE_3__ {int tsn; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sctp_chunk *VAR_0)
{
 if (!VAR_0->has_tsn) {



  VAR_0->subh.data_hdr->tsn =
   FUNC_0(FUNC_1(VAR_0->asoc));
  VAR_0->has_tsn = 1;
 }
}
