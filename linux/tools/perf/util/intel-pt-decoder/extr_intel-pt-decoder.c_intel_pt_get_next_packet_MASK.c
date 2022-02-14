
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct intel_pt_decoder {scalar_t__ last_packet_type; int pos; int pkt_step; int buf; scalar_t__ len; int pkt_len; int next_buf; int pkt_ctx; TYPE_1__ packet; int prev_pkt_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (struct intel_pt_decoder*,int) ;
 int FUNC_3 (int,scalar_t__,TYPE_1__*,int *) ;
 int FUNC_4 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_5(struct intel_pt_decoder *VAR_4)
{
 int VAR_5;

 VAR_4->last_packet_type = VAR_4->packet.type;

 do {
  VAR_4->pos += VAR_4->pkt_step;
  VAR_4->buf += VAR_4->pkt_step;
  VAR_4->len -= VAR_4->pkt_step;

  if (!VAR_4->len) {
   VAR_5 = FUNC_2(VAR_4, 0);
   if (VAR_5)
    return VAR_5;
  }

  VAR_4->prev_pkt_ctx = VAR_4->pkt_ctx;
  VAR_5 = FUNC_3(VAR_4->buf, VAR_4->len,
       &VAR_4->packet, &VAR_4->pkt_ctx);
  if (VAR_5 == VAR_1 && VAR_0 == 32 &&
      VAR_4->len < VAR_3 && !VAR_4->next_buf) {
   VAR_5 = FUNC_4(VAR_4);
   if (VAR_5 < 0)
    return VAR_5;
  }
  if (VAR_5 <= 0)
   return FUNC_0(VAR_4);

  VAR_4->pkt_len = VAR_5;
  VAR_4->pkt_step = VAR_5;
  FUNC_1(VAR_4);
 } while (VAR_4->packet.type == VAR_2);

 return 0;
}
