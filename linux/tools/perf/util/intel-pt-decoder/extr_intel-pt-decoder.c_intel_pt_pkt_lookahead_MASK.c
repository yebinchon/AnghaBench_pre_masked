
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; } ;
struct intel_pt_pkt_info {size_t pos; size_t pkt_len; scalar_t__ last_packet_type; TYPE_1__ packet; void* data; struct intel_pt_decoder* decoder; } ;
struct intel_pt_decoder {unsigned char* buf; int pkt_ctx; size_t len; size_t pos; size_t pkt_step; scalar_t__ last_packet_type; } ;
typedef int (* intel_pt_pkt_cb_t ) (struct intel_pt_pkt_info*) ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char const*,size_t,TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_1(struct intel_pt_decoder *VAR_2,
      intel_pt_pkt_cb_t VAR_3, void *VAR_4)
{
 struct intel_pt_pkt_info VAR_5;
 const unsigned char *VAR_6 = VAR_2->buf;
 enum intel_pt_pkt_ctx VAR_7 = VAR_2->pkt_ctx;
 size_t VAR_8 = VAR_2->len;
 int VAR_9;

 VAR_5.decoder = VAR_2;
 VAR_5.pos = VAR_2->pos;
 VAR_5.pkt_len = VAR_2->pkt_step;
 VAR_5.last_packet_type = VAR_2->last_packet_type;
 VAR_5.data = VAR_4;

 while (1) {
  do {
   VAR_5.pos += VAR_5.pkt_len;
   VAR_6 += VAR_5.pkt_len;
   VAR_8 -= VAR_5.pkt_len;

   if (!VAR_8)
    return VAR_0;

   VAR_9 = FUNC_0(VAR_6, VAR_8, &VAR_5.packet,
        &VAR_7);
   if (!VAR_9)
    return VAR_0;
   if (VAR_9 < 0)
    return VAR_9;

   VAR_5.pkt_len = VAR_9;
  } while (VAR_5.packet.type == VAR_1);

  VAR_9 = VAR_3(&VAR_5);
  if (VAR_9)
   return 0;

  VAR_5.last_packet_type = VAR_5.packet.type;
 }
}
